// 函数: __hw_cw
// 地址: 0x6ad558
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0

if ((arg1.b & 0x10) != 0)
    result = 1

if ((arg1.b & 8) != 0)
    result |= 4

if ((arg1.b & 4) != 0)
    result |= 8

if ((arg1.b & 2) != 0)
    result |= 0x10

if ((arg1.b & 1) != 0)
    result |= 0x20

if ((arg1 & 0x80000) != 0)
    result |= 2

int32_t edx_1 = arg1 & 0x300

if (edx_1 != 0)
    if (edx_1 == 0x100)
        result |= 0x400
    else if (edx_1 == 0x200)
        result |= 0x800
    else if (edx_1 == 0x300)
        result |= 0xc00

int32_t edx_3 = arg1 & 0x30000

if (edx_3 == 0)
    result |= 0x300
else if (edx_3 == 0x10000)
    result |= 0x200

if ((arg1 & 0x40000) == 0)
    return result

return result | 0x1000
