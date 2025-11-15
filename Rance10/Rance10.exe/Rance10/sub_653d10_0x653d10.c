// 函数: sub_653d10
// 地址: 0x653d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = *(arg2 + 0x24) * *(arg2 + 0x1c)
sub_6535f0(arg2, *(arg1 + 0x104) + 2, arg3 - 4, *(arg1 + 0x1c), esi_1)
int32_t ecx_1 = *(arg1 + 0xd8)
int32_t eax_2 = (0x80 - ecx_1) << 9
int32_t i = 0
int32_t ecx_2 = ecx_1 << 6
int32_t i_1 = 0

if (*(arg1 + 0x104) s> 0)
    int32_t* ecx_4 = arg3 + 4
    int32_t* var_8_1 = ecx_4
    
    do
        char* ebp_1 = ecx_4[-2]
        char* edi_1 = ecx_4[-1]
        char* esi_2 = *ecx_4
        char* ebx_1 = *(arg4 + (i << 2))
        uint32_t edx_3 = zx.d(*edi_1)
        void* edi_2 = &edi_1[1]
        uint32_t eax_4 = zx.d(*ebp_1) + zx.d(*esi_2) + edx_3
        void* var_18_1 = &esi_2[1]
        void* ebp_2 = &ebp_1[1]
        uint32_t esi_6 = zx.d(esi_2[1]) + zx.d(*ebp_2) + zx.d(*edi_2)
        uint32_t var_14_1 = esi_6
        *ebx_1 = (((eax_4 * 2 - edx_3 + esi_6) * ecx_2 + 0x8000 + edx_3 * eax_2) s>> 0x10).b
        void* ebx_2 = &ebx_1[1]
        int32_t j_1 = esi_1 - 2
        
        if (esi_1 != 2)
            int32_t j
            
            do
                ebp_2 += 1
                uint32_t edx_5 = zx.d(*edi_2)
                void* ecx_18 = var_18_1 + 1
                edi_2 += 1
                var_18_1 = ecx_18
                esi_6 = zx.d(*ecx_18) + zx.d(*ebp_2) + zx.d(*edi_2)
                *ebx_2 = (((eax_4 - edx_5 + esi_6 + var_14_1) * ecx_2 + 0x8000 + edx_5 * eax_2)
                    s>> 0x10).b
                ebx_2 += 1
                j = j_1
                j_1 -= 1
                eax_4 = var_14_1
                var_14_1 = esi_6
            while (j != 1)
        
        uint32_t edx_7 = zx.d(*edi_2)
        ecx_4 = &var_8_1[1]
        *ebx_2 = ((edx_7 * eax_2 + 0x8000 + (esi_6 * 2 - edx_7 + eax_4) * ecx_2) s>> 0x10).b
        i = i_1 + 1
        var_8_1 = ecx_4
        i_1 = i
    while (i s< *(arg1 + 0x104))

return i
