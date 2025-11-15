// 函数: sub_49c5c0
// 地址: 0x49c5c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 u<= 0x111)
    uint32_t Msg
    WPARAM wParam
    LPARAM lParam
    
    if (arg3 == 0x111)
        lParam = arg5
        wParam = arg4
        Msg = 0x111
    label_49c690:
        PostMessageA(GetParent(arg2), Msg, wParam, lParam)
        PostMessageA(arg2, 0x7fff, 0, 0)
        return 0
    
    if (arg3 - 1 u<= 0x23)
        switch (arg3 + &jump_table_49c778[4]:3)
            case &lookup_table_49c78c
                sub_49c7b0(arg1, arg2)
                return 0
            case &lookup_table_49c78c[1]
                uint32_t uIDEvent = *(arg1 + 0x10)
                
                if (uIDEvent != 0)
                    KillTimer(*(arg1 + 0x14), uIDEvent)
                    *(arg1 + 0x10) = 0
                
                SetMenu(arg2, nullptr)
                *(arg1 + 0x28) = 1
                return 0
            case &lookup_table_49c78c[0xf]
                lParam = arg5
                wParam = arg4
                Msg = 0x10
                goto label_49c690
            case &lookup_table_49c78c[0x23]
                int32_t esi_1 = neg.d(*(arg1 + 0x30))
                int32_t eax_3 = GetSystemMetrics(SM_CXSCREEN)
                int32_t edx_1 = *(arg1 + 0x30)
                *(arg5 + 8) = eax_3
                *(arg5 + 0x10) = 0
                *(arg5 + 0x14) = esi_1
                *(arg5 + 0xc) = edx_1
                return 0
else
    if (arg3 == 0x216)
        *arg5 = 0
        *(arg5 + 4) = 0
        *(arg5 + 8) = GetSystemMetrics(SM_CXSCREEN)
        *(arg5 + 0xc) = *(arg1 + 0x30)
        return 1
    
    if (arg3 == 0x7fff)
        DestroyWindow(arg2)
        return 0
    
    if (arg3 == 0x116)
        EnableMenuItem(GetSystemMenu(arg2, 0), 0xf010, MF_GRAYED)
        return 0
    
    if (arg3 == 0x112)
        return sub_49c930(arg2, arg4, arg5)
    
    if (arg3 == 0x113)
        sub_49c9a0(arg1, arg2)
        return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
