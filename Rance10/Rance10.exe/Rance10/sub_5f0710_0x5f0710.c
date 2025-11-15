// 函数: sub_5f0710
// 地址: 0x5f0710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, arg3 - *arg1)
int32_t edx_2 = edx_1 s>> 3

if (arg1[1] == arg1[2])
    int32_t* var_c_1 = arg1
    sub_5a7740(arg1)

int32_t* edx_3 = arg1[1]
int32_t* arg_10

if (edx_3 != 0)
    int32_t ecx = *arg_10
    *edx_3 = *arg4
    edx_3[1] = ecx
    *(edx_3 + 8) = *arg5
    edx_3[4] = arg5[1].d

arg1[1] += 0x14
int128_t* edx_4 = arg1[1]
int32_t esi_4 = ((edx_2 u>> 0x1f) + edx_2) * 0x14
int128_t* eax_8 = *arg1 + esi_4
sub_5f0b60(eax_8, edx_4, &arg_10, eax_8, edx_4 - 0x14, edx_4)
*arg2 = *arg1 + esi_4
return arg2
