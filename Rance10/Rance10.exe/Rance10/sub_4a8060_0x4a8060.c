// 函数: sub_4a8060
// 地址: 0x4a8060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = data_7fcb98

if (*(eax + 8) == 0)
    return 0

void** esi = sub_432330(eax + 0x64, arg1)
char eax_4

if (esi != *(eax + 0x64))
    eax_4 = sub_412ca0(arg1, &esi[4])

if (esi == *(eax + 0x64) || eax_4 != 0)
    esi = *(eax + 0x64)

if (esi == *(eax + 0x64) || esi[0xa] != arg2)
    return 0

int32_t result
result.b = esi[0xb] s>= arg3
return result
