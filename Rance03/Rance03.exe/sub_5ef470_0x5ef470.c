// 函数: sub_5ef470
// 地址: 0x5ef470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
int32_t result_2 = (*(*esi + 0x10))()
int32_t i_2 = (*(*esi + 0x14))()
void* ebp = (*(*esi + 8))(0, 0)
arg2 = ebp
int32_t eax_4 = (*(*esi + 0x1c))() - (result_2 << 2)
char* esi_1 = (*(*arg3 + 8))(0, 0)
int32_t eax_8 = (*(*arg3 + 0x1c))() - *(arg1 + 0x44)
int32_t ecx_9 = (1 - (*(*arg3 + 0x1c))()) * *(arg1 + 0x44)
void* ecx_11 = arg1
int32_t result = result_2
int32_t edx_7 = ((*(*arg3 + 0x1c))() - result) * *(ecx_11 + 0x44)
int32_t i_1 = i_2

if (i_1 s> 0)
    int32_t ebx_1 = edx_7
    int32_t edi_2 = eax_4
    int32_t i
    
    do
        if (result s> 0)
            int32_t result_1 = result
            int32_t j
            
            do
                int32_t* k_2 = *(ecx_11 + 0x44)
                int32_t ebx_2 = 0
                
                if (k_2 s> 0)
                    int32_t* k_1 = k_2
                    arg3 = k_2
                    int32_t* k
                    
                    do
                        int32_t edx_8 = 0
                        int32_t edi_3 = 0
                        int32_t eax_12 = 0
                        
                        if (k_2 s>= 2)
                            int32_t ecx_14 = ((k_2 - 2) u>> 1) + 1
                            int32_t eax_13 = ecx_14 * 2
                            int32_t temp4_1
                            
                            do
                                edx_8 += zx.d(*esi_1)
                                edi_3 += zx.d(esi_1[1])
                                esi_1 = &esi_1[2]
                                temp4_1 = ecx_14
                                ecx_14 -= 1
                            while (temp4_1 != 1)
                            eax_12 = eax_13
                            k_1 = arg3
                        
                        if (eax_12 s< k_2)
                            ebx_2 += zx.d(*esi_1)
                            esi_1 = &esi_1[1]
                        
                        esi_1 = &esi_1[eax_8]
                        ebx_2 += edi_3 + edx_8
                        k = k_1
                        k_1 -= 1
                        arg3 = k_1
                    while (k != 1)
                    result = result_1
                    ecx_11 = arg1
                
                esi_1 = &esi_1[ecx_9]
                char ebx_3 = (ebx_2 s>> (*(ecx_11 + 0x48)).b).b
                ecx_11 = arg1
                *(arg2 + 3) = ebx_3
                ebp = &arg2[1]
                j = result
                result -= 1
                arg2 = ebp
                result_1 = result
            while (j != 1)
            result = result_2
            i_1 = i_2
            ebx_1 = edx_7
            edi_2 = eax_4
        
        ebp += edi_2
        esi_1 = &esi_1[ebx_1]
        i = i_1
        i_1 -= 1
        arg2 = ebp
        i_2 = i_1
    while (i != 1)

return result
