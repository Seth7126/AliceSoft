// 函数: sub_6382a0
// 地址: 0x6382a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi_1 = (arg2 + 7) & 0xfffffff8
int32_t ebx = *(arg1 + 0x48)

if (ebx + edi_1 s> *(arg1 + 0x4c))
    if (*(arg1 + 0x44) != 0)
        int32_t* eax_1 = _malloc(8)
        int32_t ecx = *(arg1 + 0x54)
        *(arg1 + 0x50) += ebx
        eax_1[1] = ecx
        *eax_1 = *(arg1 + 0x44)
        *(arg1 + 0x54) = eax_1
    
    *(arg1 + 0x4c) = edi_1
    *(arg1 + 0x44) = _malloc(edi_1)
    *(arg1 + 0x48) = 0

int32_t ecx_2 = *(arg1 + 0x48)
int32_t result = *(arg1 + 0x44) + ecx_2
*(arg1 + 0x48) = ecx_2 + edi_1
return result
