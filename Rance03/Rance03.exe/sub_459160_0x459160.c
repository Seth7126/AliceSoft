// 函数: sub_459160
// 地址: 0x459160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg1
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
char* eax

if (*(arg1 + 0x14) u< 0x10)
    eax = arg1
else
    eax = *arg1

while (true)
    char* edx
    
    if (*(arg1 + 0x14) u< 0x10)
        edx = arg1
    else
        edx = *arg1
    
    if (eax == *(arg1 + 0x10) + edx)
        break
    
    *eax ^= 0x65
    eax = &eax[1]

return arg1
