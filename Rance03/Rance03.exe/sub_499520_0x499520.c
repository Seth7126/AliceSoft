// 函数: sub_499520
// 地址: 0x499520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 != 0)
    return sub_47ea70(arg1 + 0x34, *(arg1 + 0x88))

int32_t result = *(arg1 + 0x60)
int32_t* esi = *(arg1 + 0x5c)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = (*(**(*esi + 0x5c) + 0x1c))(0)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
