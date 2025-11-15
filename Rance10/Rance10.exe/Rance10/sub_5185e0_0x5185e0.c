// 函数: sub_5185e0
// 地址: 0x5185e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x44)
sub_555e00(esi, 0x1b, 1)
void* esi_1 = *(*(esi + 0x80) + 0xc)
void* result

if (esi_1 == 0)
    result.b = 0
    return result

int32_t* ecx_1 = *(esi_1 + 0x11c)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(esi_1 + 0x11c) = 0

result.b = 1
return result
