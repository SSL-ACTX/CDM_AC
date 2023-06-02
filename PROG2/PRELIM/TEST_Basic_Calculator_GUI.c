#include <windows.h>

#define IDC_NUM1      100
#define IDC_NUM2      101
#define IDC_RESULT    102
#define IDC_ADD       103
#define IDC_SUBTRACT  104
#define IDC_MULTIPLY  105
#define IDC_DIVIDE    106

HWND hNum1, hNum2, hResult;
HWND hAdd, hSubtract, hMultiply, hDivide;

void HideConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_MINIMIZE);
}

void DoCalculation(HWND hwnd, int operation)
{
    int num1 = GetDlgItemInt(hwnd, IDC_NUM1, NULL, FALSE);
    int num2 = GetDlgItemInt(hwnd, IDC_NUM2, NULL, FALSE);
    int result = 0;


    switch (operation)
    {
    case IDC_ADD:
        result = num1 + num2;
        break;
    case IDC_SUBTRACT:
        result = num1 - num2;
        break;
    case IDC_MULTIPLY:
        result = num1 * num2;
        break;
    case IDC_DIVIDE:
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        break;
    }

    SetDlgItemInt(hwnd, IDC_RESULT, result, FALSE);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_CREATE:

        hNum1 = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", "",
                               WS_CHILD | WS_VISIBLE | ES_NUMBER | ES_RIGHT,
                               10, 10, 100, 20, hwnd, (HMENU)IDC_NUM1, GetModuleHandle(NULL), NULL);
        hNum2 = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", "",
                               WS_CHILD | WS_VISIBLE | ES_NUMBER | ES_RIGHT,
                               10, 40, 100, 20, hwnd, (HMENU)IDC_NUM2, GetModuleHandle(NULL), NULL);


        hResult = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", "",
                                 WS_CHILD | WS_VISIBLE | ES_NUMBER | ES_RIGHT | ES_READONLY,
                                 10, 70, 100, 20, hwnd, (HMENU)IDC_RESULT, GetModuleHandle(NULL), NULL);


        hAdd = CreateWindow("BUTTON", "+",
                            WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                            130, 10, 25, 25, hwnd, (HMENU)IDC_ADD, GetModuleHandle(NULL), NULL);
        hSubtract = CreateWindow("BUTTON", "-",
                                 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                 160, 10, 25, 25, hwnd, (HMENU)IDC_SUBTRACT, GetModuleHandle(NULL), NULL);
        hMultiply = CreateWindow("BUTTON", "*",
                                 WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                                 190, 10, 25, 25, hwnd, (HMENU)IDC_MULTIPLY, GetModuleHandle(NULL), NULL);
        hDivide = CreateWindow("BUTTON", "/",
                               WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                               220, 10, 25, 25, hwnd, (HMENU)IDC_DIVIDE, GetModuleHandle(NULL), NULL);

        break;

    case WM_COMMAND:

        switch (LOWORD(wParam))
        {
        case IDC_ADD:
        case IDC_SUBTRACT:
        case IDC_MULTIPLY:
        case IDC_DIVIDE:
            DoCalculation(hwnd, LOWORD(wParam));
            break;
        }
        break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    HideConsole();
    WNDCLASS wc = {};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "Calculator";
    RegisterClass(&wc);

    HWND hwnd = CreateWindow("Calculator", "Calculator",
                             WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                             300, 150, NULL, NULL, hInstance, NULL);


    ShowWindow(hwnd, nCmdShow);


    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

