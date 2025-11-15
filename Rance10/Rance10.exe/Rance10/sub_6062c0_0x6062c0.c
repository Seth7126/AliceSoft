// 函数: sub_6062c0
// 地址: 0x6062c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1[1]
int32_t esi_1 = ebp - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x1c

if (ecx_2 u> arg2)
    int32_t var_14_1 = arg2
    int32_t var_18_1 = ecx_2
    void* esi_3 = (arg2 - ecx_2) * 0x1c + ebp
    int32_t eax_3 = sub_55c3e0(esi_3, ebp)
    arg1[1] = esi_3
    return eax_3

if (ecx_2 u< arg2)
    sub_6066f0(arg1, arg2 - ecx_2)
    void* ecx_5 = arg1[1]
    int32_t var_14_3 = arg2
    void* var_18_2 = ecx_5
    sub_606d20(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x1c)
    eax = (arg2 - (arg1[1] - *arg1) s/ 0x1c) * 0x1c
    arg1[1] += eax

return eax
