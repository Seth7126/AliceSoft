// 函数: sub_4d4cc0
// 地址: 0x4d4cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]
int32_t ecx = *arg1
int32_t edx_2 = (eax - ecx) s>> 2

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 2)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    int32_t* ebx_1 = arg3
    
    if (ebx_1 u>= eax || ecx u> ebx_1)
        sub_404610(arg1, arg2 - edx_2)
    else
        sub_404610(arg1, arg2 - edx_2)
        ebx_1 = *arg1 + ((ebx_1 - ecx) s>> 2 << 2)
    
    int32_t* ecx_3 = arg1[1]
    int32_t var_10_3 = arg2
    int32_t* var_14_1 = ecx_3
    int32_t eax_9 = (ecx_3 - *arg1) s>> 2
    sub_404760(eax_9, arg2 - eax_9, ecx_3, ebx_1)
    eax = (arg1[1] - *arg1) s>> 2
    arg1[1] += (arg2 - eax) << 2

return eax
