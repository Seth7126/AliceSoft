// 函数: sub_5516f0
// 地址: 0x5516f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0xc)
int32_t* esi = *(arg1 + 8)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_42ccf0(arg2, *esi)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
