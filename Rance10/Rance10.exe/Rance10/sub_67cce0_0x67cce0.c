// 函数: sub_67cce0
// 地址: 0x67cce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 u<= 0x100)
    if (arg3 == 0x100)
        uint32_t var_8_3 = arg3
        sub_67d1b0(arg1, arg2, arg4)
        return 0
    
    if (arg3 - 1 u<= 0xe)
        switch (arg3 + &jump_table_67ce1c[4]:3)
            case &lookup_table_67ce30
                return sub_67cf50(arg1, arg2)
            case &lookup_table_67ce30[1]
                sub_67d870(arg1, arg2)
                HGDIOBJ ho = *(arg1 + 0x6c)
                
                if (ho != 0)
                    DeleteObject(ho)
                    *(arg1 + 0x6c) = 0
                
                (*(*(arg1 + 0x34) + 4))()
                return 0
            case &lookup_table_67ce30[4]
                LPARAM var_8 = arg5
                sub_67d0f0(arg1, arg2, arg3)
                return 0
            case &lookup_table_67ce30[0xe]
                sub_67cfe0(arg1, arg2)
                return 0
else if (arg3 - 0x111 u<= 0xf9)
    switch (arg3)
        case 0x111
            uint32_t var_8_8 = arg3
            sub_67d340(arg2, arg4)
            return 0
        case 0x114
            sub_67e210(arg2, zx.d(arg4.w))
        label_67cdc1:
            InvalidateRect(**(arg1 + 0x14), nullptr, 1)
            UpdateWindow(**(arg1 + 0x14))
            return 0
        case 0x115
            sub_67e390(arg2, zx.d(arg4.w))
            goto label_67cdc1
        case 0x20a
            uint32_t var_8_7 = arg3
            sub_67d150(arg1, arg2, arg4)
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5) __tailcall
