// 函数: sub_5f0820
// 地址: 0x5f0820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg3 - *arg1
void* eax_1 = arg1[1]

if (eax_1 == arg1[2])
    int32_t* var_14_1 = arg1
    eax_1 = sub_5a55a0(arg1)

int32_t* edx_3 = arg1[1]

if (edx_3 != 0)
    int32_t ecx = *arg5
    *edx_3 = *arg4
    edx_3[1] = ecx
    *(edx_3 + 8) = *arg6
    eax_1 = arg6[1].d
    edx_3[6] = eax_1

arg1[1] += 0x1c
int128_t* esi_2 = arg1[1]
int32_t ebp_2 = esi_1 s/ 0x1c * 0x1c
int128_t* ecx_2 = *arg1 + ebp_2

if (ecx_2 != esi_2 - 0x1c && esi_2 - 0x1c != esi_2)
    int32_t var_14_2 = 0
    sub_5f0cb0(eax_1, esi_2 - 0x1c, ecx_2, esi_2)

*arg2 = *arg1 + ebp_2
return arg2
