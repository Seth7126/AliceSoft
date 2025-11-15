// 函数: sub_67f6b0
// 地址: 0x67f6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
void** lpFileName = arg1

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

*arg2 = FindFirstFileA(lpFileName, &arg2[1])
sub_67f650(arg2)
return arg2
