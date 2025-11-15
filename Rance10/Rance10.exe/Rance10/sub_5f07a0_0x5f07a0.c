// 函数: sub_5f07a0
// 地址: 0x5f07a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, arg3 - *arg1)
int32_t edx_2 = edx_1 s>> 1

if (arg1[1] == arg1[2])
    int32_t* var_c_1 = arg1
    sub_592610(arg1)

int32_t* edx_3 = arg1[1]
int32_t* arg_10

if (edx_3 != 0)
    int32_t ecx = *arg_10
    *edx_3 = *arg4
    edx_3[1] = ecx
    edx_3[2] = *arg5

arg1[1] += 0xc
int64_t* edx_4 = arg1[1]
int32_t esi_4 = ((edx_2 u>> 0x1f) + edx_2) * 0xc
int64_t* eax_8 = *arg1 + esi_4
sub_5f0bd0(eax_8, edx_4, &arg_10, eax_8, edx_4 - 0xc, edx_4)
*arg2 = *arg1 + esi_4
return arg2
