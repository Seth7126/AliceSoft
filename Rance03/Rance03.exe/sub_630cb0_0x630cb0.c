// 函数: sub_630cb0
// 地址: 0x630cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg3 + 0x74)

if ((eax.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax.b & 6) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of place")

if (arg4 != 1)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "invalid")

char var_1
sub_62fc80(eax, &var_1, arg3, 1)
uint32_t result = sub_62fcc0(arg3, nullptr)

if (result == 0)
    result = zx.d(*(arg3 + 0x326))
    
    if ((result & 0x8000) == 0)
        if ((result.b & 4) == 0)
            uint32_t eax_5 = zx.d(var_1)
            sub_6289d0(eax_5, arg3 + 0x2dc, arg3, eax_5)
            return sub_627f60(arg3, arg2)
        
        *(arg3 + 0x326) = result.w | 0x8000
        sub_627f60(arg3, arg2)
        return sub_62a7c0(arg3, "too many profiles")

return result
