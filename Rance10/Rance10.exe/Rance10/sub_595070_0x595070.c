// 函数: sub_595070
// 地址: 0x595070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1

while (arg4 s< esi)
    int32_t* edx_1 = arg3 + eax_3 * 0x18
    
    if (*edx_1 s>= *arg5)
        break
    
    int32_t ecx_2 = esi * 3
    esi = eax_3
    *(arg3 + (ecx_2 << 3)) = *edx_1
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 - 1)
    *(arg3 + (ecx_2 << 3) + 0x10) = *(edx_1 + 0x10)
    eax_3 = (eax_5 - edx_2) s>> 1

int32_t result = esi * 3
*(arg3 + (result << 3)) = *arg5
*(arg3 + (result << 3) + 0x10) = *(arg5 + 0x10)
return result
