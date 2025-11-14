// 函数: sub_431df0
// 地址: 0x431df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = GetWindowLongA(arg1, 0xffffffeb)
uint32_t Msg = arg2

if (Msg == 0x81)
    int32_t* lParam = arg4
    SetWindowLongA(arg1, 0xffffffeb, *lParam)
    return DefWindowProcA(arg1, 0x81, arg3, lParam)

if (eax != 0)
    int32_t eax_2 = *(eax + 0x80)
    
    if (eax_2 != 0 && Msg == eax_2)
        Msg = 0x20a
    label_431ff5:
        
        if (Msg - 0x112 u<= 0xf8)
            switch (Msg + &jump_table_43212c[0]:2)
                case &lookup_table_432240
                    return (*(*eax + 0x1c))(arg1, arg3, arg4)
                case &lookup_table_432240[1]
                    return (*(*eax + 0x68))(arg1, arg3, arg4)
                case &lookup_table_432240[2]
                    return (*(*eax + 0x4c))(arg1, arg3, arg4)
                case &lookup_table_432240[3]
                    return (*(*eax + 0x48))(arg1, arg3, arg4)
                case &lookup_table_432240[4]
                    return (*(*eax + 0xc))(arg1, arg3, arg4)
                case &lookup_table_432240[0xee]
                    return (*(*eax + 0x3c))(arg1, arg3, arg4)
                case &lookup_table_432240[0xef]
                    return (*(*eax + 0x28))(arg1, arg3, arg4)
                case &lookup_table_432240[0xf0]
                    return (*(*eax + 0x2c))(arg1, arg3, arg4)
                case &lookup_table_432240[0xf1]
                    return (*(*eax + 0x50))(arg1, arg3, arg4)
                case &lookup_table_432240[0xf2]
                    return (*(*eax + 0x30))(arg1, arg3, arg4)
                case &lookup_table_432240[0xf3]
                    return (*(*eax + 0x34))(arg1, arg3, arg4)
                case &lookup_table_432240[0xf8]
                    return (*(*eax + 0x44))(arg1, arg3, arg4)
    else if (Msg u<= 0x100)
        if (Msg == 0x100)
            return (*(*eax + 0x20))(arg1, arg3, arg4)
        
        if (Msg - 1 u<= 0x9f)
            switch (Msg + &jump_table_43212c[0xf]:3)
                case &lookup_table_43216c
                    return (*(*eax + 4))(arg1, arg3, arg4)
                case &lookup_table_43216c[1]
                    return (*(*eax + 0x70))(arg1, arg3, arg4)
                case &lookup_table_43216c[2]
                    return (*(*eax + 0x38))(arg1, arg3, arg4)
                case &lookup_table_43216c[4]
                    return (*(*eax + 0x5c))(arg1, arg3, arg4)
                case &lookup_table_43216c[5]
                    return (*(*eax + 0x10))(arg1, arg3, arg4)
                case &lookup_table_43216c[7]
                    return (*(*eax + 0x58))(arg1, arg3, arg4)
                case &lookup_table_43216c[0xe]
                    return (*(*eax + 8))(arg1, arg3, arg4)
                case &lookup_table_43216c[0xf]
                    return (*(*eax + 0x6c))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x23]
                    return (*(*eax + 0x18))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x2a]
                    return (*(*eax + 0x80))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x4d]
                    return (*(*eax + 0x54))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x7a]
                    return (*(*eax + 0x78))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x7d]
                    return (*(*eax + 0x64))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x83]
                    return (*(*eax + 0x14))(arg1, arg3, arg4)
                case &lookup_table_43216c[0x9f]
                    return (*(*eax + 0x40))(arg1, arg3, arg4)
    else if (Msg u<= 0x111)
        if (Msg == 0x111)
            return (*(*eax + 0x60))(arg1, arg3, arg4)
        
        if (Msg == 0x101)
            return (*(*eax + 0x24))(arg1, arg3, arg4)
    else if (Msg u<= 0x233)
        if (Msg == 0x233)
            return (*(*eax + 0x74))(arg1, arg3, arg4)
        
        goto label_431ff5
    
    if (Msg - 0x400 u<= 0x7bfe)
        return (*(*eax + 0x7c))(arg1, Msg, arg3, arg4)

return DefWindowProcA(arg1, Msg, arg3, arg4)
