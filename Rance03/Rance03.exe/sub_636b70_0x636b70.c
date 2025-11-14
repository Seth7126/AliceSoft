// 函数: sub_636b70
// 地址: 0x636b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg1
char* ecx = *result
char* edx = &ecx[3]

if (arg2 s> 1)
    int32_t i_3 = arg2 - 1
    int32_t i
    
    do
        char eax = *ecx
        ecx = &ecx[3]
        eax -= *edx
        edx = &edx[3]
        edx[0xfffffffd] = eax
        edx[0xfffffffe] = ecx[0xfffffffe] - edx[0xfffffffe]
        edx[0xffffffff] = ecx[0xffffffff] - edx[0xffffffff]
        i = i_3
        i_3 -= 1
    while (i != 1)
    result = arg1

if (arg3 s> 1)
    int32_t ecx_1 = 0
    int32_t edx_1 = arg2 * 3
    int32_t i_2 = arg3 - 1
    int32_t var_4_1 = edx_1
    int32_t ebp_1 = edx_1
    arg3 = 0
    int32_t i_4 = i_2
    int32_t i_1
    
    do
        void* eax_3 = *result
        char* esi_1 = eax_3 + ebp_1
        char* eax_4 = eax_3 + ecx_1
        *esi_1 = *eax_4 - *esi_1
        esi_1[1] = eax_4[1] - esi_1[1]
        void* eax_5 = &eax_4[3]
        esi_1[2] = eax_4[2] - esi_1[2]
        void* esi_2 = &esi_1[3]
        void* edi_1 = esi_2 - 3
        
        if (arg2 s> 1)
            int32_t j_1 = arg2 - 1
            int32_t j
            
            do
                uint32_t ecx_6 = zx.d(*eax_5)
                eax_5 += 3
                uint32_t edx_2 = zx.d(*edi_1)
                edi_1 += 3
                esi_2 += 3
                *(esi_2 - 3) = ((edx_2 + ecx_6) s>> 1).b - *(esi_2 - 3)
                *(esi_2 - 2) = ((zx.d(*(edi_1 - 2)) + zx.d(*(eax_5 - 2))) s>> 1).b - *(esi_2 - 2)
                *(esi_2 - 1) = ((zx.d(*(edi_1 - 1)) + zx.d(*(eax_5 - 1))) s>> 1).b - *(esi_2 - 1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            edx_1 = var_4_1
            i_2 = i_4
        
        ebp_1 += edx_1
        result = arg1
        ecx_1 = arg3 + edx_1
        i_1 = i_2
        i_2 -= 1
        arg3 = ecx_1
        i_4 = i_2
    while (i_1 != 1)

return result
