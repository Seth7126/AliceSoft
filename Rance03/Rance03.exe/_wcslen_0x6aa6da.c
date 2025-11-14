// 函数: _wcslen
// 地址: 0x6aa6da
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int16_t* eax = arg1
int16_t i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
return ((eax - arg1) s>> 1) - 1
