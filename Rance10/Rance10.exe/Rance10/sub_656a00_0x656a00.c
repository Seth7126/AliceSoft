// 函数: sub_656a00
// 地址: 0x656a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t (** esi)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0x74)
*(arg1 + 0x1a0) = esi
*esi = sub_655b10
esi[2] = sub_655b30
esi[0x1c] = 0

if (ebx.b == 0)
    uint32_t (* eax_16)[0x4] = (*(*(arg1 + 4) + 4))(arg1, 1, 0x500)
    esi[8] = eax_16
    esi[0xd] = &eax_16[0x28]
    esi[9] = &eax_16[8]
    esi[0xe] = &eax_16[0x30]
    esi[0xa] = &eax_16[0x10]
    esi[0xf] = &eax_16[0x38]
    esi[0xb] = &eax_16[0x18]
    esi[0x10] = &eax_16[0x40]
    uint32_t (* result)[0x4] = &eax_16[0x48]
    esi[0xc] = &eax_16[0x20]
    esi[0x11] = result
    
    if (*(arg1 + 0x190) == 0)
        result = _memset(eax_16, 0, 0x500)
    
    esi[1] = sub_40d500
    esi[3] = sub_655b80
    esi[4] = 0
    return result

int32_t i_1 = 0

if (*(arg1 + 0x24) s> 0)
    int32_t* ebx_2 = *(arg1 + 0xc4) + 0xc
    int32_t* var_14_1 = ebx_2
    void* var_c_1 = &esi[0x12]
    int32_t i
    
    do
        int32_t ecx = *ebx_2
        int32_t edx = ecx
        
        if (*(arg1 + 0xc9) != 0)
            edx *= 3
        
        int32_t ecx_1 = ecx + ebx_2[5] - 1
        int32_t edi_1 = ebx_2[-1]
        int32_t ebx_5 = ebx_2[4] - 1 + edi_1
        int32_t eax_11 = (*(*(arg1 + 4) + 0x14))(arg1, 1, 1, ebx_5 - mods.dp.d(sx.q(ebx_5), edi_1), 
            ecx_1 - mods.dp.d(sx.q(ecx_1), *var_14_1), edx)
        ebx_2 = &var_14_1[0x16]
        var_14_1 = ebx_2
        *var_c_1 = eax_11
        i = i_1 + 1
        var_c_1 += 4
        i_1 = i
    while (i s< *(arg1 + 0x24))

esi[1] = sub_655dd0
esi[3] = sub_656020
esi[4] = &esi[0x12]
return &esi[0x12]
