// 函数: sub_49e330
// 地址: 0x49e330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(arg1 + 0x64)
int32_t* esi = *(arg1 + 0x60)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = (*(**(*esi + 0x5c) + 0x48))(arg2)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
