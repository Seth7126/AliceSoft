// 函数: sub_643780
// 地址: 0x643780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg4 s>= edi)
    int32_t eax_11 = *arg5
    *(arg3 + (edi << 2)) = eax_11
    return eax_11

do
    void* edx_1 = *(arg3 + (esi_1 << 2))
    
    if (*(*(edx_1 + 0x60) + 8) s<= *(*(*arg5 + 0x60) + 8))
        break
    
    *(arg3 + (edi << 2)) = edx_1
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(esi_1 - 1)
    edi = esi_1
    esi_1 = (eax_7 - edx_2) s>> 1
while (arg4 s< edi)

int32_t eax_9 = *arg5
*(arg3 + (edi << 2)) = eax_9
return eax_9
