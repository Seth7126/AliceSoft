// 函数: sub_4671d0
// 地址: 0x4671d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 0x1c)
void* ebp = arg1 + 0x1c
int32_t* i = *result
void* var_10 = ebp

if (i != result)
    do
        if (i[9] == 0x12)
            void* ebx_1 = &i[3]
            void** eax = sub_417ed0(arg2, ebx_1)
            result = *arg2
            int32_t* ebp_3
            int32_t* result_1
            
            if (eax == result)
                result_1 = result
                ebp_3 = &result_1
            else
                void* edx_1 = &eax[4]
                int32_t ecx_1 = *(edx_1 + 0x10)
                
                if (eax[9] u>= 0x10)
                    edx_1 = *edx_1
                
                int32_t ebp_2 = *(ebx_1 + 0x10)
                
                if (*(ebx_1 + 0x14) u>= 0x10)
                    ebx_1 = *ebx_1
                
                int32_t eax_1 = ecx_1
                
                if (ebp_2 u< ecx_1)
                    eax_1 = ebp_2
                
                int32_t eax_2 = sub_405190(eax_1, edx_1, ebx_1, eax_1)
                bool cond:3_1 = eax_2 s< 0
                
                if (eax_2 != 0)
                    goto label_46725c
                
                if (ebp_2 u< ecx_1)
                    result_1 = result
                    ebp_3 = &result_1
                else
                    eax_2.b = ebp_2 != ecx_1
                    cond:3_1 = eax_2 s< 0
                label_46725c:
                    
                    if (cond:3_1)
                        result_1 = result
                        ebp_3 = &result_1
                    else
                        void** var_8 = eax
                        ebp_3 = &var_8
            
            if (*ebp_3 == result)
                ebp = var_10
            else
                int32_t ebx_2 = i[0xa]
                void* edi_2 = *i
                *i[1] = edi_2
                *(*i + 4) = i[1]
                *(var_10 + 4) -= 1
                (*i[2])(0)
                j__free(i)
                int32_t esi = *ebp_3
                ebp = var_10
                int32_t** var_28_4 = arg2
                *ebp
                sub_467b80(ebp, edi_2, *(esi + 0x28), *(esi + 0x2c))
                int32_t eax_8
                int32_t edx_6
                edx_6:eax_8 = muls.dp.d(0x38e38e39, *(esi + 0x2c) - *(esi + 0x28))
                int32_t edx_7 = edx_6 s>> 3
                uint32_t eax_10 = edx_7 u>> 0x1f
                result = eax_10 + edx_7
                
                if (eax_10 != neg.d(edx_7))
                    void* ecx_8 = edi_2
                    int32_t* j
                    
                    do
                        ecx_8 = *(ecx_8 + 4)
                        *(ecx_8 + 0x28) = ebx_2
                        j = result
                        result -= 1
                    while (j != 1)
                
                i = *(edi_2 + 4)
        
        i = *i
    while (i != *ebp)

return result
