#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    MessageBox(NULL, TEXT("Hello, World!"), TEXT("Hello"), MB_OK | MB_ICONINFORMATION);
    return 0;
}
