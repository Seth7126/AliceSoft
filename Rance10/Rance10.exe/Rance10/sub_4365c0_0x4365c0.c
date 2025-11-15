// 函数: sub_4365c0
// 地址: 0x4365c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = *arg1
int32_t edi = arg1[1]
int32_t ebp = *ebx
uint32_t edx_1 = (edi + 8) u>> 3
uint32_t esi_1 = zx.d(*((edi u>> 3) + ebp)) << 0x18

if (edx_1 + 1 u< ebx[1] - ebp)
    return (esi_1 | (zx.d(*(edx_1 + ebp)) << 8 | zx.d(*(edx_1 + ebp + 1))) << 8) << (edi.b & 7)

if (edx_1 u< ebx[1] - ebp)
    esi_1 |= zx.d(*(edx_1 + ebp)) << 0x10

return esi_1 << (edi.b & 7)
