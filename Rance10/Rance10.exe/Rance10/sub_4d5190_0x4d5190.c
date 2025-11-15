// 函数: sub_4d5190
// 地址: 0x4d5190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 4
int32_t eax_4
int32_t ecx
eax_4, ecx = sub_417360(arg1, (edx_3 u>> 0x1f) + edx_3)

if (eax_4.b != 0)
    int32_t var_c_1 = ecx
    int32_t* var_10_1 = arg2
    int32_t var_14_1 = ecx
    arg1[1] = sub_4aaf90(eax_4, arg2[1], *arg2, *arg1)

return arg1
