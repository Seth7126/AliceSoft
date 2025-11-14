// 函数: sub_634940
// 地址: 0x634940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0 || arg2 == 0 || arg4 == 0 || (*(arg3 + 0x74) & 0x200) != 0)
    return 

arg1.b = *(arg4 + 2)

if (arg1.b == 0 || arg1.b u> 0xc)
    return sub_62a550(arg3, "Ignoring invalid time value") __tailcall

arg1.b = *(arg4 + 3)

if (arg1.b == 0 || arg1.b u> 0x1f || arg4[1].b u> 0x17 || *(arg4 + 5) u> 0x3b
        || *(arg4 + 6) u> 0x3c)
    return sub_62a550(arg3, "Ignoring invalid time value") __tailcall

int32_t eax = *arg4
*(arg2 + 8) |= 0x200
*(arg2 + 0x8c) = eax
*(arg2 + 0x90) = arg4[1]
