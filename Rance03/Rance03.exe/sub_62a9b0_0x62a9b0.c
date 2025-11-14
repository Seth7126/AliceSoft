// 函数: sub_62a9b0
// 地址: 0x62a9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg3

if (arg3 == 0 || arg2 == 0 || arg4 == 0 || arg5 == 0 || arg6 == 0 || arg7 == 0)
    return 0

int32_t ebp = *arg2
*arg4 = ebp
*arg5 = arg2[1]
uint32_t eax_2 = zx.d(arg2[6].b)
*arg6 = eax_2
uint32_t esi_2 = zx.d(*(arg2 + 0x19))
*arg7 = esi_2

if (arg9 != 0)
    *arg9 = zx.d(*(arg2 + 0x1a))

if (arg10 != 0)
    *arg10 = zx.d(*(arg2 + 0x1b))

if (arg8 != 0)
    *arg8 = zx.d(arg2[7].b)

uint32_t eax_8 = zx.d(arg2[7].b)
sub_629380(eax_8, ebp, arg3, arg2[1], eax_2, esi_2, eax_8, zx.d(*(arg2 + 0x1a)), 
    zx.d(*(arg2 + 0x1b)))
return 1
