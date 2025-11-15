// 函数: sub_6c4be0
// 地址: 0x6c4be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
HWND eax_2 = GetDlgItem(arg2, 0x3e9)
bool cond:0 = *(arg1 + 0x30) != 0
*(arg1 + 0x38) = eax_2
*(arg1 + 0x40) = arg2

if (not(cond:0))
    EnableWindow(GetDlgItem(arg2, 1), 0)

void* var_30 = arg1 + 0xc
int32_t* lpString = sub_6c4ae0(&var_1c)

if (lpString[5] u>= 0x10)
    lpString = *lpString

SetWindowTextA(GetDlgItem(arg2, 0x3ea), lpString)
int32_t var_8

if (var_8 u>= 0x10)
    sub_403160(var_1c, var_8 + 1, 1)

int32_t edi = *(arg1 + 0x28)

for (int32_t* i = *(arg1 + 0x24); i != edi; i = &i[6])
    int32_t* lParam
    
    if (i[5] u< 0x10)
        lParam = i
    else
        lParam = *i
    
    SendMessageA(*(arg1 + 0x38), 0x180, 0, lParam)

SetFocus(GetDlgItem(arg2, 2))
@__security_check_cookie@4(eax_1 ^ &var_1c)
return 1
