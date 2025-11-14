// 函数: sub_68b2a0
// 地址: 0x68b2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (arg3 u<= 0x115)
    switch (arg3)
        case 1
            sub_68b4c0(arg1, arg2)
            return 0
        case 2
            sub_68b5e0(arg1)
            return 0
        case 5
            LPARAM var_14 = arg5
            sub_68b710(arg1, arg2, arg3)
            return 0
        case 0xf
            sub_68b630(arg1, arg2)
            return 0
        case 0x114
            sub_6891b0(arg1 + 0x268, arg4.w)
            sub_68c050(arg1)
            return 0
        case 0x115
            sub_6891b0(arg1 + 0x248, arg4.w)
            sub_68c050(arg1)
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_68b850(arg1, arg2)
            return 0
        case 0x201
            sub_68b7a0(arg1)
            return 0
        case 0x202
            uint32_t eax_7
            eax_7.b = *(arg1 + 0x224)
            *(arg1 + 0x225) = eax_7.b
            *(arg1 + 0x224) = 0
            return 0
        case 0x20a
            uint32_t var_14_3 = arg3
            WPARAM var_18_1 = arg4
            sub_68b900(arg1, arg3)
            return 0
        case 0x2a3
            *(arg1 + 0x238) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
