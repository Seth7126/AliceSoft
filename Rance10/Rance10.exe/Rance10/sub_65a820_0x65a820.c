// 函数: sub_65a820
// 地址: 0x65a820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (arg1[0x4c] s<= 0)
    return 

void* eax = &arg1[0x4d]
void* var_8_1 = eax

do
    void* ecx = *eax
    
    if (*(ecx + 0x50) == 0)
        int32_t esi_1 = *(ecx + 0x10)
        
        if (esi_1 u> 3 || arg1[esi_1 + 0x24] == 0)
            *(*arg1 + 0x14) = 0x36
            *(*arg1 + 0x18) = esi_1
            (**arg1)(arg1)
        
        int32_t eax_7 = (*arg1[1])(arg1, 1, 0x82)
        int16_t* esi_3
        int16_t* edi_2
        edi_2, esi_3 = __builtin_memcpy(eax_7, arg1[esi_1 + 0x24], 0x80)
        *edi_2 = *esi_3
        *(ecx + 0x50) = eax_7
        eax = var_8_1
    
    i += 1
    eax += 4
    var_8_1 = eax
while (i s< arg1[0x4c])
