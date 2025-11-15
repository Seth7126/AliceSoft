// 函数: sub_6549d0
// 地址: 0x6549d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1[0x6c]

if ((*(arg1[0x6b] + 8))(arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t i = 0

if (arg1[0x4c] s> 0)
    void* eax_6 = &arg1[0x4d]
    void* edi_1 = ebx + 0x28
    void* var_8_1 = eax_6
    
    do
        void* ecx = *eax_6
        
        if (*(arg1 + 0xc9) == 0)
        label_654a4c:
            _memset(*(ebx + (*(ecx + 0x14) << 2) + 0x3c), 0, 0x40)
            eax_6 = var_8_1
            *(edi_1 - 0x10) = 0
            *edi_1 = 0
        else if (arg1[0x5e] == 0 && arg1[0x60] == 0)
            goto label_654a4c
        
        if (*(arg1 + 0xc9) != 0)
            if (arg1[0x5e] != 0)
                _memset(*(ebx + (*(ecx + 0x18) << 2) + 0x7c), 0, 0x100)
                eax_6 = var_8_1
        else if (arg1[0x64] != 0)
            _memset(*(ebx + (*(ecx + 0x18) << 2) + 0x7c), 0, 0x100)
            eax_6 = var_8_1
        
        i += 1
        eax_6 += 4
        edi_1 += 4
        var_8_1 = eax_6
    while (i s< arg1[0x4c])

*(ebx + 0xc) = 0
*(ebx + 0x10) = 0
*(ebx + 0x14) = 0xfffffff0
int32_t result = arg1[0x3f]
*(ebx + 0x38) = result
return result
