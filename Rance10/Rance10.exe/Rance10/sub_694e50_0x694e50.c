// 函数: sub_694e50
// 地址: 0x694e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* esi = *(arg1 + 0xc)

if (*(esi + 0x38) != 0)
    int32_t eax
    eax.b = 0
    return eax

void* eax_1 = *(esi + 4)
var_4 = 1
int32_t* ecx_1 = *(eax_1 + 0x38)
(*(*ecx_1 + 0x17c))(ecx_1, &var_4, esi + 0x20)
int32_t* ecx_2 = *(*(esi + 4) + 0x38)
(*(*ecx_2 + 0xb0))(ecx_2, 1, esi + 8)
*(esi + 0x38) = 1
int32_t eax_5
eax_5.b = 1
return eax_5
