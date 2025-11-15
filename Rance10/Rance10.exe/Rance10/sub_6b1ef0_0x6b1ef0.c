// 函数: sub_6b1ef0
// 地址: 0x6b1ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3

if (arg3 == 0 || arg2 == 0)
    return 

if (arg5 u> 0x100)
    if (*(arg2 + 0x19) != 3)
        return sub_6a7530(arg3, "Invalid palette length") __tailcall
    
    sub_6a7500(arg3, "Invalid palette length")
    noreturn

bool cond:0_1 = arg5 != 0

if (arg5 s> 0)
    if (arg4 == 0)
        sub_6a7500(arg3, "Invalid palette")
        noreturn
    
    cond:0_1 = arg5 != 0

if (not(cond:0_1) && (*(arg3 + 0x268) & 1) == 0)
    sub_6a7500(arg3, "Invalid palette")
    noreturn

sub_6a4450(arg1, arg2, arg3, 0x1000, 0)
arg1 = sub_6a7b10(arg3, 0x300)
*(arg3 + 0x144) = arg1

if (arg5 s> 0)
    sub_700660(arg1, arg4, arg5 * 3)

*(arg2 + 0xe8) |= 0x1000
*(arg2 + 8) |= 8
*(arg3 + 0x148) = arg5.w
*(arg2 + 0x14) = arg5.w
*(arg2 + 0x10) = arg1
