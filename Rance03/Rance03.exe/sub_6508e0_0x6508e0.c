// 函数: sub_6508e0
// 地址: 0x6508e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 u<= 0x114)
    switch (arg3)
        case 2
            return (*(*arg1 + 0x38))(arg2, arg4, arg5)
        case 5
            return (*(*arg1 + 0x10))(arg2, arg4, arg5)
        case 0xf
            return (*(*arg1 + 0xc))(arg2, arg4, arg5)
        case 0x100
            return (*(*arg1 + 0x28))(arg2, arg4, arg5)
        case 0x111
            return (*(*arg1 + 0x30))(arg2, arg4, arg5)
        case 0x114
            return (*(*arg1 + 0x18))(arg2, arg4, arg5)
else if (arg3 - 0x115 u<= 0xf5)
    switch (arg3)
        case 0x115
            return (*(*arg1 + 0x14))(arg2, arg4, arg5)
        case 0x200
            return (*(*arg1 + 0x24))(arg2, arg4, arg5)
        case 0x201
            return (*(*arg1 + 0x1c))(arg2, arg4, arg5)
        case 0x202
            return (*(*arg1 + 0x20))(arg2, arg4, arg5)
        case 0x205
            return (*(*arg1 + 0x2c))(arg2, arg4, arg5)
        case 0x20a
            return (*(*arg1 + 0x34))(arg2, arg4, arg5)

return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
