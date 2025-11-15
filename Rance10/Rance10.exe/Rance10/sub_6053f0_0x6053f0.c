// 函数: sub_6053f0
// 地址: 0x6053f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg3 + 0x18)

if (eax s>= 0 && eax s< *(arg2 + 0xc))
    *(arg2 + 0x14) = eax

if (*(arg3 + 0x18) == 0)
    eax.b = 1
    return eax

sub_6061c0(arg1 + 0x10, *(arg3 + 0x1c))
int32_t* i = *(arg1 + 0x10)
void* eax_1

for (int32_t edi_1 = *(arg1 + 0x14); i != edi_1; i = &i[8])
    eax_1 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s< eax_1 + 4)
        eax_1.b = 0
        return eax_1
    
    int32_t edx
    
    if (*(arg2 + 0xc) != 0)
        edx = *(arg2 + 8)
    else
        edx = 0
    
    int32_t eax_2 = *(eax_1 + edx)
    *(arg2 + 0x14) = eax_1 + 4
    *i = eax_2
    int32_t* ecx_2 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s< &ecx_2[1])
        eax_1.b = 0
        return eax_1
    
    int32_t eax_3
    
    if (*(arg2 + 0xc) != 0)
        eax_3 = *(arg2 + 8)
    else
        eax_3 = 0
    
    i[1] = *(ecx_2 + eax_3)
    *(arg2 + 0x14) += 4
    
    if (sub_622cd0(arg2, &i[2]).b == 0)
        eax_1.b = 0
        return eax_1

eax_1.b = 1
return eax_1
