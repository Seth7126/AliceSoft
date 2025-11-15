// 函数: sub_657e80
// 地址: 0x657e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* (** result)(int32_t* arg1) = (**(arg1 + 4))(arg1, 1, 0x54)
*(arg1 + 0x1b4) = result
int32_t i = 0
*result = sub_657830

if (*(arg1 + 0x24) s> 0)
    uint32_t (** edi_1)[0x4] = *(arg1 + 0xc4) + 0x54
    void* ebx_1 = &result[0xb]
    
    do
        uint32_t (* eax_4)[0x4] = (**(arg1 + 4))(arg1, 1, 0x100)
        *edi_1 = eax_4
        result = _memset(eax_4, 0, 0x100)
        *ebx_1 = 0xffffffff
        ebx_1 += 4
        i += 1
        edi_1 = &edi_1[0x16]
    while (i s< *(arg1 + 0x24))

return result
