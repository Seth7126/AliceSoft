// 函数: sub_689dd0
// 地址: 0x689dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* esi = *(arg1 + 8)
int32_t* edx = *(esi + 0x38)

if (edx != 0)
    int32_t ecx_1 = arg2
    
    if (ecx_1 s>= 0 && ecx_1 u< (*(esi + 0x54) - *(esi + 0x50)) s>> 2)
        int32_t edi = ecx_1 << 2
        
        if (*(edi + *(esi + 0x50)) != 0)
            arg2 = 0
            (*(*edx + 0x20))(edx, ecx_1, 1, &arg2)
            *(edi + *(esi + 0x50)) = 0
        
        int32_t eax_3
        eax_3.b = 1
        return eax_3

int32_t eax
eax.b = 0
return eax
