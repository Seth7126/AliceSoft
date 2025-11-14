// 函数: sub_42dd60
// 地址: 0x42dd60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg3 = (*(**(arg1 + 8) + 0x28))(arg2)
uint32_t result

if ((*(**(arg1 + 8) + 0x24))(arg2) == 0)
    switch (*arg3 - 0xe)
        case 0, 8
            *arg3 = 0xa
        case 1, 9
            *arg3 = 0xb
            result.b = 1
            return result
        case 2, 0xa
            *arg3 = 0xc
            result.b = 1
            return result
        case 3, 0xb
            *arg3 = 0xd
            result.b = 1
            return result
        case 0x10, 0x12
            *arg3 = 0x1b
            result.b = 1
            return result
        case 0x24, 0x26
            *arg3 = 0x2f
            result.b = 1
            return result
        default
            result.b = 0
            return result

result.b = 1
return result
