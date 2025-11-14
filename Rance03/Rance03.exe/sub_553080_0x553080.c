// 函数: sub_553080
// 地址: 0x553080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == arg2)
    return arg4

int32_t* esi = arg4
void* edx = arg2 + 0xc

do
    int32_t eax = *(edx - 0x20)
    edx -= 0x14
    esi -= 0x14
    *esi = eax
    esi[1] = *(edx - 8)
    esi[3] = *edx
    esi[4] = *(edx + 4)
while (edx - 0xc != arg3)

return esi
