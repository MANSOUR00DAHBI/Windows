#include <windows.h>
#include <stdio.h>

void MoveCursorWithKeys() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD coord;

    while (1) {
        GetConsoleScreenBufferInfo(hConsole, &csbi);
        coord = csbi.dwCursorPosition;

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            if (coord.X > 0) coord.X -= 1;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            coord.X += 1;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000) {
            if (coord.Y > 0) coord.Y -= 1;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            coord.Y += 1;
        }

        SetConsoleCursorPosition(hConsole, coord);

        Sleep(50); // To prevent excessive CPU usage
    }
}

int main() {
    MoveCursorWithKeys();
    return 0;
}
