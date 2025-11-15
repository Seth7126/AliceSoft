// 函数: sub_49ff10
// 地址: 0x49ff10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x148)

if (ecx != 0)
    sub_47e280(ecx, arg2)

sub_4a2cf0(arg1)

if ((*(*(arg1 + 4) + 0x40))() == 0)
    void* eax_3 = data_7fcb6c
    
    if (eax_3 != 0 && *(eax_3 + 8) != 0)
        *(eax_3 + 8) = 0
        void* eax_4 = *(eax_3 + 0x930)
        
        if (eax_4 != 0)
            void* ecx_3 = *(eax_4 + 0x14)
            *(eax_4 + 0x19) = 0
            
            if (ecx_3 != 0)
                sub_4865e0(ecx_3, sub_486590, eax_4)

if ((*(*(arg1 + 4) + 0x74))() != 0 && GetForegroundWindow() == arg2)
    POINT point
    GetCursorPos(&point)
    ScreenToClient(arg2, &point)
    
    if (point.y != 0)
        *(arg1 + 0x234) = 0
    else
        if (*(arg1 + 0x234) == 0)
            *(arg1 + 0x234) = 1
            *(arg1 + 0x238) = sub_406a00()
            return 0
        
        if (sub_406a00() - *(arg1 + 0x238) u>= *(arg1 + 0x23c))
            HICON eax_11 = LoadIconA(*(arg1 + 0x14), 0x65)
            sub_49c350(arg1 + 0x1fc, arg2, *(arg1 + 0x14), arg1, *(arg1 + 0x250), eax_11)

return 0
