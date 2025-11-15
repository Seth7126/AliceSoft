// 函数: sub_64d2c0
// 地址: 0x64d2c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg1
int32_t ecx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
int32_t ebx = result[0x13]
int32_t i_2 = result[7]
arg5 = ecx_1

if (not(cond:0))
    int32_t esi_1 = arg4 << 2
    result = arg2
    arg1 = esi_1
    int32_t temp1_1
    
    do
        int32_t edi_1 = 0
        
        if (ebx s> 0)
            do
                char* eax_2 = *result + edi_1
                void* edx_1 = *(esi_1 + *(arg3 + (edi_1 << 2)))
                
                if (i_2 != 0)
                    int32_t i_1 = i_2
                    int32_t i
                    
                    do
                        int32_t ecx_3
                        ecx_3.b = *eax_2
                        edx_1 += 1
                        eax_2 = &eax_2[ebx]
                        *(edx_1 - 1) = ecx_3.b
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    esi_1 = arg1
                
                result = arg2
                edi_1 += 1
            while (edi_1 s< ebx)
            
            ecx_1 = arg5
        
        result = &result[1]
        esi_1 += 4
        temp1_1 = ecx_1
        ecx_1 -= 1
        arg2 = result
        arg1 = esi_1
        arg5 = ecx_1
    while (temp1_1 - 1 s>= 0)

return result
