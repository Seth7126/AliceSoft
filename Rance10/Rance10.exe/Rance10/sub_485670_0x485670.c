// 函数: sub_485670
// 地址: 0x485670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg3

if (arg2 u<= 0x3f)
    *(arg1 + arg2 * 0x24 + 0xc) = edx.b

int32_t result = *(arg1 + 0x90c)
int32_t edi = 0
int32_t* esi = *(arg1 + 0x908)
uint32_t ebp_3 = (result - esi + 3) u>> 2

if (esi u> result)
    ebp_3 = 0

if (ebp_3 != 0)
    do
        result = (*(**esi + 4))(arg2, edx)
        edx = arg3
        esi = &esi[1]
        edi += 1
    while (edi != ebp_3)

return result
