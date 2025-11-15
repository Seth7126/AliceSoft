// 函数: sub_682550
// 地址: 0x682550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x20)

if (eax == *(arg1 + 0x24))
    eax.b = 0
    return eax

int32_t edx = *(arg2 + 8)

if (edx != 0 && *(arg2 + 4) + edx u<= *(arg1 + 0x24) - eax)
    sub_405950(arg3, edx)
    char* ecx_3 = *arg3
    sub_700660(ecx_3, *(arg2 + 4) + *(arg1 + 0x20), arg3[1] - ecx_3)
    char* eax_6
    eax_6.b = 1
    return eax_6

eax.b = 0
return eax
