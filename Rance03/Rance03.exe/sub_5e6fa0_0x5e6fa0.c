// 函数: sub_5e6fa0
// 地址: 0x5e6fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x114)

if (ecx != 0)
    sub_46d780(ecx, arg2)

sub_5e84c0(arg1)

if ((**(arg1 + 0x34))() == 0)
    HWND hWnd = GetActiveWindow()
    uint32_t lpdwProcessId
    
    if (hWnd != 0)
        lpdwProcessId = 0xffffffff
        GetWindowThreadProcessId(hWnd, &lpdwProcessId)
    
    if (hWnd == 0 || lpdwProcessId != *(arg1 + 0x1c))
        void* eax_4 = data_75d4e4
        
        if (eax_4 != 0 && *(eax_4 + 8) != 0)
            *(eax_4 + 8) = 0
            void* eax_5 = *(eax_4 + 0x938)
            
            if (eax_5 != 0)
                void* ecx_3 = *(eax_5 + 0x14)
                *(eax_5 + 0x19) = 0
                
                if (ecx_3 != 0)
                    sub_474070(ecx_3, sub_474040, eax_5)

if ((**(arg1 + 0x1c8))() != 0 && GetForegroundWindow() == arg2)
    POINT point
    GetCursorPos(&point)
    ScreenToClient(arg2, &point)
    
    if (point.y != 0)
        *(arg1 + 0x20c) = 0
    else
        if (*(arg1 + 0x20c) == 0)
            *(arg1 + 0x20c) = 1
            *(arg1 + 0x210) = sub_5f4b80()
            return 0
        
        if (sub_5f4b80() - *(arg1 + 0x210) u>= *(arg1 + 0x214))
            HICON eax_12 = LoadIconA(*(arg1 + 0x10), 0x66)
            sub_5e1610(arg1 + 0x1d4, arg2, *(arg1 + 0x10), arg1, *(arg1 + 0x228), eax_12)

return 0
