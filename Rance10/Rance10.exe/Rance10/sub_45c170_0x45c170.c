// 函数: sub_45c170
// 地址: 0x45c170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
char* esi = (*(*arg3 + 8))(0, 0)
int32_t i_1 = arg5
int32_t result = arg4
int32_t edx_1 = (*(*arg3 + 0x1c))() - (result << 2)

if (i_1 s> 0)
    int32_t ecx_2 = edx_1
    int32_t edx_2 = 0
    int32_t i
    
    do
        if (result s> 0)
            int32_t ecx_3 = 0
            int32_t edi_1 = result
            int32_t j
            
            do
                ecx_3 += 6
                *esi = *(*arg2 + edx_2 + ecx_3 - 2)
                esi[1] = *(*arg2 + edx_2 + ecx_3 - 4)
                esi[2] = *(*arg2 + edx_2 + ecx_3 - 6)
                esi[3] = 0xff
                esi = &esi[4]
                j = edi_1
                edi_1 -= 1
            while (j != 1)
            result = arg4
            ecx_2 = edx_1
        
        edx_2 += arg6
        esi = &esi[ecx_2]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
