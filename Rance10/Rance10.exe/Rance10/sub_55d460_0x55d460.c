// 函数: sub_55d460
// 地址: 0x55d460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0xf2) = 0
int32_t result = *(arg1 + 0xa0)
int32_t* esi = *(arg1 + 0x9c)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_55bc70(*esi)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
