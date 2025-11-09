#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // 用于_getch()
#include <time.h>
#include <windows.h> // 用于Sleep()

#define WIDTH 10
#define HEIGHT 20
#define BLOCK_SIZE 4

// 方块形状定义 (使用4x4网格表示)
int tetrominoes[7][4][4] = {
    // I 方块
    {
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // O 方块
    {
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0}
    },
    // T 方块
    {
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // S 方块
    {
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // Z 方块
    {
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // J 方块
    {
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // L 方块
    {
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0}
    }
};

int gameArea[HEIGHT][WIDTH] = { 0 };
int currentBlock[4][4];
int blockX, blockY;
int currentBlockType;
int gameOver = 0;
int score = 0;

// 初始化游戏区域
void initGameArea() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            gameArea[y][x] = 0;
        }
    }
}

// 随机生成一个新方块
void newBlock() {
    currentBlockType = rand() % 7;
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            currentBlock[y][x] = tetrominoes[currentBlockType][y][x];
        }
    }
    blockX = WIDTH / 2 - 2;
    blockY = 0;
}

// 检查方块是否可以放置在指定位置
int canPlace(int block[4][4], int x, int y) {
    for (int dy = 0; dy < 4; dy++) {
        for (int dx = 0; dx < 4; dx++) {
            if (block[dy][dx]) {
                int newX = x + dx;
                int newY = y + dy;
                if (newX < 0 || newX >= WIDTH || newY >= HEIGHT) {
                    return 0;
                }
                if (newY >= 0 && gameArea[newY][newX]) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

// 将当前方块固定到游戏区域
void placeBlock() {
    for (int dy = 0; dy < 4; dy++) {
        for (int dx = 0; dx < 4; dx++) {
            if (currentBlock[dy][dx]) {
                int x = blockX + dx;
                int y = blockY + dy;
                if (y >= 0) {
                    gameArea[y][x] = 1;
                }
            }
        }
    }
}

// 旋转当前方块
void rotateBlock() {
    int rotated[4][4] = { 0 };
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            rotated[x][3 - y] = currentBlock[y][x];
        }
    }

    if (canPlace(rotated, blockX, blockY)) {
        for (int y = 0; y < 4; y++) {
            for (int x = 0; x < 4; x++) {
                currentBlock[y][x] = rotated[y][x];
            }
        }
    }
}

// 检查并消除完整的行
void checkLines() {
    for (int y = HEIGHT - 1; y >= 0; y--) {
        int full = 1;
        for (int x = 0; x < WIDTH; x++) {
            if (!gameArea[y][x]) {
                full = 0;
                break;
            }
        }

        if (full) {
            score += 100;
            // 将上面的行下移
            for (int ky = y; ky > 0; ky--) {
                for (int x = 0; x < WIDTH; x++) {
                    gameArea[ky][x] = gameArea[ky - 1][x];
                }
            }
            // 顶行清零
            for (int x = 0; x < WIDTH; x++) {
                gameArea[0][x] = 0;
            }
            y++; // 重新检查当前行
        }
    }
}

// 绘制游戏区域
void draw() {
    system("cls"); // 清屏

    // 绘制游戏区域顶部边界
    for (int x = 0; x < WIDTH + 2; x++) {
        printf("#");
    }
    printf("\n");

    // 绘制游戏区域
    for (int y = 0; y < HEIGHT; y++) {
        printf("#"); // 左边界
        for (int x = 0; x < WIDTH; x++) {
            int isBlock = 0;

            // 检查当前位置是否有当前方块
            if (blockY >= 0 && blockY < HEIGHT) {
                for (int dy = 0; dy < 4; dy++) {
                    for (int dx = 0; dx < 4; dx++) {
                        if (currentBlock[dy][dx] &&
                            blockX + dx == x &&
                            blockY + dy == y) {
                            isBlock = 1;
                            break;
                        }
                    }
                    if (isBlock) break;
                }
            }

            if (isBlock) {
                printf("[]");
            }
            else if (gameArea[y][x]) {
                printf("[]");
            }
            else {
                printf("  ");
            }
        }
        printf("#\n"); // 右边界
    }

    // 绘制游戏区域底部边界
    for (int x = 0; x < WIDTH + 2; x++) {
        printf("#");
    }
    printf("\n");

    // 显示分数
    printf("Score: %d\n", score);

    // 游戏结束提示
    if (gameOver) {
        printf("GAME OVER! Press R to restart.\n");
    }
}

// 游戏主循环
void gameLoop() {
    int dropCounter = 0;
    int dropInterval = 20; // 下落速度控制

    while (!gameOver) {
        if (_kbhit()) {
            char key = _getch();
            switch (key) {
            case 'a': // 左移
                if (canPlace(currentBlock, blockX - 1, blockY)) {
                    blockX--;
                }
                break;
            case 'd': // 右移
                if (canPlace(currentBlock, blockX + 1, blockY)) {
                    blockX++;
                }
                break;
            case 's': // 加速下落
                if (canPlace(currentBlock, blockX, blockY + 1)) {
                    blockY++;
                }
                break;
            case 'w': // 旋转
                rotateBlock();
                break;
            case 'r': // 重新开始
                if (gameOver) {
                    initGameArea();
                    score = 0;
                    gameOver = 0;
                    newBlock();
                }
                break;
            case 27: // ESC键退出
                return;
            }
        }

        // 方块自动下落
        dropCounter++;
        if (dropCounter >= dropInterval) {
            dropCounter = 0;
            if (canPlace(currentBlock, blockX, blockY + 1)) {
                blockY++;
            }
            else {
                placeBlock();
                checkLines();
                newBlock();

                // 检查新方块是否可以放置，如果不能则游戏结束
                if (!canPlace(currentBlock, blockX, blockY)) {
                    gameOver = 1;
                }
            }
        }

        draw();
        Sleep(50); // 控制游戏速度
    }
}

int main() {
    srand(time(NULL)); // 初始化随机数种子

    initGameArea();
    newBlock();

    printf("俄罗斯方块游戏\n");
    printf("控制: A左移, D右移, S加速下落, W旋转, R重新开始, ESC退出\n");
    printf("按任意键开始游戏...");
    _getch();

    gameLoop();

    return 0;
}