// 函数: sub_667020
// 地址: 0x667020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (arg3 u<= 0x115)
    switch (arg3)
        case 1
            sub_6673e0(arg1, arg2)
            return 0
        case 2
            sub_6674f0(arg1)
            return 0
        case 5
            LPARAM var_14 = arg5
            sub_667620(arg1, arg2, arg3)
            return 0
        case 0xf
            sub_667540(arg1, arg2)
            return 0
        case 0x114
            sub_670690(arg1 + 0x184, zx.d(arg4.w))
            sub_667690(arg1)
            return 0
        case 0x115
            sub_670690(arg1 + 0x168, zx.d(arg4.w))
            sub_667690(arg1)
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_667290(arg1, arg2)
            return 0
        case 0x201
            sub_667340(arg1)
            return 0
        case 0x202
            uint32_t eax_11
            eax_11.b = *(arg1 + 0x150)
            *(arg1 + 0x151) = eax_11.b
            *(arg1 + 0x150) = 0
            return 0
        case 0x2a3
            *(arg1 + 0x164) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
