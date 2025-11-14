// 函数: sub_566b00
// 地址: 0x566b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 3
int32_t eax_4
int32_t ecx
eax_4, ecx = sub_467b10(arg1, (edx_3 u>> 0x1f) + edx_3)

if (eax_4.b != 0)
    int32_t* var_c_1 = arg2
    int32_t var_10_1 = ecx
    arg1[1] = sub_569bf0(eax_4, arg2[1], *arg2, *arg1)

return arg1
