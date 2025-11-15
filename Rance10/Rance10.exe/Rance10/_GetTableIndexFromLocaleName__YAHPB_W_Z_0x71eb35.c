// 函数: ?GetTableIndexFromLocaleName@@YAHPB_W@Z
// 地址: 0x71eb35
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_20 = edi
int32_t edi_1 = 0
int32_t ebx = 0xe3
int32_t var_10 = 0
int32_t var_c = 0xe3

do
    int32_t var_8_1 = 0x55
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(ebx + edi_1)
    int32_t ecx_2 = (eax_2 - edx_1) s>> 1
    int16_t* esi_1 = (&data_757f50)[ecx_2 * 2]
    int16_t* ecx_4 = arg1 - esi_1
    int16_t eax_7
    int16_t edx_2
    
    do
        int16_t eax_4 = *(ecx_4 + esi_1)
        
        if (eax_4 u< 0x41 || eax_4 u> 0x5a)
            edx_2 = eax_4
        else
            edx_2 = eax_4 + 0x20
        
        eax_7 = *esi_1
        
        if (eax_7 u>= 0x41 && eax_7 u<= 0x5a)
            eax_7 += 0x20
        
        esi_1 = &esi_1[1]
        int32_t temp0_1 = var_8_1
        var_8_1 -= 1
        
        if (temp0_1 == 1)
            break
        
        if (edx_2 == 0)
            break
    while (edx_2 == eax_7)
    
    edi_1 = var_10
    ebx = var_c
    uint32_t eax_8 = zx.d(eax_7)
    uint32_t edx_3 = zx.d(edx_2)
    
    if (edx_3 == eax_8)
        return *((ecx_2 << 3) + &data_757f54)
    
    if (edx_3 - eax_8 s>= 0)
        edi_1 = ecx_2 + 1
        var_10 = edi_1
    else
        ebx = ecx_2 - 1
        var_c = ebx
while (edi_1 s<= ebx)

return 0xffffffff
