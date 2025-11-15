// 函数: sub_689d30
// 地址: 0x689d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (*(arg1 + 0x48) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t ebx = *(arg1 + 0x50)
void* edi = *(arg1 + 8)
var_4 = *(arg1 + 0x4c)
int32_t* ecx_1 = *(edi + 0x38)
void* eax_1

if (ecx_1 != 0)
    (*(*ecx_1 + 0x84))(ecx_1, 1, &var_4, ebx)
    *(edi + 0x48) = var_4
    *(edi + 0x4c) = ebx
    eax_1 = (*(**(arg1 + 0x54) + 0xc))()
    
    if (eax_1.b != 0)
        int32_t* ecx_3 = *(arg1 + 0x50)
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 8))(ecx_3)
            *(arg1 + 0x50) = 0
        
        int32_t* ecx_4 = *(arg1 + 0x4c)
        
        if (ecx_4 != 0)
            (*(*ecx_4 + 8))(ecx_4)
            *(arg1 + 0x4c) = 0
        
        if (*(arg1 + 0x40) != 0)
            eax_1 = sub_68a230(arg1, *(arg1 + 8) + 0x2c)
        
        if (*(arg1 + 0x40) == 0 || eax_1.b != 0)
            *(arg1 + 0x48) = 0
            eax_1.b = 1
            return eax_1

eax_1.b = 0
return eax_1
