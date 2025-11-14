// 函数: sub_4b0310
// 地址: 0x4b0310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_4ff3f0(arg1 + 0x80, arg2)

if (result.b == 0)
    *(arg1 + 0x84) = *(arg2 + 4)
    *(arg1 + 0x88) = *(arg2 + 8)
    *(arg1 + 0x8c) = *(arg2 + 0xc)
    *(arg1 + 0x9c) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0xa0) = result
    *(arg1 + 0xa4) = *(arg2 + 0x24)
    int32_t* ecx_1 = *(arg1 + 0xc8)
    
    if (ecx_1 != 0)
        return (**ecx_1)()

return result
