// 函数: sub_64aff0
// 地址: 0x64aff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* lpString = arg1 + 8

if (*(arg1 + 0x1c) u>= 0x10)
    lpString = *lpString

SetWindowTextA(arg2, lpString)
int32_t* lpString_1 = arg1 + 0x20

if (*(arg1 + 0x34) u>= 0x10)
    lpString_1 = *lpString_1

SetDlgItemTextA(arg2, 0x9cce, lpString_1)
PSTR lpString_2 = arg1 + 0x38

if (*(arg1 + 0x4c) u>= 0x10)
    lpString_2 = *lpString_2

SetDlgItemTextA(arg2, 0x9cd6, lpString_2)
return 1
