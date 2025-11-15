// 函数: sub_5e5b60
// 地址: 0x5e5b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_1 = sub_5665c0(data_7fd4cc, arg3, arg2)
void* eax

if (ecx_1 == 0)
    eax.b = 0
    return eax

eax.b = *(ecx_1 + 0x228)
int32_t eax_1

if (eax.b != 0 && (arg4 == 1 || arg4 == 2))
    *(ecx_1 + 0x22c) = arg4
    eax_1.b = 1
    return eax_1

*(ecx_1 + 0x174) = arg4
eax_1.b = 1
*(ecx_1 + 0x22c) = 0
return eax_1
