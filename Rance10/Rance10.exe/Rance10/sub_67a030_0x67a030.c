// 函数: sub_67a030
// 地址: 0x67a030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t j_3 = *(arg1 + 0x5c)
int32_t edi = *(arg1 + 0x64)
int32_t j_4 = j_3
void** result = *(*(arg1 + 0x1c0) + 0x18)
void** result_1 = result

if (arg4 s> 0)
    result = arg3
    int32_t* ecx_2 = arg2 - result
    arg2 = ecx_2
    int32_t i
    
    do
        char* esi_1 = *(ecx_2 + result)
        int32_t j_1 = j_3
        void* ebp_1 = *result
        arg1 = ebp_1
        int32_t j_2 = j_1
        
        if (j_3 != 0)
            int32_t j
            
            do
                int32_t ebx_1 = 0
                int32_t eax_1 = 0
                
                if (edi s> 0)
                    do
                        uint32_t edx = zx.d(*esi_1)
                        esi_1 = &esi_1[1]
                        int32_t ecx_3 = result_1[eax_1]
                        eax_1 += 1
                        ebx_1 += zx.d(*(ecx_3 + edx))
                    while (eax_1 s< edi)
                    
                    ebp_1 = arg1
                    j_1 = j_2
                
                *ebp_1 = ebx_1.b
                ebp_1 += 1
                j = j_1
                j_1 -= 1
                arg1 = ebp_1
                j_2 = j_1
            while (j != 1)
            result = arg3
            j_3 = j_4
        
        ecx_2 = arg2
        result = &result[1]
        i = arg4
        arg4 -= 1
        arg3 = result
    while (i != 1)

return result
