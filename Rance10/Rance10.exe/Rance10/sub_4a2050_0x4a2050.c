// 函数: sub_4a2050
// 地址: 0x4a2050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x24) == 0 && (*(**(arg1 + 0x2b4) + 0x10))() == 0)
    MSG msg
    
    if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
        BOOL i
        
        do
            if (msg.message == 0x12)
                *(arg1 + 0x18) = msg.wParam
                uint32_t eax_7
                eax_7.b = 0
                *(arg1 + 0x24) = 1
                return eax_7
            
            HACCEL hAccTable = *(arg1 + 0x248)
            int32_t eax_5
            
            if (hAccTable != 0)
                eax_5.b = TranslateAcceleratorA(**(arg1 + 0xc), hAccTable, &msg) == 1
            
            if (hAccTable == 0 || eax_5.b == 0)
                TranslateMessage(&msg)
                DispatchMessageA(&msg)
            
            uint32_t message = msg.message
            bool cond:0_1
            
            if (message u<= 0x205)
                if (message u>= 0x204)
                    break
                
                if (message u<= 0x202)
                    if (message u>= 0x201)
                        break
                    
                    if (message u>= 0x100)
                        cond:0_1 = message u<= 0x101
                        goto label_4a2119
            else if (message u>= 0x207)
                cond:0_1 = message u<= 0x208
            label_4a2119:
                
                if (cond:0_1)
                    break
            i = PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)
        while (i != 0)
    
    sub_49cb00(arg1 + 0x1f8)
    BOOL eax_6
    eax_6.b = 1
    return eax_6

return 0
