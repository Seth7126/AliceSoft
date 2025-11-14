// 函数: sub_4c90b0
// 地址: 0x4c90b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_4ff3f0(arg1 + 0x10c, arg2)

if (result.b == 0)
    *(arg1 + 0x110) = *(arg2 + 4)
    *(arg1 + 0x114) = *(arg2 + 8)
    *(arg1 + 0x118) = *(arg2 + 0xc)
    *(arg1 + 0x128) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0x12c) = result
    *(arg1 + 0x130) = *(arg2 + 0x24)
    int32_t* ecx_1 = *(arg1 + 0x200)
    
    if (ecx_1 != 0)
        return (**ecx_1)()

return result
