// 函数: sub_448b30
// 地址: 0x448b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg4
uint32_t eax = sub_4365c0(edi)
uint32_t eax_2
int32_t ecx_2

if (eax s>= 0)
    eax_2 = 0xffffffff
    ecx_2 = 1
else
    ecx_2 = sub_448e40(&arg4, eax)
    eax_2 = arg4

edi[1] += ecx_2
int32_t ecx_3 = edi[1]
arg4 = eax_2

if (eax_2 == 0xfffffffe)
    uint32_t eax_22 = sub_449730(edi)
    int32_t esi_6 = edi[1]
    *arg3 = eax_22
    uint32_t ecx_14 = esi_6 u>> 3
    int32_t ebp_2 = esi_6 & 7
    
    if (ebp_2 == 0)
        arg4 = 0
    else
        arg4 = zx.d(*(**edi + ecx_14 + 1))
    
    char edx_10 = ((zx.d(*(**edi + ecx_14)) << 8 | arg4) s>> (8 - ebp_2.b)).b
    edi[1] = esi_6 + 8
    uint32_t eax_29 = zx.d(edx_10)
    *arg2 = eax_29
    
    if (edx_10 == 0)
        *arg2 = sub_449780(edi)
        uint32_t eax_30
        eax_30.b = 1
        return eax_30
    
    if (eax_29 == 0x80)
        *arg2 = sub_449780(edi) - 0x100
        int32_t eax_32
        eax_32.b = 1
        return eax_32
    
    if (eax_29 s> 0x80)
        *arg2 = eax_29 - 0x100
    
    eax_29.b = 1
    return eax_29

if (eax_2 != 0xffffffff)
    *arg3 = zx.d((eax_2 s>> 8).b)
    int32_t eax_5 = edi[1]
    edi[1] = eax_5 + 1
    uint32_t eax_14
    eax_14.b = 1
    *arg2 = (1 - (zx.d(*(**edi + (ecx_3 u>> 3))) u>> (7 - (eax_5.b & 7)) & 1) * 2) * zx.d(arg4.b)
    return eax_14

int32_t* eax_15 = *edi
edi[1] = ecx_3 + 1
int32_t eax_16 = *eax_15
arg4 = ecx_3 + 1
uint32_t ecx_8
ecx_8.b = 7
ecx_8.b = 7 - (ecx_3.b & 7)
eax_16.b = *((ecx_3 u>> 3) + eax_16)
eax_16.b u>>= ecx_8.b

if ((eax_16.b & 1) == 0)
    *arg3 = 0xffffffff
    eax_16.b = 1
    return eax_16

uint32_t eax_17 = arg4
*arg3 = 0
edi[1] = eax_17 + 1
*arg2 = 1 - (zx.d(*((eax_17 u>> 3) + **edi)) u>> (7 - (eax_17.b & 7)) & 1) * 2
int32_t eax_21
eax_21.b = 1
return eax_21
