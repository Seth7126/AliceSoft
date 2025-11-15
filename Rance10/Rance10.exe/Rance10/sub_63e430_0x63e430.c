// 函数: sub_63e430
// 地址: 0x63e430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2
int32_t j_4 = (*(*esi + 0x10))()
int32_t result_1 = (*(*esi + 0x14))()
void* ebp = (*(*esi + 8))(0, 0)
arg2 = ebp
int32_t eax_4 = (*(*esi + 0x1c))() - (j_4 << 2)
char* esi_1 = (*(*arg3 + 8))(0, 0)
int32_t eax_8 = (*(*arg3 + 0x1c))() - *(arg1 + 0x48)
int32_t edx_5 = 1 - (*(*arg3 + 0x1c))()
int32_t eax_11 = *(arg1 + 0x48) * edx_5
int32_t j_3 = j_4
void* ecx_9 = arg1
int32_t eax_14 = (*(*arg3 + 0x1c))() - j_3
int32_t ebx_2 = *(ecx_9 + 0x48) * eax_14
int32_t result = result_1

if (result s> 0)
    int32_t ebx_3 = eax_4
    int32_t edi_2 = ebx_2
    int32_t i
    
    do
        if (j_3 s> 0)
            int32_t j_1 = j_3
            int32_t j_2 = j_3
            int32_t j
            
            do
                int32_t* k_2 = *(ecx_9 + 0x48)
                int32_t ebx_4 = 0
                
                if (k_2 s> 0)
                    int32_t* k_1 = k_2
                    arg3 = k_2
                    int32_t* k
                    
                    do
                        int32_t edx_6 = 0
                        int32_t edi_3 = 0
                        int32_t eax_15 = 0
                        
                        if (k_2 s>= 2)
                            int32_t ecx_12 = ((k_2 - 2) u>> 1) + 1
                            int32_t eax_16 = ecx_12 * 2
                            int32_t temp4_1
                            
                            do
                                edx_6 += zx.d(*esi_1)
                                edi_3 += zx.d(esi_1[1])
                                esi_1 = &esi_1[2]
                                temp4_1 = ecx_12
                                ecx_12 -= 1
                            while (temp4_1 != 1)
                            eax_15 = eax_16
                            k_1 = arg3
                        
                        if (eax_15 s< k_2)
                            ebx_4 += zx.d(*esi_1)
                            esi_1 = &esi_1[1]
                        
                        esi_1 = &esi_1[eax_8]
                        ebx_4 += edi_3 + edx_6
                        k = k_1
                        k_1 -= 1
                        arg3 = k_1
                    while (k != 1)
                    j_1 = j_2
                    ecx_9 = arg1
                
                esi_1 = &esi_1[eax_11]
                char ebx_5 = (ebx_4 s>> (*(ecx_9 + 0x4c)).b).b
                ecx_9 = arg1
                *(arg2 + 3) = ebx_5
                ebp = &arg2[1]
                j = j_1
                j_1 -= 1
                arg2 = ebp
                j_2 = j_1
            while (j != 1)
            j_3 = j_4
            result = result_1
            ebx_3 = eax_4
            edi_2 = ebx_2
        
        ebp += ebx_3
        esi_1 = &esi_1[edi_2]
        i = result
        result -= 1
        arg2 = ebp
        result_1 = result
    while (i != 1)

return result
