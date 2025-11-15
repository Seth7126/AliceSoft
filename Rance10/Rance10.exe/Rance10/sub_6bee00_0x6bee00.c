// 函数: sub_6bee00
// 地址: 0x6bee00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = 0
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg2 + 0x24))
int32_t edi_1 = (eax_1 - edx) s>> 1
int32_t eax_3 = sub_6b3050(arg2, (edi_1 * arg6) << 2)
int32_t var_4 = eax_3

if (arg6 s> 0)
    void* i_1 = arg6
    int32_t* esi_1 = arg5
    int32_t* eax_5 = arg4 - esi_1
    void* edx_5 = eax_3 - esi_1
    arg4 = eax_5
    void* var_8_1 = edx_5
    arg2 = arg6
    void* i
    
    do
        int32_t ebx_1 = *(eax_5 + esi_1)
        int32_t eax_6 = ebp + 1
        
        if (*esi_1 == 0)
            eax_6 = ebp
        
        ebp = eax_6
        int32_t eax_7 = 0
        
        if (edi_1 s> 0)
            void* edx_6 = edx_5 + esi_1
            
            do
                int32_t ecx_2 = *(ebx_1 + (eax_7 << 2))
                eax_7 += 1
                *edx_6 = ecx_2
                edx_6 += arg6 << 2
            while (eax_7 s< edi_1)
            
            i_1 = arg2
            edx_5 = var_8_1
        
        eax_5 = arg4
        esi_1 = &esi_1[1]
        i = i_1
        i_1 -= 1
        arg2 = i_1
    while (i != 1)
    
    if (ebp != 0)
        sub_6be630(&var_4, edx_5, arg1, arg3, &var_4, 1, arg7)

return 0
