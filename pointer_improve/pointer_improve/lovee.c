//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z) {
//    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//        if (f(x, y, z) <= 0.0f)
//            return y;
//    return 0.0f;
//}
//
//int main() {
//    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD coord = { 0, 0 };
//    DWORD count;
//    float t, x, y, z, scale = 10, phase = 0;
//
//    while (1) {
//        for (y = 1.5f; y > -1.5f; y -= 0.1f) {
//            for (x = -1.5f; x < 1.5f; x += 0.05f) {
//                z = 0.0f;
//                float v = f(x, y, z);
//                if (v <= 0.0f) {
//                    float y0 = h(x, z);
//                    float ny = 0.01f;
//                    float nx = h(x + ny, z) - y0;
//                    float nz = h(x, z + ny) - y0;
//                    float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//                    float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//                    coord.X = (SHORT)(x * scale + 80);
//                    coord.Y = (SHORT)(y * scale + 20);
//                    SetConsoleCursorPosition(hOut, coord);
//                    SetConsoleTextAttribute(hOut, (WORD)((d * 12) + 4));
//                    putchar('*');
//                }
//            }
//        }
//        phase += 0.1f;
//        Sleep(100);
//        system("cls");
//    }
//    return 0;
//}