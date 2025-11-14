// 函数: sub_6309c0
// 地址: 0x6309c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3
var_4 = nullptr
char eax = (*(arg3 + 0x74)).b

if ((eax & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax & 6) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of place")

if (arg2 != 0 && (*(arg2 + 8) & 2) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "duplicate")

uint32_t eax_3 = 3

if (*(arg3 + 0x157) != 3)
    eax_3 = zx.d(*(arg3 + 0x15b))

if (arg4 != eax_3 || arg4 u> 4)
    sub_62a7c0(arg3, "invalid")
    return sub_62fcc0(arg3, arg4)

sub_62fc80(eax_3, &var_4, arg3, eax_3)
uint32_t eax_4 = sub_62fcc0(arg3, nullptr)

if (eax_4 == 0)
    if ((*(arg3 + 0x157) & 2) == 0)
        eax_4.b = var_4.b
        *(arg3 + 0x1ab) = eax_4.b
        *(arg3 + 0x1a8) = eax_4.b
        *(arg3 + 0x1a9) = eax_4.b
        *(arg3 + 0x1aa) = eax_4.b
        eax_4 = zx.d(var_4:1.b)
    else
        *(arg3 + 0x1a8) = var_4.b
        *(arg3 + 0x1a9) = var_4:1.b
        *(arg3 + 0x1aa) = var_4:2.b
        eax_4 = zx.d(var_4:3.b)
    
    *(arg3 + 0x1ac) = eax_4.b
    
    if (arg2 != 0 && arg3 != 0xfffffe58)
        int32_t eax_8 = *(arg3 + 0x1a8)
        *(arg2 + 8) |= 2
        *(arg2 + 0x94) = eax_8
        eax_8.b = *(arg3 + 0x1ac)
        *(arg2 + 0x98) = eax_8.b
        return eax_8

return eax_4
