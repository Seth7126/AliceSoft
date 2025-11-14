// 函数: sub_4030b0
// 地址: 0x4030b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2[5] u>= 0x10)
    if (arg1 != 0)
        *arg1 = *arg2
    
    *arg2 = 0
else
    void* eax_1 = arg2[4]
    
    if (eax_1 != 0xffffffff)
        _memcpy(arg1, arg2, eax_1 + 1)

arg1[4] = arg2[4]
int32_t result = arg2[5]
arg1[5] = result
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
return result
