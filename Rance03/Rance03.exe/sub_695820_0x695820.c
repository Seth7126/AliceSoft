// 函数: sub_695820
// 地址: 0x695820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0x201)
    arg1[0x1a].b = 1
    SetCapture(arg2)
    return 0

if (arg3 == 0x202)
    arg1[0x1a].b = 0
    *arg1[0x1b] = 1
    *arg1[0x1c] = 0
    ReleaseCapture()
    return 0

if (arg3 == 0x200)
    return (*(*arg1 + 8))(arg2, arg4, arg5)

if (arg3 == 5)
    LPARAM var_4_1 = arg5
    sub_6958c0(arg1, arg2, arg1)
    return 0

if (arg3 == 0xf)
    return (*(*arg1 + 0xc))(arg2, arg4, arg5)

return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
