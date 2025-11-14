// 函数: sub_681150
// 地址: 0x681150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 u> 0x200)
    if (arg3 == 0x201)
        sub_681340(arg1)
        return 0
    
    if (arg3 == 0x202)
        int32_t eax_4
        eax_4.b = *(arg1 + 0x3c)
        *(arg1 + 0x3d) = eax_4.b
        *(arg1 + 0x3c) = 0
        return 0
    
    if (arg3 == 0x2a3)
        *(arg1 + 0x50) = 0
        return 0
else
    if (arg3 == 0x200)
        sub_6812d0(arg1, arg2)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_681224[4]:3)
            case &lookup_table_681238
                sub_681450(arg1, arg2)
                return 0
            case &lookup_table_681238[1]
                sub_6815b0(arg1)
                return 0
            case &lookup_table_681238[4]
                LPARAM var_c = arg5
                sub_681600(arg1, arg2, arg1)
                return 0
            case &lookup_table_681238[0xe]
                sub_681670(arg1, arg2)
                return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
