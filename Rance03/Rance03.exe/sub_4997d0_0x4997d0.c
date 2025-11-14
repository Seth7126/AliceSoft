// 函数: sub_4997d0
// 地址: 0x4997d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = sub_4ff3f0(arg1 + 0xa8, arg2)

if (result.b == 0)
    *(arg1 + 0xac) = *(arg2 + 4)
    *(arg1 + 0xb0) = *(arg2 + 8)
    *(arg1 + 0xb4) = *(arg2 + 0xc)
    *(arg1 + 0xc4) = *(arg2 + 0x1c)
    result = *(arg2 + 0x20)
    *(arg1 + 0xc8) = result
    *(arg1 + 0xcc) = *(arg2 + 0x24)
    int32_t* ecx_1 = *(arg1 + 0x200)
    
    if (ecx_1 != 0)
        return (**ecx_1)()

return result
