// 函数: sub_64b2f0
// 地址: 0x64b2f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
HWND eax_2 = GetDlgItem(arg2, 0x9cd9)
bool cond:0 = *(arg1 + 0x30) != 0
*(arg1 + 0x38) = eax_2
*(arg1 + 0x40) = arg2

if (not(cond:0))
    EnableWindow(GetDlgItem(arg2, 0x9cd2), 0)

char* lpString = sub_64b210(&var_1c, arg1 + 0xc)

if (*(lpString + 0x14) u>= 0x10)
    lpString = *lpString

SetWindowTextA(GetDlgItem(arg2, 0x9cce), lpString)
int32_t var_8

if (var_8 u>= 0x10)
    j__free(var_1c)

for (int32_t* i = *(arg1 + 0x24); i != *(arg1 + 0x28); i = &i[6])
    int32_t* lParam
    
    if (i[5] u< 0x10)
        lParam = i
    else
        lParam = *i
    
    SendMessageA(*(arg1 + 0x38), 0x180, 0, lParam)

SetFocus(GetDlgItem(arg2, 0x9cd0))
sub_69a5bc(eax_1 ^ &var_1c)
return 1
