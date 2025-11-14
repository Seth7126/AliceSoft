// 函数: sub_59b5a0
// 地址: 0x59b5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0 && arg2 s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
    void* edi_1 = *(*(arg1 + 4) + (arg2 << 2))
    *(edi_1 + 0x8c) = *(arg1 + 0x14)
    *(edi_1 + 0x94) = *(arg1 + 0x1c)
    *(edi_1 + 0x98) = *(arg1 + 0x20)
    *(edi_1 + 0xa0) = *(arg1 + 0x28)
    *(edi_1 + 0xa4) = *(arg1 + 0x2c)
    *(edi_1 + 0xb4) = *(arg1 + 0x3c)
    *(edi_1 + 0xc4) = *(arg1 + 0x4c)
    *(edi_1 + 0xd4) = *(arg1 + 0x5c)
    sub_596b60(edi_1 + 0xe4, arg1 + 0x6c)
    sub_596bd0(edi_1, arg1 + 0xd4)
    *(edi_1 + 0x280) = *(arg1 + 0xe0)
    *(edi_1 + 0x284) = *(arg1 + 0xe4)
    
    if (arg3 == 0)
        sub_5934b0(edi_1, arg4)
        float eax_13
        eax_13.b = 1
        return eax_13
    
    if (arg3 == 1)
        sub_5946a0(edi_1, arg5, arg6)
        float* eax_12
        eax_12.b = 1
        return eax_12

int32_t eax
eax.b = 0
return eax
