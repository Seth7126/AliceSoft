// 函数: sub_6be4d0
// 地址: 0x6be4d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *arg2
int32_t ecx = edx[2]
int32_t ebx = edx[3]
int32_t temp0 = divs.dp.d(sx.q(edx[1] - *edx), ecx)
uint32_t (** result)[0x4] = sub_6b3050(arg3, 4)
int32_t esi_1 = temp0 << 2
uint32_t (** result_1)[0x4] = result
uint32_t (* eax_6)[0x4] = sub_6b3050(arg3, esi_1)
*result = eax_6
_memset(eax_6, 0, esi_1)
int32_t edi_1 = arg5
int32_t var_1c = 0
int32_t eax_10 = divs.dp.d(sx.q(*edx), edi_1)
arg5 = eax_10

if (temp0 s> 0)
    int32_t esi_2 = ebx - 1
    int32_t var_c_1 = esi_2
    int32_t ecx_5
    
    do
        int32_t ecx_3 = 0
        int32_t ebx_1 = 0
        int32_t ebp = 0
        int32_t var_28_1 = 0
        
        if (ecx s> 0)
            int32_t edx_6 = *arg4
            int32_t var_10_1 = edx_6
            
            do
                int32_t esi_3 = 1
                int32_t eax_12
                int32_t edx_7
                edx_7:eax_12 = sx.q(*(edx_6 + (eax_10 << 2)))
                int32_t eax_14 = (eax_12 ^ edx_7) - edx_7
                
                if (eax_14 s> ebp)
                    ebp = eax_14
                
                if (edi_1 s> 1)
                    do
                        int32_t eax_17
                        int32_t edx_8
                        edx_8:eax_17 = sx.q(*(arg4[esi_3] + (arg5 << 2)))
                        int32_t eax_19 = (eax_17 ^ edx_8) - edx_8
                        
                        if (eax_19 s> ecx_3)
                            ecx_3 = eax_19
                        
                        esi_3 += 1
                    while (esi_3 s< edi_1)
                    
                    ebx_1 = var_28_1
                
                ebx_1 += edi_1
                edx_6 = var_10_1
                eax_10 = arg5 + 1
                arg5 = eax_10
                var_28_1 = ebx_1
            while (ebx_1 s< ecx)
            
            esi_2 = var_c_1
        
        int32_t edx_9 = 0
        
        if (esi_2 s> 0)
            void* eax_22 = &edx[0x286]
            
            while (ebp s> *(eax_22 - 0x100) || ecx_3 s> *eax_22)
                edx_9 += 1
                eax_22 += 4
                
                if (edx_9 s>= esi_2)
                    break
        
        result = result_1
        (**result)[var_1c] = edx_9
        ecx_5 = var_1c + 1
        eax_10 = arg5
        var_1c = ecx_5
    while (ecx_5 s< temp0)

arg2[0xa] += 1
return result
