// 函数: sub_4db170
// 地址: 0x4db170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
int32_t result = *(arg1 + 0x24)
int32_t* esi = *(arg1 + 0x20)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_4d6e40(*esi, arg2)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
