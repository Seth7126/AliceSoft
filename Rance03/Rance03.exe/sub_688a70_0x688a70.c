// 函数: sub_688a70
// 地址: 0x688a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (arg3 u<= 0x114)
    if (arg3 == 0x114)
        sub_6891b0(arg1 + 0x50, arg4.w)
        sub_688e10(arg1)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_688b88[4]:3)
            case &lookup_table_688b9c
                sub_688bb0(arg1, arg2)
                return 0
            case &lookup_table_688b9c[1]
                sub_653100(arg1)
                return 0
            case &lookup_table_688b9c[4]
                LPARAM var_14 = arg5
                sub_688ca0(arg1, arg2, arg1)
                return 0
            case &lookup_table_688b9c[0xe]
                sub_688c10(arg1, arg2)
                return 0
else
    if (arg3 == 0x20a)
        void* var_14_3 = arg1
        WPARAM var_18_1 = arg4
        sub_688db0(arg1, arg1)
        return 0
    
    if (arg3 == 0x115)
        sub_6891b0(arg1 + 0x70, arg4.w)
        sub_688e10(arg1)
        return 0
    
    if (arg3 == 0x200)
        sub_688d10(arg1, arg2)
        return 0
    
    if (arg3 == 0x2a3)
        *(arg1 + 0x4c) = 0
        return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
