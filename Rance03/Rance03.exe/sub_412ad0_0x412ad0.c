// 函数: sub_412ad0
// 地址: 0x412ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd = *arg1

if (hWnd != 0)
    DestroyWindow(hWnd)
    *arg1 = 0

HINSTANCE nHeight
HINSTANCE hInstance = nHeight

if (data_75d48c == 0)
    arg1[0x28] = hInstance
    RegisterClassA(&arg1[0x24])
    data_75d48c = 1

HFONT eax_2

if (arg1[0x12] == 0)
    arg1[0x13] = arg1[0x22]
    eax_2 = sub_697f40(&arg1[0x11])

if (arg1[0x12] != 0 || eax_2.b != 0)
    if (arg1[0x1c] == arg1[0x1d])
        nHeight = CreateSolidBrush(0xe0ffff)
        sub_412de0(&arg1[0x1c], &nHeight)
        nHeight = CreateSolidBrush(0xffe0ff)
        sub_412de0(&arg1[0x1c], &nHeight)
        nHeight = CreateSolidBrush(0xe0e0ff)
        sub_412de0(&arg1[0x1c], &nHeight)
        nHeight = CreateSolidBrush(0xffffe0)
        sub_412de0(&arg1[0x1c], &nHeight)
        nHeight = CreateSolidBrush(0xe0ffe0)
        sub_412de0(&arg1[0x1c], &nHeight)
    
    int32_t nWidth
    arg1[1] = nWidth
    
    if (&arg1[8] != arg2)
        sub_401ff0(&arg1[8], arg2, 0, 0xffffffff)
    
    sub_412670()
    POINT point
    GetCursorPos(&point)
    ScreenToClient(arg1[1], &point)
    sub_412870(arg1, &nWidth, &nHeight)
    void* lpClassName = &arg1[2]
    
    if (arg1[7] u>= 0x10)
        lpClassName = *lpClassName
    
    eax_2 = CreateWindowExA(WS_EX_LEFT, lpClassName, &data_704170, 0x50000000, 
        arg1[0x20] + point.x, arg1[0x21] + point.y, nWidth, nHeight, arg1[1], nullptr, hInstance, 
        arg1)
    *arg1 = eax_2
    
    if (eax_2 != 0)
        void** var_1c_12 = arg2
        sub_412c70(arg1)
        int32_t eax_14
        eax_14.b = 1
        return eax_14

eax_2.b = 0
return eax_2
