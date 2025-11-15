// 函数: sub_42ce60
// 地址: 0x42ce60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg2 + 0x2c)

if (esi != *(arg2 + 0x34))
    *(arg2 + 0x2c) = esi + 0x28
else
    esi = arg2 + 4

int32_t eax_2 = *(esi + 4)

if (eax_2 != 4)
    eax_2.b = eax_2 == 0x12
    *(arg1 + 4) = eax_2.b
    
    if (eax_2.b != 0)
        esi = *(arg2 + 0x2c)
        
        if (esi != *(arg2 + 0x34))
            *(arg2 + 0x2c) = esi + 0x28
        else
            esi = arg2 + 4
    
    int32_t eax_4 = *(esi + 4)
    
    if (eax_4 != 2 && eax_4 != 3 && eax_4 != 1)
        eax_4.b = 0
        return eax_4

void* var_c
sub_425bb0(arg1 + 8, sub_425e30(&var_c, esi + 8))
void* ecx_2 = var_c
int32_t var_4

if (ecx_2 != 0)
    sub_403160(ecx_2, (var_4 - ecx_2) s>> 2, 4)
*(arg1 + 0x14) = sub_42cf20(*(esi + 4), esi + 8)
void* eax_9
eax_9.b = 1
return eax_9
