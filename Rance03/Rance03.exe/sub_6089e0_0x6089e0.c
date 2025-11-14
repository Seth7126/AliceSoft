// 函数: sub_6089e0
// 地址: 0x6089e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x20)

if (eax == *(arg1 + 0x24))
    eax.b = 0
    return eax

int32_t edx = *(arg2 + 8)

if (edx != 0 && *(arg2 + 4) + edx u<= *(arg1 + 0x24) - eax)
    sub_403540(arg3, edx)
    int32_t* ecx_3 = *arg3
    sub_69d850(ecx_3, *(arg2 + 4) + *(arg1 + 0x20), arg3[1] - ecx_3)
    int32_t* eax_6
    eax_6.b = 1
    return eax_6

eax.b = 0
return eax
