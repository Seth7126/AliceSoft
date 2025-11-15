// 函数: sub_60b200
// 地址: 0x60b200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

int32_t edi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]

if (edi_6 s> 0)
    void* i = *(arg1 + 0x7c)
    void* ecx = arg1 + 0x7c
    
    for (int32_t ebp_1 = *(ecx + 4); i != ebp_1; i += 0x48)
        sub_60e560(i)
    
    *(ecx + 4) = *ecx
    sub_60bc40(ecx, edi_6)
    int32_t edi_7 = *(arg1 + 0x80)
    
    for (int32_t* i_1 = *(arg1 + 0x7c); i_1 != edi_7; i_1 = &i_1[0x12])
        sub_625de0(i_1, arg2)

uint32_t* eax_3
eax_3.b = 1
return eax_3
