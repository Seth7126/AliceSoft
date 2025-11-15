// 函数: sub_41da40
// 地址: 0x41da40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728bb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 0xc)
struct _EXCEPTION_REGISTRATION_RECORD** result
WPARAM wParam

if (hWnd != 0)
    SetForegroundWindow(hWnd)
    struct fileimage::CFileImageMaker::VTable* const var_50 = &fileimage::CFileImageMaker::`vftable'
    void* var_4c_1 = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    int32_t var_8_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_40 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_54 = 0xffffffff
    result = sub_41dd40(arg1, &var_50, &var_40, &var_54)
    
    if (result.b != 0)
        sub_6ca100(&var_50, sub_4209a0(*(arg1 + 4)))
        result = sub_41ebf0(arg1, &var_50)
        
        if (result.b != 0)
            sub_6ca100(&var_50, sub_4209a0(*(arg1 + 4)))
            var_40 = 0xffffffff
            result = sub_41dd40(arg1, &var_50, &wParam, &var_40)
            
            if (result.b != 0)
                sub_6ca100(&var_50, sub_4209a0(*(arg1 + 4)))
                struct win32only::CFileMapping::VTable* var_3c
                struct win32only::CFileMapping::VTable** ecx_9 = &var_3c
                sub_6cdd20(ecx_9)
                var_8_1.b = 1
                
                if (sub_41f180(ecx_9, &var_50) != 0)
                    SendMessageA(*(arg1 + 0xc), 0x808, wParam, arg2)
                
                result = sub_6cddb0(&var_3c)
    
    if (var_4c_1 != 0)
        result = sub_403160(var_4c_1, var_44_1 - var_4c_1, 1)
else
    *(arg1 + 0x10) = wParam
    result = arg2
    *(arg1 + 0x14) = result
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
