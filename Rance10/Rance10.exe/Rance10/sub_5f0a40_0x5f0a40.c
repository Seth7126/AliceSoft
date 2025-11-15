// 函数: sub_5f0a40
// 地址: 0x5f0a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg3 - *arg1
void* eax_1 = arg1[1]

if (eax_1 == arg1[2])
    int32_t* var_14_1 = arg1
    eax_1 = sub_5a55a0(arg1)

int128_t* ecx = arg1[1]

if (ecx != 0)
    *ecx = *arg4
    ecx[1].q = arg4[1].q
    eax_1 = *(arg4 + 0x18)
    *(ecx + 0x18) = eax_1

arg1[1] += 0x1c
int128_t* esi_2 = arg1[1]
int32_t ebp_2 = esi_1 s/ 0x1c * 0x1c
int128_t* ecx_2 = *arg1 + ebp_2

if (ecx_2 != esi_2 - 0x1c && esi_2 - 0x1c != esi_2)
    int32_t var_14_2 = 0
    sub_5f0cb0(eax_1, esi_2 - 0x1c, ecx_2, esi_2)

*arg2 = *arg1 + ebp_2
return arg2
