// 函数: sub_5b3760
// 地址: 0x5b3760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return 

uint32_t esi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
sub_42c9c0(arg3, esi_6)
uint32_t* eax_4

if (*(arg1 + 4) s<= 1)
    int32_t* esi_7 = *arg3
    int32_t edi_2 = arg3[1]
    
    if (esi_7 == edi_2)
        eax_4.b = 1
        return 
    
    while (true)
        char* edx_1 = *(arg2 + 4)
        
        if (&edx_1[4] u> *(arg2 + 8))
            break
        
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        
        if (&edx_1[8] u> *(arg2 + 8))
            break
        
        int32_t* edx_8 =
            ((zx.d(edx_1[7]) << 8 | zx.d(edx_1[6])) << 8 | zx.d(edx_1[5])) << 8 | zx.d(edx_1[4])
        *(arg2 + 4) = &edx_1[8]
        
        if (sub_6c9300(arg2, &var_4).b == 0)
            break
        
        int32_t eax_12
        int16_t x87control
        int16_t x87control_1
        int80_t st0_1
        st0_1, eax_12, x87control_1 = sub_721fd0(x87control, ecx_7 f* 255f)
        int32_t eax_13
        int16_t x87control_2
        int80_t st0_2
        st0_2, eax_13, x87control_2 = sub_721fd0(x87control_1, edx_8 f* 255f)
        int80_t st0_3
        st0_3, eax_4, x87control = sub_721fd0(x87control_2, var_4 f* 255f)
        *esi_7 = ((eax_12 | 0xffffff00) << 8 | eax_13) << 8 | eax_4
        esi_7 = &esi_7[1]
        
        if (esi_7 == edi_2)
            eax_4.b = 1
            return 
else if (*(arg2 + 4) + (esi_6 << 2) u<= *(arg2 + 8))
    void* ecx_12 = *arg3
    eax_4 = arg3[1]
    int32_t ebx_8 = 0
    uint32_t edi_6 = (eax_4 - ecx_12 + 3) u>> 2
    
    if (ecx_12 u> eax_4)
        edi_6 = 0
    
    if (edi_6 != 0)
        do
            char* edx_9 = *(arg2 + 4)
            ecx_12 += 4
            ebx_8 += 1
            uint32_t esi_14 =
                ((zx.d(edx_9[3]) << 8 | zx.d(edx_9[2])) << 8 | zx.d(edx_9[1])) << 8 | zx.d(*edx_9)
            *(arg2 + 4) = &edx_9[4]
            *(ecx_12 - 4) = esi_14
        while (ebx_8 != edi_6)
    
    eax_4.b = 1
    return 

eax_4.b = 0
