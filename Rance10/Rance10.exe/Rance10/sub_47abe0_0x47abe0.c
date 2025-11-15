// 函数: sub_47abe0
// 地址: 0x47abe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
void* esi = (*(*arg4 + 8))(arg5, arg6 + arg8 - 1)
int32_t edi_1 = arg7 << 2
int32_t eax_6 = (*(*arg1 + 0x1c))()
int32_t result = (*(*arg4 + 0x1c))()
int32_t i_1 = arg8
int32_t ebp_2 = neg.d(edi_1 + result)

if (i_1 s> 0)
    int32_t* ecx_6 = eax_1
    result = arg7
    int32_t i
    
    do
        if (result s> 0)
            int32_t edx_2 = result
            int32_t j
            
            do
                result.b = *(esi + 3)
                esi += 4
                *(ecx_6 + 3) = result.b
                ecx_6 = &ecx_6[1]
                j = edx_2
                edx_2 -= 1
            while (j != 1)
            result = arg7
        
        ecx_6 += eax_6 - edi_1
        esi += ebp_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
