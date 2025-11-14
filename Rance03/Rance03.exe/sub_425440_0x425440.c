// 函数: sub_425440
// 地址: 0x425440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(**(arg4 + 8) + 8))()

if (arg5 == eax_1)
    *arg3 = arg6
    *arg2 = 0xffffffff
    return 2

void* eax_4 = sub_425660(eax_1, arg2, arg3, arg4, arg5)

if (eax_4.b != 0)
    return 2

void* eax_6 = sub_425770(eax_4, arg2, arg3, arg4, arg5, arg6)

if (eax_6.b != 0)
    return 3

void* eax_8 = sub_4258e0(eax_6, arg2, arg3, arg4, arg5, arg6)

if (eax_8.b != 0)
    return 0xffffffff

if (sub_425500(eax_8, arg2, arg3, arg4, arg5, arg6) != 0)
    return 1

*arg3 = arg5
*arg2 = 0xffffffff
return 0
