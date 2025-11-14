// 函数: sub_6570a0
// 地址: 0x6570a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg1

if (arg3 u<= 0x115)
    switch (arg3)
        case 1
            sub_657460(arg1, arg2)
            return 0
        case 2
            sub_657650(arg1)
            return 0
        case 5
            LPARAM var_14 = arg5
            sub_657780(arg1, arg2, arg3)
            return 0
        case 0xf
            sub_6576a0(arg1, arg2)
            return 0
        case 0x114
            sub_670690(arg1 + 0x304, zx.d(arg4.w))
            sub_6577f0(arg1)
            return 0
        case 0x115
            sub_670690(arg1 + 0x2e8, zx.d(arg4.w))
            sub_6577f0(arg1)
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_657310(arg1, arg2)
            return 0
        case 0x201
            sub_6573c0(arg1)
            return 0
        case 0x202
            uint32_t eax_11
            eax_11.b = *(arg1 + 0x2d0)
            *(arg1 + 0x2d1) = eax_11.b
            *(arg1 + 0x2d0) = 0
            return 0
        case 0x2a3
            *(arg1 + 0x2e4) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
