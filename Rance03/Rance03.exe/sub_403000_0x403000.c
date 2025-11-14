// 函数: sub_403000
// 地址: 0x403000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (arg2[5] u>= 0x10)
    *arg1 = *arg2
    *arg2 = 0
else
    void* eax = arg2[4]
    
    if (eax != 0xffffffff)
        _memcpy(arg1, arg2, eax + 1)

*(arg1 + 0x10) = arg2[4]
*(arg1 + 0x14) = arg2[5]
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
return arg1
