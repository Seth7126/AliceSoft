// 函数: sub_694700
// 地址: 0x694700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (*(arg1 + 0xc) == 0)
    eax.b = 0
    return eax

if (*(arg1 + 0x2c) s<= 0)
    eax.b = 1
    return eax

void* edi = *(arg1 + 8)
int32_t* ecx = *(edi + 0x38)

if (ecx == 0)
    eax.b = 0
    return eax

if (*(edi + 0x5c) != 5)
    (*(*ecx + 0x60))(ecx, 5)
    *(edi + 0x5c) = 5

int32_t* eax_3 = *(*(arg1 + 8) + 0x38)
(*(*eax_3 + 0x34))(eax_3, *(arg1 + 0x2c), 0)
int32_t eax_4
eax_4.b = 1
return eax_4
