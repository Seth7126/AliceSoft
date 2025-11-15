// 函数: sub_6390a0
// 地址: 0x6390a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t result

if (arg2 == 0x66)
    *(arg1 + 0x44) = 0xc
    result.b = 1
    return result

if (arg2 == 0x6e)
    *(arg1 + 0x44) = 0xa
    result.b = 1
    return result

if (arg2 == 0x72)
    *(arg1 + 0x44) = 0xd
    result.b = 1
    return result

if (arg2 == 0x74)
    *(arg1 + 0x44) = 9
    result.b = 1
    return result

if (arg2 != 0x76)
    result.b = 0
    return result

*(arg1 + 0x44) = 0xb
result.b = 1
return result
