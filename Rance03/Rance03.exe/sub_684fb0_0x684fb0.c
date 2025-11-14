// 函数: sub_684fb0
// 地址: 0x684fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t nHeight
int32_t eax_1 = __security_cookie ^ &nHeight
nHeight = arg7

if (sub_684f10(arg1) != 0)
    PSTR lpClassName
    
    if (*(arg1 + 0x24) u< 0x10)
        lpClassName = arg1 + 0x10
    else
        lpClassName = *(arg1 + 0x10)
    
    HWND hWnd = CreateWindowExA(WS_EX_LEFT, lpClassName, arg2, arg3, arg4, arg5, arg6, nHeight, 
        arg8, arg9, arg10, arg1)
    *(arg1 + 8) = hWnd
    
    if (hWnd != 0)
        ShowWindow(hWnd, SW_SHOW)
        UpdateWindow(*(arg1 + 8))
        BOOL result
        result.b = 1
        sub_69a5bc(eax_1 ^ &nHeight)
        return result
    
    int32_t* lpText_1
    sub_4216c0(hWnd, 0x7036c8, &lpText_1, arg1 + 0x10)
    int32_t* lpText = &lpText_1
    int32_t var_8
    
    if (var_8 u>= 0x10)
        lpText = lpText_1
    
    MessageBoxA(nullptr, lpText, "CWindow/cleateWindow/error\n", MB_OK)
    
    if (var_8 u>= 0x10)
        j__free(lpText_1)

sub_69a5bc(eax_1 ^ &nHeight)
return 0
