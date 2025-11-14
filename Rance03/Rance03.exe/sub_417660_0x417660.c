// 函数: sub_417660
// 地址: 0x417660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b4136
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_b4 = arg2

if (GetActiveWindow() == arg2)
    SetFocus(arg2)

SetCursor(*(arg1 + 0x78))
int32_t* eax_6 = sub_417820(arg1, zx.d(arg3.w), arg3 u>> 0x10)

if (eax_6 != 0)
    int32_t eax_8 = (**eax_6)(eax_4)
    
    if (eax_8 u> 3)
        *(*(arg1 + 0x74) + 0x7c) = 0
    else
        switch (eax_8)
            case 0
                *(*(arg1 + 0x74) + 0x7c) = 1
            case 1
                *(*(arg1 + 0x74) + 0x7c) = 2
            case 2
                *(*(arg1 + 0x74) + 0x7c) = 3
            case 3
                *(*(arg1 + 0x74) + 0x7c) = 4
    
    void var_98
    int32_t* eax_14
    int32_t ecx_3
    eax_14, ecx_3 = sub_40dcf0(&var_98, eax_6, *(arg1 + 0x6c))
    int32_t var_c8_6 = ecx_3
    int32_t var_c_1 = 0
    int32_t var_b0
    sub_40f0f0(eax_14, &var_b0)
    var_c_1.b = 2
    sub_405be0(&var_98)
    HWND hWnd_1 = **(arg1 + 0x74)
    BOOL eax_16
    
    if (hWnd_1 != 0)
        eax_16 = IsWindow(hWnd_1)
    
    if (hWnd_1 == 0 || eax_16 == 0)
        int32_t* var_c8_9 = &var_b0
        int32_t var_cc_3 = *(arg1 + 0xb8)
        sub_412ad0(*(arg1 + 0x74), var_b4)
    else
        int32_t* var_c8_8 = &var_b0
        sub_412c70(*(arg1 + 0x74))
        HWND hWnd_2 = **(arg1 + 0x74)
        
        if (hWnd_2 != 0)
            InvalidateRect(hWnd_2, nullptr, 0)
    
    int32_t var_9c
    
    if (var_9c u>= 0x10)
        j__free(var_b0)
else
    int32_t* esi_3 = *(arg1 + 0x74)
    HWND hWnd = *esi_3
    
    if (hWnd != 0)
        DestroyWindow(hWnd)
        *esi_3 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return 0
