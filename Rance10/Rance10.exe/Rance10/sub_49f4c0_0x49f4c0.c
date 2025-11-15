// 函数: sub_49f4c0
// 地址: 0x49f4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
int32_t ebx

if (arg3.w == 0 || arg3 u>> 0x10 != 0)
    ebx.b = 0
else
    ebx.b = 1

var_c.b = ebx.b
*(arg1 + 0x3c) = ebx.b

if (ebx.b == 0)
    if (*(arg1 + 0x86) != 0 && (*(*(arg1 + 4) + 0x74))() != 0 && arg3.w == 0
            && sub_4a2f20(arg4, arg2) == 0)
        sub_6cdc20(arg1 + 0x240)
        CloseWindow(arg2)
    
    if (*(arg1 + 0x1f0) s> 0)
        ReleaseCapture()
        *(arg1 + 0x1f0) = 0
else
    SetFocus(arg2)
    InvalidateRect(arg2, nullptr, 0)
    UpdateWindow(arg2)

void* ecx_2 = *(arg1 + 0x1d4)

if (ecx_2 != 0)
    void* var_1c_5 = var_c
    sub_47dc80(ecx_2)

if (ebx.b != 0)
    void* eax_7 = data_7fcb6c
    
    if (eax_7 != 0 && *(eax_7 + 8) != ebx.b)
        *(eax_7 + 8) = ebx.b
        void* eax_8 = *(eax_7 + 0x930)
        
        if (eax_8 != 0)
            void* ecx_3 = *(eax_8 + 0x14)
            *(eax_8 + 0x19) = ebx.b
            
            if (ecx_3 != 0)
                sub_4865e0(ecx_3, sub_486590, eax_8)

return 0
