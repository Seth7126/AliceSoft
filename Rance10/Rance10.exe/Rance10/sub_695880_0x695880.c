// 函数: sub_695880
// 地址: 0x695880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(*arg1 + 0x40))() != 0)
    char eax_2
    int32_t ecx_1
    eax_2, ecx_1 = (*(*arg1 + 0x54))()
    
    if (eax_2 != 0)
        ecx_1.b = 0
        arg1[0x15].b = 0
        ecx_1.b = arg1[0x15].b
        BOOL hEvent = arg1[0x1c]
        
        if (hEvent != 0)
            SetEvent(hEvent)
        
        hEvent.b = 1
        return hEvent

return 0
