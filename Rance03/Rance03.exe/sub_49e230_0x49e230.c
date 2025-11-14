// 函数: sub_49e230
// 地址: 0x49e230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_4ff3f0(arg1 + 0xb4, arg2)

if (result.b == 0)
    *(arg1 + 0xb8) = *(arg2 + 4)
    *(arg1 + 0xbc) = *(arg2 + 8)
    *(arg1 + 0xc0) = *(arg2 + 0xc)
    *(arg1 + 0xd0) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0xd4) = result
    *(arg1 + 0xd8) = *(arg2 + 0x24)
    int32_t* ecx_1 = *(arg1 + 0x260)
    
    if (ecx_1 != 0)
        return (**ecx_1)()

return result
