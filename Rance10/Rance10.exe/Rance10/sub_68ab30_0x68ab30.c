// 函数: sub_68ab30
// 地址: 0x68ab30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[1]
int32_t eax = *arg1
int32_t edx_2 = (ecx - eax) s>> 2

if (edx_2 u> 8)
    int32_t eax_2 = ecx + ((8 - edx_2) << 2)
    arg1[1] = eax_2
    return eax_2

if (edx_2 u< 8)
    int32_t* ebx_1 = arg2
    
    if (ebx_1 u>= ecx || eax u> ebx_1)
        sub_404610(arg1, 8 - edx_2)
    else
        sub_404610(arg1, 8 - edx_2)
        ebx_1 = *arg1 + ((ebx_1 - eax) s>> 2 << 2)
    
    int32_t* ecx_3 = arg1[1]
    int32_t* var_10_3 = arg2
    int32_t* var_14_1 = ecx_3
    int32_t eax_8 = (ecx_3 - *arg1) s>> 2
    sub_404760(eax_8, 8 - eax_8, ecx_3, ebx_1)
    eax = (arg1[1] - *arg1) s>> 2
    arg1[1] += (8 - eax) << 2

return eax
