// 函数: sub_45c210
// 地址: 0x45c210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = (*(*arg3 + 8))(0, 0)
int32_t result

if (arg7 == 0)
    int32_t i_3 = arg5
    result = arg4
    arg7.d = (*(*arg3 + 0x1c))() - (result << 2)
    
    if (i_3 s> 0)
        int32_t ecx_4 = arg7.d
        int32_t edx_4 = 0
        int32_t i
        
        do
            if (result s> 0)
                int32_t ecx_5 = 0
                int32_t ebx_2 = result
                int32_t j
                
                do
                    ecx_5 += 3
                    *esi = *(*arg2 + edx_4 + ecx_5 - 1)
                    esi[1] = *(*arg2 + edx_4 + ecx_5 - 2)
                    esi[2] = *(*arg2 + edx_4 + ecx_5 - 3)
                    esi[3] = 0xff
                    esi = &esi[4]
                    j = ebx_2
                    ebx_2 -= 1
                while (j != 1)
                result = arg4
                ecx_4 = arg7.d
            
            edx_4 += arg6
            esi = &esi[ecx_4]
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    int32_t i_2 = arg5
    result = (*(*arg3 + 0x1c))() - (arg4 << 2)
    arg7.d = result
    
    if (i_2 s> 0)
        int32_t ecx_2 = 0
        int32_t i_1
        
        do
            int32_t edx_1 = 0
            
            if (arg4 s> 0)
                do
                    *esi = *(*arg2 + ecx_2 + (edx_1 << 2) + 2)
                    esi[1] = *(*arg2 + ecx_2 + (edx_1 << 2) + 1)
                    esi[2] = *(*arg2 + ecx_2 + (edx_1 << 2))
                    char eax_14 = *(*arg2 + ecx_2 + (edx_1 << 2) + 3)
                    edx_1 += 1
                    esi[3] = eax_14
                    esi = &esi[4]
                while (edx_1 s< arg4)
                
                result = arg7.d
            
            ecx_2 += arg6
            esi = &esi[result]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
