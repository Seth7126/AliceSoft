// 函数: sub_652fd0
// 地址: 0x652fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = arg3
int32_t* esi = arg4
void* edi = arg1
void* ebx = *(edi + 0x180)
void* var_8 = ebx

if (*ecx u>= esi)
    return 

int32_t i = arg7
int32_t* ebp_1 = arg6

while (*ebp_1 u< i)
    int32_t edx_1 = *ecx
    void* esi_1 = esi - edx_1
    void* eax_1 = *(edi + 0x104) - *(ebx + 0x34)
    
    if (eax_1 u< esi_1)
        esi_1 = eax_1
    
    (*(*(edi + 0x18c) + 4))(edi, arg2 + (edx_1 << 2), ebx + 8, *(ebx + 0x34), esi_1)
    *arg3 += esi_1
    *(ebx + 0x34) += esi_1
    int32_t temp2_1 = *(ebx + 0x30)
    *(ebx + 0x30) -= esi_1
    
    if (temp2_1 == esi_1 && *(ebx + 0x34) s< *(edi + 0x104))
        int32_t j = 0
        int32_t j_2 = 0
        
        if (*(edi + 0x4c) s> 0)
            void* edx_2 = ebx + 8
            void* var_c_1 = ebx + 8
            
            do
                int32_t esi_2 = *(ebx + 0x34)
                int32_t ebp_2 = *(edi + 0x104)
                void* eax_9 = *(edi + 0x1c)
                int32_t ebx_1 = *edx_2
                void* var_4_1 = eax_9
                
                if (esi_2 s< ebp_2)
                    void* edi_1 = ebx_1 + (esi_2 << 2)
                    
                    do
                        sub_700660(*(ebx_1 + (esi_2 << 2)), *(edi_1 - 4), eax_9)
                        eax_9 = var_4_1
                        esi_2 += 1
                    while (esi_2 s< ebp_2)
                    
                    edi = arg1
                    j = j_2
                    edx_2 = var_c_1
                
                ebx = var_8
                j += 1
                edx_2 += 4
                j_2 = j
                var_c_1 = edx_2
            while (j s< *(edi + 0x4c))
            
            ebp_1 = arg6
        
        *(ebx + 0x34) = *(edi + 0x104)
    
    if (*(ebx + 0x34) == *(edi + 0x104))
        (*(*(edi + 0x190) + 4))(edi, ebx + 8, 0, arg5, *ebp_1)
        *(ebx + 0x34) = 0
        *ebp_1 += 1
    
    i = arg7
    
    if (*(ebx + 0x30) == 0 && *ebp_1 u< i)
        arg3 = nullptr
        
        if (*(edi + 0x4c) s> 0)
            int32_t* ecx_4 = *(edi + 0x54) + 0xc
            arg4 = ecx_4
            void* j_1
            
            do
                void* ebp_4 = ecx_4[6] * ecx_4[4]
                int32_t temp0_1 = divs.dp.d(sx.q(ecx_4[7] * *ecx_4), *(edi + 0x10c))
                int32_t esi_4 = *ebp_1 * temp0_1
                int32_t ebx_3 = temp0_1 * arg7
                int32_t eax_19 = *(arg5 + (arg3 << 2))
                int32_t var_4_2 = eax_19
                
                if (esi_4 s< ebx_3)
                    int32_t* eax_21 = eax_19 - 4 + (esi_4 << 2)
                    int32_t* var_4_3 = eax_21
                    
                    do
                        sub_700660(*(eax_19 + (esi_4 << 2)), *eax_21, ebp_4)
                        eax_21 = var_4_3
                        esi_4 += 1
                    while (esi_4 s< ebx_3)
                    
                    edi = arg1
                    ecx_4 = arg4
                
                ecx_4 = &ecx_4[0x16]
                ebp_1 = arg6
                j_1 = arg3 + 1
                arg3 = j_1
                arg4 = ecx_4
            while (j_1 s< *(edi + 0x4c))
            i = arg7
        
        *ebp_1 = i
        break
    
    ecx = arg3
    esi = arg4
    
    if (*ecx u>= esi)
        return 
