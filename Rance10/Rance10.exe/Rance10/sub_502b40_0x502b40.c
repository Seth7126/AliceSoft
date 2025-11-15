// 函数: sub_502b40
// 地址: 0x502b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0)
    return sub_4c2a20(arg1 + 0x48, *(arg1 + 0xa8))

int32_t result = *(arg1 + 0x84)
int32_t* esi = *(arg1 + 0x80)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = (*(**(*esi + 0x74) + 0x1c))(0)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
