// 函数: sub_4259a0
// 地址: 0x4259a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_42ccf0(arg2 + 0x38, arg2 + 0x2c)
void* ebx = *(arg2 + 0x2c)

if (ebx != *(arg2 + 0x34))
    *(arg2 + 0x2c) = ebx + 0x28
else
    ebx = arg2 + 4

if (*(ebx + 4) != 0xf)
    int32_t eax_9 = *(arg2 + 0x38)
    
    if (eax_9 != *(arg2 + 0x3c))
        *(arg2 + 0x2c) = *(eax_9 + ((*(arg2 + 0x3c) - eax_9) s>> 2 << 2) - 4)
        *(arg2 + 0x3c) -= 4
    
    sub_42ccf0(arg2 + 0x38, arg2 + 0x2c)
    ebx = *(arg2 + 0x2c)
    
    if (ebx != *(arg2 + 0x34))
        *(arg2 + 0x2c) = ebx + 0x28
    else
        ebx = arg2 + 4
    
    if (*(ebx + 4) != 0x10)
        int32_t eax_12 = *(arg2 + 0x38)
        
        if (eax_12 != *(arg2 + 0x3c))
            *(arg2 + 0x2c) = *(eax_12 + ((*(arg2 + 0x3c) - eax_12) s>> 2 << 2) - 4)
            *(arg2 + 0x3c) -= 4
        
        eax_12.b = 0
        return eax_12

void* var_c
sub_425bb0(arg1 + 8, sub_425e30(&var_c, ebx + 8))
void* ecx_3 = var_c
int32_t var_4

if (ecx_3 != 0)
    sub_403160(ecx_3, (var_4 - ecx_3) s>> 2, 4)
*(arg1 + 0x14) = *(ebx + 0x20)
*(arg1 + 0x18) = *(ebx + 0x24)
int32_t eax_8
eax_8.b = *(ebx + 4) == 0xf
*(arg1 + 0x1c) = eax_8.b
eax_8.b = 1
*(arg2 + 0x3c) -= 4
return eax_8
