// 函数: sub_621800
// 地址: 0x621800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x1c)
uint32_t result = sub_626ed0(esi)
void* edi = *(esi + 0x14)

if (edi u> *(arg1 + 0x10))
    edi = *(arg1 + 0x10)

if (edi != 0)
    result = sub_69d850(*(arg1 + 0xc), *(esi + 0x10), edi)
    *(arg1 + 0xc) += edi
    *(esi + 0x10) += edi
    *(arg1 + 0x14) += edi
    *(arg1 + 0x10) -= edi
    int32_t temp0_1 = *(esi + 0x14)
    *(esi + 0x14) -= edi
    
    if (temp0_1 == edi)
        result = *(esi + 8)
        *(esi + 0x10) = result

return result
