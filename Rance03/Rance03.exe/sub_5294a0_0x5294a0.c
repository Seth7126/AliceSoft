// 函数: sub_5294a0
// 地址: 0x5294a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
    sub_5295d0(arg1, arg2 - ecx_2)
    void* ecx_4 = arg1[1]
    int32_t var_14_2 = arg2
    sub_529840(ecx_4, arg2 - (ecx_4 - *arg1) s/ 0x1c)
    int32_t esi_7 = arg1[1]
    eax = esi_7 + (arg2 - (esi_7 - *arg1) s/ 0x1c) * 0x1c
    arg1[1] = eax

return eax
