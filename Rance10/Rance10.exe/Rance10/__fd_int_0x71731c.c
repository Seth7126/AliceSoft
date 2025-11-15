// 函数: __fd_int
// 地址: 0x71731c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t ecx_1 = zx.d(arg1[1])
uint32_t edx_2 = zx.d((ecx_1 u>> 7).b)
uint32_t var_8_1 = edx_2

if (edx_2.w == 0xff)
    if ((ecx_1.b & 0x7f) == 0 && *arg1 == 0)
        return 1
    
    return 2

if ((ecx_1 & 0xffff7fff) == 0 && *arg1 == 0)
    return 0

uint32_t eax_2 = zx.d(0x96 - edx_2.w - arg2)
int32_t edi
int32_t var_10_1 = edi
int32_t edi_1
edi_1.w = eax_2.w
uint32_t var_8_2 = eax_2
int32_t result

if (edi_1.w s<= 0)
    result = 0
else if (0x18 s> edi_1.w)
    edi_1.w s>>= 4
    int32_t ecx_3 = *((sx.d(edi_1.w) << 2) + &data_756534)
    uint32_t eax_5 = zx.d(arg1[ecx_3])
    uint32_t edx_4 = zx.d(*(((eax_2 & 0xf) << 1) + &data_756514)) & eax_5
    uint32_t var_8_3 = edx_4
    arg1[ecx_3] = eax_5.w ^ edx_4.w
    ecx_3.w = edx_4.w
    
    if (0 s< edi_1.w)
        ecx_3.w |= *arg1
        *arg1 = 0
    
    int32_t eax_7
    eax_7.b = ecx_3.w == 0
    result = eax_7 - 1
else
    *arg1 = 0
    result = 0xffffffff
    arg1[1] = ecx_1.w & 0x8000

return result
