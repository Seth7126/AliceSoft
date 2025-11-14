// 函数: sub_630920
// 地址: 0x630920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg3 + 0x74)

if ((eax.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax.b & 6) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of place")

if (arg4 != 4)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "invalid")

void var_4
sub_62fc80(eax, &var_4, arg3, 4)
int32_t result
int32_t ecx_3
result, ecx_3 = sub_62fcc0(arg3, nullptr)

if (result != 0)
    return result

uint32_t eax_3 = sub_62fab0(ecx_3, &var_4)
sub_627e40(eax_3, arg3 + 0x2dc, arg3, eax_3)
return sub_627f60(arg3, arg2)
