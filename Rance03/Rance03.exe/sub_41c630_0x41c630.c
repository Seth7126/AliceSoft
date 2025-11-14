// 函数: sub_41c630
// 地址: 0x41c630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_71 = arg1[4]
uint32_t edx = arg3

if (eax_71 != 0 && edx == eax_71)
    edx = 0x20a
label_41c824:
    
    if (edx - 0x112 u<= 0xf8)
        switch (edx + &jump_table_41c964[1]:2)
            case &lookup_table_41ca7c
                return (*(*arg1 + 0x1c))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[1]
                return (*(*arg1 + 0x6c))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[2]
                return (*(*arg1 + 0x4c))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[3]
                return (*(*arg1 + 0x48))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[4]
                return (*(*arg1 + 0xc))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xee]
                return (*(*arg1 + 0x3c))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xef]
                return (*(*arg1 + 0x28))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xf0]
                return (*(*arg1 + 0x2c))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xf1]
                return (*(*arg1 + 0x50))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xf2]
                return (*(*arg1 + 0x30))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xf3]
                return (*(*arg1 + 0x34))(arg2, arg4, arg5)
            case &lookup_table_41ca7c[0xf8]
                return (*(*arg1 + 0x44))(arg2, arg4, arg5)
else if (edx u<= 0x100)
    if (edx == 0x100)
        return (*(*arg1 + 0x20))(arg2, arg4, arg5)
    
    if (edx - 1 u<= 0x9f)
        switch (edx + &jump_table_41c964[0x10]:3)
            case &lookup_table_41c9a8
                return (*(*arg1 + 4))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[1]
                return (*(*arg1 + 0x74))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[2]
                return (*(*arg1 + 0x38))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[4]
                return (*(*arg1 + 0x60))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[5]
                return (*(*arg1 + 0x10))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[6]
                return (*(*arg1 + 0x58))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[7]
                return (*(*arg1 + 0x5c))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0xe]
                return (*(*arg1 + 8))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0xf]
                return (*(*arg1 + 0x70))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x23]
                return (*(*arg1 + 0x18))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x2a]
                return (*(*arg1 + 0x84))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x4d]
                return (*(*arg1 + 0x54))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x7a]
                return (*(*arg1 + 0x7c))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x7d]
                return (*(*arg1 + 0x68))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x83]
                return (*(*arg1 + 0x14))(arg2, arg4, arg5)
            case &lookup_table_41c9a8[0x9f]
                return (*(*arg1 + 0x40))(arg2, arg4, arg5)
else if (edx u<= 0x111)
    if (edx == 0x111)
        return (*(*arg1 + 0x64))(arg2, arg4, arg5)
    
    if (edx == 0x101)
        return (*(*arg1 + 0x24))(arg2, arg4, arg5)
else if (edx u<= 0x233)
    if (edx == 0x233)
        return (*(*arg1 + 0x78))(arg2, arg4, arg5)
    
    goto label_41c824

if (edx - 0x400 u> 0x7bfe)
    return DefWindowProcA(arg2, edx, arg4, arg5) __tailcall

arg3 = edx
jump(*(*arg1 + 0x80))
