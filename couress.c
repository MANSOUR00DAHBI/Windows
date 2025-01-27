/*You can use the** `GetSystemMetrics`** function from the Windows API to retrieve the screen width and height in C.Here's a sample program demonstrating how to do this:

```c*/
#include <windows.h>
#include <stdio.h>

int main() {
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    printf("Screen Width: %d\n", screenWidth);
    printf("Screen Height: %d\n", screenHeight);

    HWND hwnd = GetForegroundWindow(); // Get a handle to the foreground window
    if (hwnd == NULL) {
        printf("No window found.\n");
        return 1;
    }

    RECT rect;
    if (GetWindowRect(hwnd, &rect)) {
        int windowWidth = rect.right - rect.left;
        int windowHeight = rect.bottom - rect.top;
        printf("Window Width: %d\n", windowWidth);
        printf("Window Height: %d\n", windowHeight);
    }
    else {
        printf("Failed to get window dimensions.\n");
    }

    return 0;
}
/*
```

In this example:
- The **`GetSystemMetrics`** function is called with **`SM_CXSCREEN`** and **`SM_CYSCREEN`** parameters to get the screen width and height, respectively.
- The values are then printed to the console.

Would you like some more tips or another example?
*/