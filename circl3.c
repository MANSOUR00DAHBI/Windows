/*

If you want to create a** window** (`HWND`) and draw a circle on it in a Windows application, you can use the** Windows API** .Below is an example of how to create a window and draw a circle using the `GDI` (Graphics Device Interface) functions.

    -- -

    ### Example Code : Drawing a Circle in a Windows Application
    ```c

 */

#include <windows.h>

    // Window procedure to handle messages
    LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // Draw a circle
        int centerX = 200; // X-coordinate of the center
        int centerY = 150; // Y-coordinate of the center
        int radius = 100;  // Radius of the circle

        Ellipse(hdc, centerX - radius, centerY - radius, centerX + radius, centerY + radius);

        EndPaint(hwnd, &ps);
        return 0;
    }

    case WM_DESTROY:
        PostQuitMessage(0); // Exit the application
        return 0;

    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

// Entry point of the application
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    // Register the window class
    const wchar_t CLASS_NAME[] = L"Sample Window Class";

    WNDCLASS wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    // Create the window
    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles
        CLASS_NAME,                     // Window class
      L"Circle Drawing Example",      // Window title
        WS_OVERLAPPEDWINDOW,            // Window style
        CW_USEDEFAULT, CW_USEDEFAULT,   // Position
        500, 400,                       // Size
        NULL,                           // Parent window
        NULL,                           // Menu
        hInstance,                      // Instance handle
        NULL                            // Additional application data
    );

    if (hwnd == NULL) {
        return 0;
    }

    // Show the window
    ShowWindow(hwnd, nCmdShow);

    // Run the message loop
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

/*
```

-- -

### Explanation:
1. * *`WindowProc` Function * *:
-Handles messages sent to the window.
- When the `WM_PAINT` message is received, it draws a circle using the `Ellipse` function from the GDI.

2. * *`Ellipse` Function * *:
-Draws an ellipse(or circle) within a bounding rectangle.
- The bounding rectangle is defined by :
-`(centerX - radius, centerY - radius)` as the top - left corner.
- `(centerX + radius, centerY + radius)` as the bottom - right corner.

3. * *`wWinMain` Function * *:
-Registers the window class.
- Creates the window using `CreateWindowEx`.
- Displays the window and enters the message loop.

4. * *Message Loop * *:
-Processes messages(e.g., mouse clicks, keyboard input) for the window.

-- -

### How to Compile :
1. Save the code in a file(e.g., `circle.c`).
    2. Compile using a C compiler that supports the Windows API(e.g., MinGW or Visual Studio).
    - For MinGW :
```bash
gcc circle.c - o circle.exe - mwindows
```
- For Visual Studio :
-Create a new Windows Desktop Application project and paste the code.

3. Run the executable to see the window with the circle.

-- -

### Output:
When you run the program, a window will appear with a circle drawn in the center.

-- -

### Notes :
    -This example uses the * *Windows API * *and **GDI * *for drawing.
    - If you want to create more advanced graphics, consider using** Direct2D**, ** OpenGL**, or **DirectX * *.
    - The `Ellipse` function is part of the GDI, which is a simple and easy - to - use graphics API for basic shapes.

    Let me know if you need further assistance!😊*/