// 函数: sub_633fb0
// 地址: 0x633fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0 || arg2 == 0)
    return 

uint32_t eax = zx.d(*(arg2 + 0x14))

if (eax.w == 0 || eax.w u> 0x100)
    return sub_62a550(arg3, "Invalid palette size, hIST allocation skipped") __tailcall

sub_6275c0(eax, arg2, arg3, 8, 0)
int32_t ebx_1 = sub_62aca0(arg3, 0x200)
*(arg2 + 0xcc) = ebx_1

if (ebx_1 == 0)
    return sub_62a550(arg3, "Insufficient memory for hIST chunk data") __tailcall

uint32_t edx_1 = zx.d(*(arg2 + 0x14))
int32_t ecx_4 = 0
*(arg2 + 0xe8) |= 8

if (edx_1 s> 0)
    do
        arg1.w = *(arg4 + (ecx_4 << 1))
        *(ebx_1 + (ecx_4 << 1)) = arg1.w
        ecx_4 += 1
    while (ecx_4 s< edx_1)

*(arg2 + 8) |= 0x40
