// 函数: sub_58f770
// 地址: 0x58f770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1[1]
int32_t esi_1 = ebp - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x1c

if (ecx_2 u> arg2)
    int32_t eax_4 = (arg2 - ecx_2) * 0x1c + ebp
    arg1[1] = eax_4
    return eax_4

if (ecx_2 u< arg2)
    sub_58f910(arg1, arg2 - ecx_2)
    void* ecx_4 = arg1[1]
    int32_t var_14_2 = arg2
    void* var_18_1 = ecx_4
    sub_58fbc0(ecx_4, arg2 - (ecx_4 - *arg1) s/ 0x1c)
    eax = (arg2 - (arg1[1] - *arg1) s/ 0x1c) * 0x1c
    arg1[1] += eax

return eax
