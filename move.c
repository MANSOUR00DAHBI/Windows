#include <windows.h>
#include <stdio.h>

void MoveWindowWithKeys(HWND hwnd) {
    RECT rect;
    GetWindowRect(hwnd, &rect);
    int x = rect.left;
    int y = rect.top;

    while (1) {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            x -= 10;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            x += 10;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000) {
            y -= 10;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            y += 10;
        }

        SetWindowPos(hwnd, NULL, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

        Sleep(50); // To prevent excessive CPU usage
    }
}

int main() {
    HWND hwnd = GetForegroundWindow(); // Get a handle to the foreground window
    if (hwnd == NULL) {
        printf("No window found.\n");
        return 1;
    }

    MoveWindowWithKeys(hwnd);

    return 0;
}
