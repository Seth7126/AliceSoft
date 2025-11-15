// 函数: sub_6f782f
// 地址: 0x6f782f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t edi_2 = arg2 u>> 5 << 2
int32_t edx = 1 << (arg2.b & 0x1f)
int32_t result
result.b = (*(edi_2 + *(arg1 + 0x58)) & edx) != 0

if (result.b != 0)
    int32_t* ecx_3 = *(arg1 + 0x58) + edi_2
    *ecx_3 &= not.d(edx)

return result
