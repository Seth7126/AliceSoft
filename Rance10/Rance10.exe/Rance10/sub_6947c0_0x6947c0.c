// 函数: sub_6947c0
// 地址: 0x6947c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (*(arg1 + 0xc) == 0)
    eax.b = 0
    return eax

if (*(arg1 + 0x2c) s<= 0)
    eax.b = 1
    return eax

void* esi = *(arg1 + 8)
int32_t* ecx = *(esi + 0x38)

if (ecx == 0)
    eax.b = 0
    return eax

if (*(esi + 0x5c) != 4)
    (*(*ecx + 0x60))(ecx, 4)
    *(esi + 0x5c) = 4

int32_t* ecx_1 = *(*(arg1 + 8) + 0x38)
(*(*ecx_1 + 0x50))(ecx_1, arg3 * 3, arg4, arg2, 0, 0)
int32_t eax_5
eax_5.b = 1
return eax_5
