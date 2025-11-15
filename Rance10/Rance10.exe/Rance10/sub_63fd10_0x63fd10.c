// 函数: sub_63fd10
// 地址: 0x63fd10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t esi_1 = (arg2 + (arg4 << 1)) * *(arg1 + 0x34)
int32_t i_1 = (arg3 + (arg4 << 1)) * *(arg1 + 0x34)
arg3 = i_1

if (esi_1 s<= 0 || i_1 s<= 0)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t eax_3 = (*(*(arg1 + 4) + 0x10))()
int32_t eax_5

if (eax_3 s>= esi_1)
    eax_5 = (*(*(arg1 + 4) + 0x14))()

if (eax_3 s< esi_1 || eax_5 s< i_1)
    char eax_6 = sub_63faf0(arg1 + 4, esi_1, i_1)
    
    if (eax_6 == 0)
        return eax_6

int32_t ebx_1 = (*(*(arg1 + 4) + 8))(0, 0)
int32_t eax_10 = (*(*(arg1 + 4) + 0x1c))() - esi_1
arg2 = eax_10

if (i_1 s> 0)
    int32_t i
    
    do
        if (esi_1 s> 0)
            int32_t edi_2 = __builtin_memset(ebx_1, 0, esi_1 u>> 2 << 2)
            ebx_1 += esi_1
            __builtin_memset(edi_2, 0, esi_1 & 3)
            eax_10 = arg2
        
        ebx_1 += eax_10
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_1 = arg3

*(arg1 + 0x28) = esi_1
*(arg1 + 0x2c) = i_1
*(arg1 + 0x30) = arg4
void* eax_11
eax_11.b = 1
return eax_11
