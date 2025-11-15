// 函数: sub_6561c0
// 地址: 0x6561c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edx
edx.b = 0
void* esi = *(arg1 + 0x1a0)
int32_t eax

if (*(arg1 + 0xc9) == 0 || *(arg1 + 0x8c) == 0)
    eax.b = 0
    return eax

if (*(esi + 0x70) == 0)
    *(esi + 0x70) = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) * 0x18)

int32_t i_1 = 0

if (*(arg1 + 0x24) s> 0)
    void* ecx_2 = *(esi + 0x70) + 8
    int32_t ebp_1 = 0
    int32_t* var_8_1 = ecx_2
    int32_t* ebx_1 = *(arg1 + 0xc4) + 0x50
    int32_t i
    
    do
        int16_t* eax_12 = *ebx_1
        int32_t* esi_2
        
        if (eax_12 != 0 && *eax_12 != 0 && eax_12[1] != 0 && eax_12[8] != 0 && eax_12[0x10] != 0
                && eax_12[9] != 0 && eax_12[2] != 0)
            esi_2 = *(arg1 + 0x8c) + ebp_1
        
        if (eax_12 == 0 || *eax_12 == 0 || eax_12[1] == 0 || eax_12[8] == 0 || eax_12[0x10] == 0
                || eax_12[9] == 0 || eax_12[2] == 0 || *esi_2 s< 0)
            eax_12.b = 0
            return eax_12
        
        *(ecx_2 - 4) = esi_2[1]
        char ecx_3 = edx.b
        
        if (esi_2[1] != 0)
            ecx_3 = 1
        
        *var_8_1 = esi_2[2]
        char edx_2 = 1
        
        if (esi_2[2] == 0)
            edx_2 = ecx_3
        
        var_8_1[1] = esi_2[3]
        char ecx_5 = edx_2
        
        if (esi_2[3] != 0)
            ecx_5 = 1
        
        var_8_1[2] = esi_2[4]
        char edx_4 = 1
        
        if (esi_2[4] == 0)
            edx_4 = ecx_5
        
        edx = zx.d(edx_4)
        var_8_1[3] = esi_2[5]
        
        if (esi_2[5] != 0)
            edx = 1
        
        i = i_1 + 1
        ecx_2 = &var_8_1[6]
        i_1 = i
        ebp_1 += 0x100
        var_8_1 = ecx_2
        ebx_1 = &ebx_1[0x16]
    while (i s< *(arg1 + 0x24))

eax.b = edx.b
return eax
