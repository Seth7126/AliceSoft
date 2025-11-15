// 函数: sub_630e60
// 地址: 0x630e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_2 = *(arg1 + 0xc)
void** esi_1 = *(arg1 + 4)
int32_t ecx_1 =
    *(arg1 + 0x18) & ((((zx.d(*arg3) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(arg3[1])) * 0x1000193)
void** eax_4 = *(edx_2 + (ecx_1 << 3))
int32_t ecx_2 = ecx_1 * 2
void** ecx_3

while (true)
    if (*(edx_2 + (ecx_2 << 2)) != esi_1)
        ecx_3 = **(edx_2 + (ecx_2 << 2) + 4)
    else
        ecx_3 = esi_1
    
    if (eax_4 == ecx_3)
        *arg2 = esi_1
        return arg2
    
    ecx_3.w = eax_4[2].w
    
    if (ecx_3.w == *arg3)
        break
    
    eax_4 = *eax_4

ecx_3.w = *arg3

if (ecx_3.w != eax_4[2].w)
    eax_4 = esi_1

*arg2 = eax_4
return arg2
