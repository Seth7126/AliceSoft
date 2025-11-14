// 函数: sub_5e67d0
// 地址: 0x5e67d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_c = arg1.b
int32_t ebx

if (arg3.w == 0 || arg3 u>> 0x10 != 0)
    ebx.b = 0
else
    ebx.b = 1

*(arg1 + 0x38) = ebx.b

if (ebx.b == 0)
    if (*(arg1 + 0x66) != 0 && (**(arg1 + 0x1c8))() != 0 && arg3.w == 0)
        if (arg4 == 0)
            sub_697c50(arg1 + 0x218)
            CloseWindow(arg2)
        else if (sub_5e86f0(arg4, arg2) == 0)
            sub_697c50(arg1 + 0x218)
            CloseWindow(arg2)
    
    if (*(arg1 + 0x1bc) s> 0)
        ReleaseCapture()
        *(arg1 + 0x1bc) = 0
else
    SetFocus(arg2)
    InvalidateRect(arg2, nullptr, 0)
    UpdateWindow(arg2)

void* ecx_3 = *(arg1 + 0x1a0)

if (ecx_3 != 0)
    sub_46cf00(*(ecx_3 + 4), ebx.b)

if (ebx.b != 0)
    void* eax_7 = data_75d4e4
    
    if (eax_7 != 0 && *(eax_7 + 8) != ebx.b)
        *(eax_7 + 8) = ebx.b
        void* eax_8 = *(eax_7 + 0x938)
        
        if (eax_8 != 0)
            void* ecx_5 = *(eax_8 + 0x14)
            *(eax_8 + 0x19) = ebx.b
            
            if (ecx_5 != 0)
                sub_474070(ecx_5, sub_474040, eax_8)

return 0
