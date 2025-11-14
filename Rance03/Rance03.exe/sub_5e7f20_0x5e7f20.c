// 函数: sub_5e7f20
// 地址: 0x5e7f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t wParam

if (*(arg1 + 0x20) == 0 && *(*(arg1 + 0x254) + 0x484) == 0)
    MSG msg
    
    if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) == 0)
    label_5e8008:
        sub_5e1d10(arg1 + 0x1d4)
        BOOL eax_4
        eax_4.b = 1
        return eax_4
    
    while (msg.message != 0x12)
        HACCEL hAccTable = *(arg1 + 0x224)
        int32_t eax_2
        
        if (hAccTable != 0)
            eax_2.b = TranslateAcceleratorA(**(arg1 + 0xc), hAccTable, &msg) == 1
        
        if (hAccTable == 0 || eax_2.b == 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        
        uint32_t message = msg.message
        bool cond:0_1
        
        if (message u<= 0x205)
            if (message u>= 0x204)
                goto label_5e8008
            
            if (message u<= 0x202)
                if (message u>= 0x201)
                    goto label_5e8008
                
                if (message u>= 0x100)
                    cond:0_1 = message u<= 0x101
                    goto label_5e7fe9
        else if (message u>= 0x207)
            cond:0_1 = message u<= 0x208
        label_5e7fe9:
            
            if (cond:0_1)
                goto label_5e8008
        
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) == 0)
            goto label_5e8008
    
    wParam = msg.wParam
    *(arg1 + 0x20) = 1
    *(arg1 + 0x24) = wParam

wParam.b = 0
return wParam
