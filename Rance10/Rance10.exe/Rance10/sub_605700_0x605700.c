// 函数: sub_605700
// 地址: 0x605700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg3 + 0x30)

if (eax s>= 0 && eax s< *(arg2 + 0xc))
    *(arg2 + 0x14) = eax

int32_t eax_1 = *(arg3 + 0x34)

if (eax_1 == 0)
    eax_1.b = 1
    return eax_1

sub_42c9c0(arg1 + 0x34, eax_1)
int32_t* eax_2 = *(arg1 + 0x34)
int32_t ecx_1 = *(arg1 + 0x38)

while (eax_2 != ecx_1)
    int32_t* esi_1 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s< &esi_1[1])
        eax_2.b = 0
        return eax_2
    
    int32_t edx_1
    
    if (*(arg2 + 0xc) != 0)
        edx_1 = *(arg2 + 8)
    else
        edx_1 = 0
    
    *eax_2 = *(esi_1 + edx_1)
    eax_2 = &eax_2[1]
    *(arg2 + 0x14) += 4

eax_2.b = 1
return eax_2
