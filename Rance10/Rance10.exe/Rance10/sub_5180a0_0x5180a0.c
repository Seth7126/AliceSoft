// 函数: sub_5180a0
// 地址: 0x5180a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x1a, arg3)
void* esi_1 = *(*(edi + (arg3 << 2) + 0x7c) + 0x60)
void* eax_1 = *(esi_1 + 0x68)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

int32_t ecx_1 = *(eax_1 + 0x48)
*(eax_1 + 0x4c) = 0

if (arg2 s>= ecx_1)
    *(esi_1 + 0x13a) = 1
    *(esi_1 + 0x13c) = arg2 - ecx_1
    int32_t eax_4
    eax_4.b = 1
    return eax_4

int32_t var_c_1 = arg2
sub_4daf50(*(esi_1 + 0x68))
*(esi_1 + 0x138) = 1
void* eax_3
eax_3.b = 1
return eax_3
