// 函数: sub_5f08c0
// 地址: 0x5f08c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
int32_t edx_2 = edx_1 s>> 2

if (arg1[1] == arg1[2])
    int32_t* var_c_1 = arg1
    sub_592820(arg1)

int32_t* edx_3 = arg1[1]
int32_t* arg_10

if (edx_3 != 0)
    int32_t ecx = *arg_10
    *edx_3 = *arg4
    edx_3[1] = ecx
    *(edx_3 + 8) = *arg5

arg1[1] += 0x18
int128_t* edx_4 = arg1[1]
int32_t esi_4 = ((edx_2 u>> 0x1f) + edx_2) * 0x18
int128_t* eax_7 = *arg1 + esi_4
sub_5f0c40(eax_7, edx_4, &arg_10, eax_7, edx_4 - 0x18, edx_4)
*arg2 = *arg1 + esi_4
return arg2
