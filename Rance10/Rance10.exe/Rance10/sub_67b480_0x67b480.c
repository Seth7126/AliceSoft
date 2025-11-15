// 函数: sub_67b480
// 地址: 0x67b480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t j_2 = *(arg1 + 0x5c)
int32_t i_1 = arg4
int32_t j_3 = j_2
int32_t* result = *(*(arg1 + 0x1c0) + 0x18)
int32_t* result_1 = result

if (i_1 s> 0)
    result = arg3
    int32_t* ebx_2 = arg2 - result
    arg2 = ebx_2
    int32_t i
    
    do
        void* esi_1 = *(ebx_2 + result)
        char* edi_1 = *result
        int32_t j_1 = j_2
        
        if (j_2 != 0)
            int32_t j
            
            do
                uint32_t ebx_3 = zx.d(*(esi_1 + 1))
                esi_1 += 3
                uint32_t ebx_4 = ebx_3 u>> 2
                uint32_t edx_1 = zx.d(*(esi_1 - 3)) u>> 3
                uint32_t ebp_2 = zx.d(*(esi_1 - 1)) u>> 3
                uint32_t ecx_3 = (ebx_4 << 5) + ebp_2
                int32_t eax_2 = result_1[edx_1]
                char* eax_3 = eax_2 + (ecx_3 << 1)
                
                if (*(eax_2 + (ecx_3 << 1)) == 0)
                    sub_67b350(eax_3, edx_1, arg1, ebx_4, ebp_2)
                
                eax_3.b = *eax_3
                eax_3.b -= 1
                *edi_1 = eax_3.b
                edi_1 = &edi_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = arg3
            i_1 = arg4
            j_2 = j_3
            ebx_2 = arg2
        
        result = &result[1]
        i = i_1
        i_1 -= 1
        arg3 = result
        arg4 = i_1
    while (i != 1)

return result
