// 函数: sub_644470
// 地址: 0x644470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg2
void* ebp = nullptr
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(ecx + 0x24))
arg2 = nullptr
int32_t edi_1 = (eax_1 - edx) s>> 1
int32_t eax_3 = sub_6382a0(ecx, (edi_1 * arg6) << 2)
int32_t i_2 = arg6
int32_t var_4 = eax_3

if (i_2 s> 0)
    int32_t esi_1 = arg5
    int32_t* eax_5 = arg4 - esi_1
    void* ecx_2 = eax_3 - esi_1
    arg4 = eax_5
    void* var_8_1 = ecx_2
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t ebx_1 = *(eax_5 + esi_1)
        
        if (*esi_1 != 0)
            ebp += 1
            arg2 = ebp
        
        int32_t eax_6 = 0
        
        if (edi_1 s> 0)
            int32_t* edx_4 = ecx_2 + esi_1
            
            do
                int32_t ecx_3 = *(ebx_1 + (eax_6 << 2))
                eax_6 += 1
                *edx_4 = ecx_3
                edx_4 = &edx_4[i_2]
            while (eax_6 s< edi_1)
            
            ebp = arg2
            ecx_2 = var_8_1
            i_2 = arg6
        
        eax_5 = arg4
        esi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (ebp != 0)
        sub_643850(&var_4, i_2, arg1, arg3, &var_4, 1, arg7)

return 0
