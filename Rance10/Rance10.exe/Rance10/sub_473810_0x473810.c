// 函数: sub_473810
// 地址: 0x473810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = *(arg1 + 0x1c)
void* ebp = arg1 + 0x1c
int32_t* i = *result
void* var_10 = ebp

if (i != result)
    do
        if (i[0xe] == 0x13)
            void** result_1 = sub_432330(arg2, &i[2])
            result = *arg2
            bool cond:1_1
            
            if (result_1 != result)
                cond:1_1 = sub_412ca0(&i[2], &result_1[4]) == 0
            
            if (result_1 == result || not(cond:1_1))
                result_1 = result
            
            if (result_1 != result)
                void* eax_4 = *i
                int32_t ebp_1 = i[0xf]
                *i[1] = eax_4
                *(*i + 4) = i[1]
                *(arg1 + 0x20) -= 1
                sub_408940(&i[2])
                sub_403160(i, 1, 0x40)
                
                if (eax_4 != **var_10)
                    int32_t var_28_4 = 0.d
                else
                    int32_t var_28_3 = 0.d
                
                sub_4743c0(var_10, eax_4, result_1[0xa], result_1[0xb])
                int32_t ebx_4 = result_1[0xb] - result_1[0xa]
                void* ecx_4 = eax_4
                int32_t eax_8
                int32_t edx_4
                edx_4:eax_8 = muls.dp.d(0x92492493, ebx_4)
                int32_t edx_6 = (edx_4 + ebx_4) s>> 5
                result = ebx_4 s/ 0x38
                
                if (edx_6 u>> 0x1f != neg.d(edx_6))
                    int32_t* j
                    
                    do
                        ecx_4 = *(ecx_4 + 4)
                        *(ecx_4 + 0x3c) = ebp_1
                        j = result
                        result -= 1
                    while (j != 1)
                
                i = *(eax_4 + 4)
                ebp = var_10
        
        i = *i
    while (i != *ebp)

return result
