// 函数: sub_5efaf0
// 地址: 0x5efaf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edx = zx.d(arg2.b)
uint32_t esi_2 = zx.d((arg2 u>> 8).b)
int32_t eax_1

if (esi_2 != 0)
    int32_t eax_6
    
    if (esi_2 - 0x81 u<= 0x1e)
        if (edx - 0x40 u<= 0x3e)
            eax_6 = esi_2 * 0xbc - 0x5e5e
        label_5efb91:
            eax_1 = eax_6 + edx
            goto label_5efb93
        
        if (edx - 0x80 u<= 0x7c)
            eax_6 = esi_2 * 0xbc - 0x5e5f
            goto label_5efb91
    else if (esi_2 - 0xe0 u<= 0xf)
        if (edx - 0x40 u<= 0x3e)
            eax_6 = esi_2 * 0xbc - 0x8d5e
            goto label_5efb91
        
        if (edx - 0x80 u<= 0x7c)
            eax_6 = esi_2 * 0xbc - 0x8d5f
            goto label_5efb91
else if (edx - 0x20 u<= 0x5e)
    eax_1 = edx - 0x20
label_5efb93:
    
    if (eax_1 s>= 0 && eax_1 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 4)
        return (eax_1 << 4) + *(arg1 + 8)
else if (edx - 0xa1 u<= 0x3e)
    eax_1 = edx - 0x42
    goto label_5efb93
return 0
