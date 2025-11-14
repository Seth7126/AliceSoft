// 函数: sub_5da8a0
// 地址: 0x5da8a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = sub_5de860(arg1, *(arg2 + 8))

if (result.b == 0)
    return result

int32_t i = 0

if (*(arg2 + 8) u> 0)
    do
        int32_t ecx_1 = *(arg1 + 0x10)
        int32_t ebp_1 = *(*(arg2 + 4) + (i << 2))
        
        if (ecx_1 s< *(arg1 + 0x18) + 4 && sub_64aeb0(arg1 + 8, ecx_1 + 0x40004) == 0)
            return 0
        
        int32_t ecx_3
        
        if (*(arg1 + 0x10) != 0)
            ecx_3 = *(arg1 + 0xc)
        else
            ecx_3 = 0
        
        i += 1
        *(*(arg1 + 0x18) + ecx_3) = ebp_1
        *(arg1 + 0x18) += 4
    while (i u< *(arg2 + 8))

result.b = 1
return result
