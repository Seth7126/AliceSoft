// 函数: sub_652d40
// 地址: 0x652d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (arg3 u<= 0x114)
    if (arg3 == 0x114)
        sub_670690(arg1 + 0xf8, zx.d(arg4.w))
        sub_653230(arg1)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_652ec4[4]:3)
            case &lookup_table_652ed8
                *(arg1 + 0xe0) = arg2
                *(arg1 + 0xfc) = arg2
                *(arg1 + 0x9c) = *(arg1 + 0x2c)
                *(arg1 + 0x78) = *(arg1 + 0x30)
                sub_697f40(arg1 + 0x70)
                *(arg1 + 0xb8) = 0xffffff
                return 0
            case &lookup_table_652ed8[1]
                sub_653100(arg1)
                return 0
            case &lookup_table_652ed8[4]
                LPARAM var_14 = arg5
                sub_6531d0(arg1, arg2, arg3)
                return 0
            case &lookup_table_652ed8[0xe]
                sub_653140(arg1, arg2)
                return 0
else if (arg3 - 0x115 u<= 0xed)
    switch (arg3)
        case 0x115
            sub_670690(arg1 + 0xdc, zx.d(arg4.w))
            sub_653230(arg1)
            return 0
        case 0x200
            sub_653050(arg1, arg2)
            return 0
        case 0x201
            **(arg1 + 0x34) = arg1
            void** eax_11
            eax_11.b = *(arg1 + 0xc4)
            *(arg1 + 0xc5) = eax_11.b
            *(arg1 + 0xc4) = 1
            *(arg1 + 0xa8) = *(arg1 + 0xcc)
            return 0
        case 0x202
            uint32_t eax_10
            eax_10.b = *(arg1 + 0xc4)
            *(arg1 + 0xc5) = eax_10.b
            *(arg1 + 0xc4) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
