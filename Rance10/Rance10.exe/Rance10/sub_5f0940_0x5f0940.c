// 函数: sub_5f0940
// 地址: 0x5f0940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x66666667, arg3 - *arg1)
int32_t edx_2 = edx_1 s>> 3

if (arg1[1] == arg1[2])
    int32_t* var_c_1 = arg1
    sub_5a7740(arg1)

int128_t* ecx = arg1[1]
int128_t* arg_c

if (ecx != 0)
    int128_t* eax_2 = arg_c
    *ecx = *eax_2
    ecx[1].d = eax_2[1].d

arg1[1] += 0x14
int128_t* edx_3 = arg1[1]
int32_t esi_4 = ((edx_2 u>> 0x1f) + edx_2) * 0x14
int128_t* eax_5 = *arg1 + esi_4
sub_5f0b60(eax_5, edx_3, &arg_c, eax_5, edx_3 - 0x14, edx_3)
*arg2 = *arg1 + esi_4
return arg2
