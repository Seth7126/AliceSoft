// 函数: sub_46bb40
// 地址: 0x46bb40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
void* esi_1 = (*(*arg4 + 8))(arg5 - 1 + arg7, arg6)
int32_t edi_1 = arg7 << 2
int32_t eax_4 = (*(*arg1 + 0x1c))()
int32_t result = (*(*arg4 + 0x1c))()
int32_t ebx_1 = edi_1 + result
int32_t i_1 = arg8

if (i_1 s> 0)
    int32_t* ecx_4 = eax_1
    result = arg7
    int32_t i
    
    do
        if (result s> 0)
            int32_t edx_4 = result
            int32_t j
            
            do
                result.b = *(esi_1 + 3)
                esi_1 -= 4
                *(ecx_4 + 3) = result.b
                ecx_4 = &ecx_4[1]
                j = edx_4
                edx_4 -= 1
            while (j != 1)
            result = arg7
        
        ecx_4 += eax_4 - edi_1
        esi_1 += ebx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
