// 函数: sub_44b2e0
// 地址: 0x44b2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = arg1 + 0xc

if (*(arg1 + 0x20) u>= 0x10)
    eax = *eax

int32_t* edi = sub_44bec0(*(arg1 + 8), eax)
int32_t* result

if (edi == 0)
    result.b = 0
    return result

int32_t* ecx_1 = *(arg1 + 0x24)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()

*(arg1 + 0x24) = edi
result.b = 1
return result
