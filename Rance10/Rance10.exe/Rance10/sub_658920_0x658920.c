// 函数: sub_658920
// 地址: 0x658920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg1
void* ebp = *(ebx + 0x1b0)

if (*(ebx + 0xfc) != 0 && *(ebp + 0x2c) == 0)
    char eax_1 = sub_658400(ebx)
    
    if (eax_1 == 0)
        return eax_1

int32_t* eax_2 = *(ebx + 0x18)
int32_t edx = *(ebp + 0xc)
int32_t esi = *(ebp + 0x10)
int32_t ecx_2 = *eax_2
int32_t eax_3 = eax_2[1]
int32_t i = 0
int32_t var_14 = ecx_2
int32_t eax_4 = 1 << (*(ebx + 0x184)).b
int32_t var_4 = ebx
arg1 = eax_4
int32_t ecx_7
int32_t edi

if (*(ebx + 0x14c) s<= 0)
    ecx_7 = ecx_2
    edi = eax_3
else
    do
        if (esi s< 1)
            if (sub_6581f0(eax_4, edx, &var_14, esi, 1) == 0)
                return 0
            
            int32_t var_c
            edx = var_c
            int32_t var_8
            esi = var_8
        
        esi -= 1
        eax_4 = edx s>> esi.b
        
        if ((eax_4.b & 1) != 0)
            eax_4 = *(arg2 + (i << 2))
            *eax_4 |= arg1.w
        
        i += 1
    while (i s< *(ebx + 0x14c))
    
    edi = eax_3
    ecx_7 = var_14

**(ebx + 0x18) = ecx_7
*(*(ebx + 0x18) + 4) = edi
void* eax_9
eax_9.b = 1
*(ebp + 0x2c) -= 1
*(ebp + 0x10) = esi
*(ebp + 0xc) = edx
return eax_9
