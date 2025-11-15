// 函数: sub_548dd0
// 地址: 0x548dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0xc)
int32_t edi

if (ecx == 0)
    edi = 0
else if (*(arg1 + 0x22) == 0)
    int32_t* ecx_1 = *(ecx + 0x118)
    
    if (ecx_1 != 0)
        edi = (*(*ecx_1 + 0x14))()
    else
        edi = 0
else
    edi = *(arg1 + 0x3c)

void* ecx_2 = *(arg1 + 0xc)
int32_t eax_3

if (ecx_2 == 0)
    eax_3 = 0
else if (*(arg1 + 0x22) == 0)
    int32_t* ecx_3 = *(ecx_2 + 0x118)
    
    if (ecx_3 != 0)
        eax_3 = (*(*ecx_3 + 0x10))()
    else
        eax_3 = 0
else
    eax_3 = *(arg1 + 0x38)

struct common::CRect::VTable* var_1c
sub_545fb0(&var_1c, eax_3, edi, arg1 + 0x88)
int32_t result
return result
