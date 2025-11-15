// 函数: sub_4788f0
// 地址: 0x4788f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[5] u>= 0x10)
    arg1 = *arg1

uint32_t result = GetFileAttributesA(arg1)

if (result != 0xffffffff)
    return (result u>> 4).b & 1

result.b = 0
return result
