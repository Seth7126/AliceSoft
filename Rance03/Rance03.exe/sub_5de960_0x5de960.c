// 函数: sub_5de960
// 地址: 0x5de960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi_1 = *(arg2 + 8) << 2
int32_t ecx = *(arg1 + 0x10)
uint32_t result

if (ecx s< *(arg1 + 0x18) + edi_1)
    result = sub_64aeb0(arg1 + 8, ecx + 0x40000 + edi_1)
    
    if (result.b == 0)
        return result

if (*(arg2 + 8) != 0)
    int32_t ecx_2
    
    if (*(arg1 + 0x10) != 0)
        ecx_2 = *(arg1 + 0xc)
    else
        ecx_2 = 0
    
    sub_69d850(*(arg1 + 0x18) + ecx_2, *(arg2 + 4), edi_1)

*(arg1 + 0x18) += edi_1
result.b = 1
return result
