// 函数: sub_58cf40
// 地址: 0x58cf40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg1[1]
int32_t edx_2 = (result - *arg1) s>> 6

if (edx_2 u> arg2)
    arg1[1] = ((arg2 - edx_2) << 6) + result
    return result

if (edx_2 u< arg2)
    sub_58cfb0(arg1, arg2 - edx_2)
    int32_t* ecx = arg1[1]
    int32_t var_c_2 = arg2
    int32_t* var_10_1 = ecx
    sub_58d070(ecx, arg2 - ((ecx - *arg1) s>> 6))
    result = (arg1[1] - *arg1) s>> 6
    arg1[1] += (arg2 - result) << 6

return result
