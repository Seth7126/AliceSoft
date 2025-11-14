// 函数: sub_6344c0
// 地址: 0x6344c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_4 = arg3

if (arg3 == 0 || arg2 == 0)
    return 

if (arg5 u> 0x100)
    if (*(arg2 + 0x19) != 3)
        return sub_62a550(arg3, "Invalid palette length") __tailcall
    
    sub_62a520(arg3, "Invalid palette length")
    noreturn

bool cond:0_1 = arg5 != 0

if (arg5 s> 0)
    if (arg4 == 0)
        sub_62a520(arg3, "Invalid palette")
        noreturn
    
    cond:0_1 = arg5 != 0

if (not(cond:0_1) && (arg3[0x268] & 1) == 0)
    sub_62a520(arg3, "Invalid palette")
    noreturn

sub_6275c0(arg1, arg2, arg3, 0x1000, 0)
arg1 = sub_62aaf0(arg3, 0x300)
*(arg3 + 0x144) = arg1

if (arg5 s> 0)
    sub_69d850(arg1, arg4, arg5 * 3)

*(arg2 + 0xe8) |= 0x1000
*(arg2 + 8) |= 8
*(arg3 + 0x148) = arg5.w
*(arg2 + 0x14) = arg5.w
*(arg2 + 0x10) = arg1
