// 函数: sub_41d390
// 地址: 0x41d390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
HWND hWnd = *(arg1 + 0x10)
int32_t var_1c
LRESULT result = sub_41d430(arg1, sub_420a40(&var_1c, arg2))
LRESULT lParam = result
int32_t var_8

if (var_8 u>= 0x10)
    result = j__free(var_1c)

if (lParam != 0)
    for (LRESULT i = SendMessageA(hWnd, 0x110a, 3, lParam); i != 0; 
            i = SendMessageA(hWnd, 0x110a, 3, i))
        result = SendMessageA(hWnd, 0x1127, i, 0x20)
        
        if ((result.b & 0x20) == 0)
            goto label_41d425
    
    result = SendMessageA(hWnd, 0x110b, 9, lParam)

label_41d425:
sub_69a5bc(eax_1 ^ &var_20)
return result
