// 函数: sub_579b10
// 地址: 0x579b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 5
int32_t eax_4
int32_t ecx
eax_4, ecx = sub_579b70(arg1, (edx_3 u>> 0x1f) + edx_3)

if (eax_4.b != 0)
    int32_t* var_c_1 = arg2
    int32_t var_10_1 = ecx
    arg1[1] = sub_57a130(eax_4, arg2[1], *arg2, *arg1)

return arg1
