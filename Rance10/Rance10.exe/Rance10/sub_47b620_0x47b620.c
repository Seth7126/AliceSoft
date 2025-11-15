// 函数: sub_47b620
// 地址: 0x47b620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
char* ebp = (*(*arg3 + 8))(arg2, arg4)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q((*(*arg3 + 0x18))())
int32_t eax_5 = (*(*arg3 + 0x1c))() - (((edx_1 & 7) + eax_3) s>> 3) * arg8
char* esi_3 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_9
int32_t edx_5
edx_5:eax_9 = sx.q((*(*arg5 + 0x18))())
int32_t result = (*(*arg5 + 0x1c))()
int32_t i_1 = arg9
int32_t ebx_2 = result - (((edx_5 & 7) + eax_9) s>> 3) * arg8

if (i_1 s> 0)
    result = arg8
    int32_t i
    
    do
        if (result s> 0)
            int32_t ecx_5 = result
            int32_t j
            
            do
                *ebp = *esi_3
                ebp[1] = esi_3[1]
                ebp[2] = esi_3[2]
                char eax_13 = esi_3[3]
                esi_3 = &esi_3[4]
                ebp[3] = eax_13
                ebp = &ebp[4]
                j = ecx_5
                ecx_5 -= 1
            while (j != 1)
            result = arg8
        
        ebp = &ebp[eax_5]
        esi_3 = &esi_3[ebx_2]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
