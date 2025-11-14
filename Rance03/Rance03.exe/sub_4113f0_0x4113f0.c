// 函数: sub_4113f0
// 地址: 0x4113f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_c = arg1

if (zx.d(arg3) - 0x9c43 u<= 0xc8)
    switch (arg3)
        case 0x9c43
            DestroyWindow(arg2)
        case 0x9c62
            sub_41d290(&arg1[0x11f])
        case 0x9c63
            if (sub_411760(&arg1[-2], arg2) != 0)
                MessageBoxA(arg2, 0x6da2a8, 0x6da29c, MB_OK)
                return 0
            
            sub_64b530(0x6da278)
        case 0x9c64
            sub_411d40(&arg1[-2], arg2)
        case 0x9c65
            sub_411d80(&arg1[-2], arg2)
        case 0x9c66
            if (data_75d4b4 != 0)
                (*(*arg1[0x10] + 0xc))()
            
            (*(*arg1 + 4))(arg2)
        case 0x9c67
            sub_411dc0(&arg1[-2], arg2)
        case 0x9c69
            sub_411e20(&arg1[-2], arg2)
        case 0x9c6b
            sub_411e80(&arg1[-2], arg2)
        case 0x9c6d
            sub_411ed0(&arg1[-2], arg2)
        case 0x9c6f
            sub_411f40(&arg1[-2], arg2)
        case 0x9c71
            sub_404b30(&arg1[0x1a])
        case 0x9c72
            sub_413950(&arg1[0xd2])
        case 0x9c73
            sub_413900(&arg1[0xd2])
            InvalidateRect(arg1[0xa6], nullptr, 0)
            UpdateWindow(arg1[0xa6])
        case 0x9c74
            sub_404ba0(&arg1[0x1a])
        case 0x9c77
            sub_404c20(&arg1[0x1a], 0x14)
        case 0x9c78
            sub_404c20(&arg1[0x1a], 0x10)
        case 0x9c79
            sub_404c20(&arg1[0x1a], 0xc)
        case 0x9c7c
            void* ecx_14 = arg1[0xee] * 0x6c + arg1[0xea]
            uint32_t eax_3
            eax_3.b = *(ecx_14 + 0x10) == 0
            *(ecx_14 + 0x10) = eax_3.b
            sub_4053a0(ecx_14)
            InvalidateRect(arg1[0xd5], nullptr, 1)
        case 0x9c7d
            sub_404ad0(&arg1[0x1a])
        case 0x9d0b
            sub_411be0(&arg1[-2])

return 0
