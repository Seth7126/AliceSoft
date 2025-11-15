// 函数: sub_594f80
// 地址: 0x594f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1

while (arg4 s< edi)
    int32_t* esi_1 = arg3 + eax_3 * 0xc
    
    if (*esi_1 s>= *arg5)
        break
    
    int64_t* edx_1 = arg3 + edi * 0xc
    edi = eax_3
    *edx_1 = *esi_1
    edx_1[1].d = esi_1[2]
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 - 1)
    eax_3 = (eax_5 - edx_2) s>> 1

int64_t* ecx_4 = arg3 + edi * 0xc
*ecx_4 = *arg5
int32_t result = arg5[2]
ecx_4[1].d = result
return result
