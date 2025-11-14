// 函数: sub_63d660
// 地址: 0x63d660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = *(arg3 + 0x24)

if (*(arg3 + 0x20) s<= edi)
    return 0

int32_t eax_1 = *(arg3 + 0x10)
int32_t ecx = *(eax_1 + (edi << 2))
void* ebp = eax_1 + (edi << 2)

if ((ecx & 0x400) != 0)
    int32_t temp0 = *(arg3 + 0x158)
    *(arg3 + 0x158) += 1
    *(arg3 + 0x15c) = adc.d(*(arg3 + 0x15c), 0, temp0 u>= 0xffffffff)
    *(arg3 + 0x24) = edi + 1
    return 0xffffffff

if (arg2 != 0 || arg4 != arg2)
    uint32_t eax_4 = zx.d(ecx.b)
    uint32_t var_10_1 = eax_4
    int32_t edx_1 = ecx & 0x200
    
    if (eax_4 == 0xff)
        uint32_t esi_1 = eax_4
        uint32_t i
        
        do
            int32_t eax_5 = *(ebp + 4)
            ebp += 4
            edi += 1
            i = zx.d(eax_5.b)
            
            if ((eax_5 & 0x200) != 0)
                edx_1 = 0x200
            
            esi_1 += i
        while (i == 0xff)
        var_10_1 = esi_1
        eax_4 = var_10_1
    
    if (arg2 != 0)
        arg2[3] = edx_1
        arg2[2] = ecx & 0x100
        *arg2 = *(arg3 + 0xc) + *arg3
        arg2[6] = *(arg3 + 0x158)
        arg2[7] = *(arg3 + 0x15c)
        int32_t ecx_2 = *(arg3 + 0x14)
        arg2[4] = *(ecx_2 + (edi << 3))
        arg2[5] = *(ecx_2 + (edi << 3) + 4)
        eax_4 = var_10_1
        arg2[1] = eax_4
    
    if (arg4 != 0)
        *(arg3 + 0xc) += eax_4
        int32_t temp1_1 = *(arg3 + 0x158)
        *(arg3 + 0x158) += 1
        *(arg3 + 0x24) = edi + 1
        *(arg3 + 0x15c) = adc.d(*(arg3 + 0x15c), 0, temp1_1 u>= 0xffffffff)

return 1
