// 函数: sub_552fa0
// 地址: 0x552fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
void* edx = arg2 + 0xc
int128_t* esi = &edi[3]

do
    int32_t eax = *(edx - 0x2c)
    edx -= 0x20
    edi -= 0x20
    esi = &esi[-2]
    *edi = eax
    *(esi - 8) = *(edx - 8)
    *esi = *edx
    esi[1].d = *(edx + 0x10)
while (edx - 0xc != arg3)

return edi
