#ifndef SC_H
#define SC_H 
#define H_H 

int Desplay(void);
HWND hwnd; // = GetForegroundWindow(); // Get a handle to the foreground window

RECT rect;
  int window_Width   ;//= rect.right - rect.left;
  int window_Height  ;// = rect.bottom - rect.top;

#endif // !SC_H

#ifdef SC_H
int Desplay(void) {
   // extern int window_Width, window_Height;
    hwnd = GetForegroundWindow(); // Get a handle to the foreground window
    if (hwnd == NULL) {
        printf("No window found.\n");
        return 1;
    }


    if (GetWindowRect(hwnd, &rect)) {
        window_Width = rect.right - rect.left;
        window_Height = rect.bottom - rect.top;
        
    }
    else {
        printf("Failed to get window dimensions.\n");
    }
    return 0;
}
#endif // SC_H
