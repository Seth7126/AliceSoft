// 函数: sub_57ec00
// 地址: 0x57ec00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg1[1]
int32_t esi_1 = ebp - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x88888889, esi_1)
int32_t ecx_2 = esi_1 s/ 0x3c

if (ecx_2 u> arg2)
    int32_t var_14_1 = arg2
    int32_t var_18 = ecx_2
    void* esi_3 = (arg2 - ecx_2) * 0x3c + ebp
    int32_t eax_4 = sub_57ff80(esi_3, ebp)
    arg1[1] = esi_3
    return eax_4

if (ecx_2 u< arg2)
    sub_57f040(arg1, arg2 - ecx_2)
    void* ecx_5 = arg1[1]
    int32_t var_14_3 = arg2
    sub_57fcb0(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x3c)
    int32_t esi_9 = arg1[1]
    eax = esi_9 + (arg2 - (esi_9 - *arg1) s/ 0x3c) * 0x3c
    arg1[1] = eax

return eax
