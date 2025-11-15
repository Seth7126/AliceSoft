// 函数: sub_6e1a97
// 地址: 0x6e1a97
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* edx = arg1
int32_t* ecx = arg8
void* var_8_1 = edx
*arg5 = arg3
*ecx = arg6
int32_t result
result.b = *arg5 != arg4

while (true)
    if (*arg5 != arg4 && *ecx != arg7)
        int32_t ecx_1 = __Mbrtowc(*ecx, *arg5, arg4 - *arg5, arg2, edx + 8)
        
        if (ecx_1 == 0xfffffffe)
            *arg5 = arg4
        else
            if (ecx_1 == 0xffffffff)
                break
            
            if (ecx_1 == 0 && **arg8 == 0)
                char* ecx_2 = *arg5
                int16_t* eax_8
                
                do
                    eax_8.b = *ecx_2
                    ecx_2 = &ecx_2[1]
                while (eax_8.b != 0)
                ecx_1 = ecx_2 - &ecx_2[1] + 1
            
            edx = var_8_1
            int32_t eax_10 = neg.d(ecx_1 + 3)
            ecx = arg8
            *arg5 += sbb.d(eax_10, eax_10, ecx_1 != 0xfffffffd) & ecx_1
            *ecx += 2
            result = 0
            continue
    
    return result

return 2
