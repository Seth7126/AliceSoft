// 函数: sub_5517e0
// 地址: 0x5517e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(*(arg1 + 8) + (*(arg1 + 0x40) << 2))
void* ecx = *esi
int32_t esi_1

if (ecx == 0)
    esi_1 = 0
else if (*(esi + 0x16) == 0)
    int32_t* ecx_1 = *(ecx + 0x118)
    
    if (ecx_1 != 0)
        esi_1 = (*(*ecx_1 + 0x14))()
    else
        esi_1 = 0
else
    esi_1 = esi[0xc]

int32_t* eax_3 = *(*(arg1 + 8) + (*(arg1 + 0x40) << 2))
void* ecx_3 = *eax_3
int32_t eax_4

if (ecx_3 == 0)
    eax_4 = 0
else if (*(eax_3 + 0x16) == 0)
    int32_t* ecx_4 = *(ecx_3 + 0x118)
    
    if (ecx_4 != 0)
        eax_4 = (*(*ecx_4 + 0x10))()
    else
        eax_4 = 0
else
    eax_4 = eax_3[0xb]

struct common::CRect::VTable* var_1c
sub_545fb0(&var_1c, eax_4, esi_1, arg1 + 0x44)
int32_t result
return result
