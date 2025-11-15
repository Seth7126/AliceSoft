// 函数: sub_6572d0
// 地址: 0x6572d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg1
int32_t edx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
int32_t ebx = result[9]
int32_t i_2 = result[0x17]
arg5 = edx_1

if (not(cond:0))
    int32_t ecx_1 = arg3 << 2
    result = arg4
    arg1 = ecx_1
    int32_t temp1_1
    
    do
        int32_t edi_1 = 0
        
        if (ebx s> 0)
            do
                char* edx_2 = *(ecx_1 + *(arg2 + (edi_1 << 2)))
                char* eax_5 = *arg4 + edi_1
                
                if (i_2 != 0)
                    int32_t i_1 = i_2
                    int32_t i
                    
                    do
                        ecx_1.b = *edx_2
                        edx_2 = &edx_2[1]
                        *eax_5 = ecx_1.b
                        eax_5 = &eax_5[ebx]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    ecx_1 = arg1
                
                edi_1 += 1
            while (edi_1 s< ebx)
            
            result = arg4
            edx_1 = arg5
        
        ecx_1 += 4
        result = &result[1]
        temp1_1 = edx_1
        edx_1 -= 1
        arg1 = ecx_1
        arg4 = result
        arg5 = edx_1
    while (temp1_1 - 1 s>= 0)

return result
