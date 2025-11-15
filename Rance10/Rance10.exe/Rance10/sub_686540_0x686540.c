// 函数: sub_686540
// 地址: 0x686540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x2c8)
int32_t* ecx = *(arg1 + 0x2c4)

if (ecx != eax)
    while (*ecx != arg2)
        ecx = &ecx[1]
        
        if (ecx == eax)
            break
    
    if (ecx != eax)
        eax.b = 0
        return eax

sub_42ccf0(arg1 + 0x2c4, &arg2)
void* eax_1
eax_1.b = 1
return eax_1
