// 函数: sub_61b380
// 地址: 0x61b380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_4 = *(arg1 + 0xc)
void** esi_1 = *(arg1 + 4)
int32_t ecx_3 = *(arg1 + 0x18) & ((((((((zx.d(*arg3) ^ 0x811c9dc5) * 0x1000193) ^ zx.d(arg3[1]))
    * 0x1000193) ^ zx.d(arg3[2])) * 0x1000193) ^ zx.d(arg3[3])) * 0x1000193)
void** eax_6 = *(edx_4 + (ecx_3 << 3))
int32_t ecx_4 = ecx_3 * 2

while (true)
    void** ecx_5
    
    if (*(edx_4 + (ecx_4 << 2)) != esi_1)
        ecx_5 = **(edx_4 + (ecx_4 << 2) + 4)
    else
        ecx_5 = esi_1
    
    if (eax_6 == ecx_5)
        *arg2 = esi_1
        return arg2
    
    if (eax_6[2] == *arg3)
        break
    
    eax_6 = *eax_6

if (*arg3 != eax_6[2])
    eax_6 = esi_1

*arg2 = eax_6
return arg2
