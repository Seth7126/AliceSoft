// 函数: sub_697100
// 地址: 0x697100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = GetWindowLongA(arg1, 0xffffffeb)

switch (arg2)
    case 6
        return (*(*eax + 4))(arg1, arg3, arg4)
    case 0x10
        return (*(*eax + 0x14))(arg1, arg3, arg4)
    case 0x4e
        return (*(*eax + 0xc))(arg1, arg3, arg4)
    case 0x110
        SetWindowLongA(arg1, 0xffffffeb, arg4)
        return (**arg4)(arg1, arg3, arg4)
    case 0x111
        return (*(*eax + 8))(arg1, arg3, arg4)
    case 0x113
        return (*(*eax + 0x10))(arg1, arg3, arg4)

return 0
