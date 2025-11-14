// 函数: sub_5b8710
// 地址: 0x5b8710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg1[1]
int32_t esi_1 = ebp - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x1c

if (ecx_2 u> arg2)
    int32_t var_14_1 = arg2
    int32_t var_18 = ecx_2
    void* esi_3 = (arg2 - ecx_2) * 0x1c + ebp
    int32_t eax_3 = sub_5b9610(esi_3, ebp)
    arg1[1] = esi_3
    return eax_3

if (ecx_2 u< arg2)
    sub_5b8bc0(arg1, arg2 - ecx_2)
    void* ecx_5 = arg1[1]
    int32_t var_14_3 = arg2
    sub_5b93f0(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x1c)
    int32_t esi_9 = arg1[1]
    eax = esi_9 + (arg2 - (esi_9 - *arg1) s/ 0x1c) * 0x1c
    arg1[1] = eax

return eax
