// 函数: sub_42c250
// 地址: 0x42c250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5243
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_a0
int32_t eax_2 = __security_cookie ^ &var_a0
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct TBBUTTON buttons
buttons.iBitmap = 0
buttons.idCommand = 0x9c8a
buttons.fsState = 4
buttons.fsStyle = 0
buttons.dwData = 0
buttons.iString = 0
int32_t var_38 = 1
int32_t var_34 = 0x9c8b
int16_t var_30 = 4
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_24 = 2
int32_t var_20 = 0x9c8c
int16_t var_1c = 4
int32_t var_18 = 0
int32_t var_14 = 0
HWND hWnd = CreateToolbarEx(arg2, 0x50000000, 0x9c90, 3, arg3, 0x9c90, &buttons, 3, 0x10, 0xf, 
    0x10, 0xf, 0x14)
*arg1 = hWnd

if (hWnd != 0)
    int32_t dwNewLong = GetWindowLongA(hWnd, 0xfffffff0) | 0x800
    SetWindowLongA(*arg1, 0xfffffff0, dwNewLong)
    InvalidateRect(*arg1, nullptr, 1)
    hWnd = CreateWindowExA(WS_EX_LEFT, "tooltips_class32", nullptr, WS_ACTIVECAPTION, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg2, nullptr, arg3, nullptr)
    arg1[1] = hWnd
    
    if (hWnd == 0)
        hWnd.b = 0
    else
        var_a0 = nullptr
        int32_t var_9c_1 = 0
        int32_t var_98_1 = 0
        int32_t var_4 = 0
        int32_t var_64
        sub_401f60(&var_64, 0x6dae14)
        var_4.b = 1
        sub_412d60(&var_a0, &var_64)
        var_4.b = 0
        int32_t var_50
        
        if (var_50 u>= 0x10)
            j__free(var_64)
        
        sub_401f60(&var_64, 0x6dae20)
        var_4.b = 2
        sub_412d60(&var_a0, &var_64)
        var_4.b = 0
        
        if (var_50 u>= 0x10)
            j__free(var_64)
        
        sub_401f60(&var_64, 0x6dade8)
        var_4.b = 3
        sub_412d60(&var_a0, &var_64)
        
        if (var_50 u>= 0x10)
            j__free(var_64)
        
        struct HWND__* eax_6 = *arg1
        var_48
        void* ebp_1 = &var_48
        HINSTANCE var_74_1 = arg3
        WPARAM wParam = 0
        void* esi_1 = var_a0
        int32_t lParam = 0x30
        struct HWND__* var_8c_1 = eax_6
        int32_t var_90_1 = 0x10
        
        do
            void lParam_1
            SendMessageA(*arg1, 0x41d, wParam, &lParam_1)
            int32_t var_88_1 = *ebp_1
            void* eax_8
            
            if (*(esi_1 + 0x14) u< 0x10)
                eax_8 = esi_1
            else
                eax_8 = *esi_1
            
            void* var_70_1 = eax_8
            SendMessageA(arg1[1], 0x404, 0, &lParam)
            wParam += 1
            ebp_1 += 0x14
            esi_1 += 0x18
        while (wParam s< 3)
        
        SendMessageA(*arg1, 0x424, arg1[1], 0)
        int32_t* esi_2 = var_a0
        
        if (esi_2 != 0)
            sub_4107c0(esi_2, var_9c_1)
            j__free(esi_2)
        
        hWnd.b = 1
else
    hWnd.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a0)
return hWnd
