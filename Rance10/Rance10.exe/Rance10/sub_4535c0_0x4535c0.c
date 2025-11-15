// 函数: sub_4535c0
// 地址: 0x4535c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = data_7fcb54
void** esi = sub_432330(ebx + 0x20, arg1)
void** result

if (esi != *(ebx + 0x20))
    result = sub_412ca0(arg1, &esi[4])

if (esi == *(ebx + 0x20) || result.b != 0)
    esi = *(ebx + 0x20)

if (esi == *(ebx + 0x20) || esi[0xb] != 3)
    result.b = 0
    return result

if (arg2 != &esi[0xe])
    sub_403590(arg2, &esi[0xe], 0, 0xffffffff)

result.b = 1
return result
