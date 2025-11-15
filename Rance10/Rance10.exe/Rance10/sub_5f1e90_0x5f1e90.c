// 函数: sub_5f1e90
// 地址: 0x5f1e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1

while (arg4 s< edi)
    int32_t esi_1 = eax_3 * 0x1c
    int128_t* esi_2 = esi_1 + arg3
    
    if (*(esi_1 + arg3) s>= *arg5)
        break
    
    int32_t ecx_4 = edi * 7
    edi = eax_3
    int32_t edx_1 = ecx_4 << 2
    *(edx_1 + arg3) = *esi_2
    *(edx_1 + arg3 + 0x10) = esi_2[1].q
    *(edx_1 + arg3 + 0x18) = *(esi_2 + 0x18)
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 - 1)
    eax_3 = (eax_5 - edx_2) s>> 1

int32_t ecx_6 = edi * 0x1c
*(ecx_6 + arg3) = *arg5
*(ecx_6 + arg3 + 0x10) = *(arg5 + 0x10)
int32_t result = arg5[6]
*(ecx_6 + arg3 + 0x18) = result
return result
