// 函数: sub_633b80
// 地址: 0x633b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]
int32_t edx_2 = (eax - *arg1) s>> 3

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 3)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    sub_633de0(arg1, arg2 - edx_2)
    int64_t* ecx = arg1[1]
    int32_t var_c_2 = arg2
    int64_t* var_10_1 = ecx
    sub_636460(ecx, arg2 - ((ecx - *arg1) s>> 3))
    eax = (arg1[1] - *arg1) s>> 3
    arg1[1] += (arg2 - eax) << 3

return eax
