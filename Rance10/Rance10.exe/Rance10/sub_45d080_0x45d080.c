// 函数: sub_45d080
// 地址: 0x45d080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg2
char* esi = *arg3
char* edi = &esi[3]

if (arg2 s> 1)
    int32_t i_3 = arg2 - 1
    int32_t i
    
    do
        char eax_1 = *esi
        esi = &esi[3]
        eax_1 -= *edi
        edi = &edi[3]
        edi[0xfffffffd] = eax_1
        edi[0xfffffffe] = esi[0xfffffffe] - edi[0xfffffffe]
        edi[0xffffffff] = esi[0xffffffff] - edi[0xffffffff]
        i = i_3
        i_3 -= 1
    while (i != 1)
    arg2 = var_10

void* result = arg4

if (result s> 1)
    void* ecx = nullptr
    int32_t ebx_1 = arg2 * 3
    int32_t var_4_1 = ebx_1
    int32_t ebp_1 = ebx_1
    arg4 = nullptr
    void* i_2 = result - 1
    void* i_1
    
    do
        void* eax_6 = *arg3
        char* edi_1 = eax_6 + ebp_1
        char* eax_7 = eax_6 + ecx
        *edi_1 = *eax_7 - *edi_1
        edi_1[1] = eax_7[1] - edi_1[1]
        result = &eax_7[3]
        edi_1[2] = eax_7[2] - edi_1[2]
        void* esi_2 = &edi_1[3]
        
        if (arg2 s> 1)
            int32_t j_1 = arg2 - 1
            int32_t j
            
            do
                uint32_t ecx_4 = zx.d(*result)
                result += 3
                uint32_t edx = zx.d(*edi_1)
                edi_1 = &edi_1[3]
                esi_2 += 3
                *(esi_2 - 3) = ((edx + ecx_4) u>> 1).b - *(esi_2 - 3)
                *(esi_2 - 2) =
                    ((zx.d(edi_1[0xfffffffe]) + zx.d(*(result - 2))) u>> 1).b - *(esi_2 - 2)
                *(esi_2 - 1) =
                    ((zx.d(edi_1[0xffffffff]) + zx.d(*(result - 1))) u>> 1).b - *(esi_2 - 1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            arg2 = var_10
            ebx_1 = var_4_1
        
        ebp_1 += ebx_1
        ecx = arg4 + ebx_1
        i_1 = i_2
        i_2 -= 1
        arg4 = ecx
    while (i_1 != 1)

return result
