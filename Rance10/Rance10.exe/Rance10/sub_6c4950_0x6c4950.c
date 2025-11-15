// 函数: sub_6c4950
// 地址: 0x6c4950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* lpString = arg1 + 8

if (*(arg1 + 0x1c) u>= 0x10)
    lpString = *lpString

SetWindowTextA(arg2, lpString)
int32_t* lpString_1 = arg1 + 0x20

if (*(arg1 + 0x34) u>= 0x10)
    lpString_1 = *lpString_1

SetDlgItemTextA(arg2, 0x7d1, lpString_1)
PSTR lpString_2 = arg1 + 0x38

if (*(arg1 + 0x4c) u>= 0x10)
    lpString_2 = *lpString_2

SetDlgItemTextA(arg2, 0x7d3, lpString_2)
return 1
