// 函数: sub_6adad0
// 地址: 0x6adad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0
char eax = (*(arg3 + 0x74)).b

if ((eax & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax & 6) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "out of place")

if (arg2 != 0 && (*(arg2 + 8) & 2) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "duplicate")

uint32_t ebp = 3

if (*(arg3 + 0x157) != 3)
    ebp = zx.d(*(arg3 + 0x15b))

if (arg4 != ebp || arg4 u> 4)
    sub_6a77d0(arg3, "invalid")
    return sub_6ace40(arg3, arg4)

int32_t eax_3 = *(arg3 + 0x5c)

if (eax_3 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_3(arg3, &var_8, ebp), &var_8, arg3, ebp)
uint32_t eax_5 = sub_6ace40(arg3, nullptr)

if (eax_5 == 0)
    if ((*(arg3 + 0x157) & 2) == 0)
        eax_5.b = var_8.b
        *(arg3 + 0x1ab) = eax_5.b
        *(arg3 + 0x1a8) = eax_5.b
        *(arg3 + 0x1a9) = eax_5.b
        *(arg3 + 0x1aa) = eax_5.b
        eax_5 = zx.d(var_8:1.b)
    else
        *(arg3 + 0x1a8) = var_8.b
        *(arg3 + 0x1a9) = var_8:1.b
        *(arg3 + 0x1aa) = var_8:2.b
        eax_5 = zx.d(var_8:3.b)
    
    *(arg3 + 0x1ac) = eax_5.b
    
    if (arg2 != 0 && arg3 != 0xfffffe58)
        int32_t eax_9 = *(arg3 + 0x1a8)
        *(arg2 + 8) |= 2
        *(arg2 + 0x94) = eax_9
        eax_9.b = *(arg3 + 0x1ac)
        *(arg2 + 0x98) = eax_9.b
        return eax_9

return eax_5
