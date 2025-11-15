// 函数: sub_4aad80
// 地址: 0x4aad80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, arg3 - *arg1)
int32_t edx_2 = edx_1 s>> 4

if (arg1[1] == arg1[2])
    int32_t* var_14_1 = arg1
    sub_4aae70(arg1)

int128_t* ecx = arg1[1]

if (ecx != 0)
    *ecx = *arg4
    ecx[1] = arg4[1]
    ecx[2].q = arg4[2].q

arg1[1] += 0x28
int128_t* esi = arg1[1]
int32_t ebx_4 = ((edx_2 u>> 0x1f) + edx_2) * 0x28
int128_t* eax_4 = *arg1 + ebx_4

if (eax_4 != esi - 0x28 && esi - 0x28 != esi)
    sub_4aae20(eax_4, esi - 0x28)
    sub_4aae20(esi - 0x28, esi)
    sub_4aae20(eax_4, esi)

*arg2 = *arg1 + ebx_4
return arg2
