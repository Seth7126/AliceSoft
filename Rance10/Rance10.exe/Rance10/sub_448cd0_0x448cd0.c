// 函数: sub_448cd0
// 地址: 0x448cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t* var_4_1 = arg3
int32_t* esi = arg4
uint32_t eax = sub_4365c0(esi)
int32_t eax_1
uint32_t ebx

if (eax s>= 0)
    ebx = 0xffffffff
    eax_1 = 1
else
    eax_1 = sub_448e40(&arg4, eax)
    ebx = arg4

esi[1] += eax_1
int32_t ebp = esi[1]

if (ebx != 0xfffffffe)
    if (ebx == 0xffffffff)
        *arg3 = 0
        esi[1] = ebp + 1
        *arg2 = 1 - (zx.d(*(**esi + (ebp u>> 3))) u>> (7 - (ebp.b & 7)) & 1) * 2
        int32_t eax_16
        eax_16.b = 1
        return eax_16
    
    *arg3 = zx.d((ebx s>> 8).b)
    esi[1] = ebp + 1
    uint32_t eax_12
    eax_12.b = 1
    *arg2 = (1 - (zx.d(*(**esi + (ebp u>> 3))) u>> (7 - (ebp.b & 7)) & 1) * 2) * zx.d(ebx.b)
    return eax_12

uint32_t eax_17 = sub_449730(esi)
int32_t ebx_3 = esi[1]
*arg3 = eax_17
uint32_t ecx_16 = ebx_3 u>> 3
int32_t ebp_2 = ebx_3 & 7

if (ebp_2 == 0)
    arg4 = 0
else
    arg4 = zx.d(*(**esi + ecx_16 + 1))

char edx_10 = ((zx.d(*(**esi + ecx_16)) << 8 | arg4) s>> (8 - ebp_2.b)).b
esi[1] = ebx_3 + 8
uint32_t eax_24 = zx.d(edx_10)
*arg2 = eax_24

if (edx_10 == 0)
    *arg2 = sub_449780(esi)
    uint32_t eax_25
    eax_25.b = 1
    return eax_25

if (eax_24 == 0x80)
    *arg2 = sub_449780(esi) - 0x100
    int32_t eax_27
    eax_27.b = 1
    return eax_27

if (eax_24 s> 0x80)
    *arg2 = eax_24 - 0x100

eax_24.b = 1
return eax_24
