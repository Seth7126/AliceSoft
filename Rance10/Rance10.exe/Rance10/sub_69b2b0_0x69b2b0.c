// 函数: sub_69b2b0
// 地址: 0x69b2b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7486ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg3
int32_t var_18 = 0
int32_t var_30 = *arg6
int32_t var_2c = *arg5
int32_t var_28 = arg4
struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** var_24 =
    sub_69b5d0(arg2, &var_30)
char var_20 = 0
char var_1c = 0
int32_t var_8_1 = 0
int32_t* eax_9 = sub_69b3f0(&var_24)
*arg3 = 0

if (arg3 != eax_9)
    void* eax_10 = *eax_9
    
    if (eax_10 != 0)
        *(eax_10 + 4) += 1
        *arg3 = *eax_9
        int32_t eax_11
        eax_11.b = eax_9[1].b
        arg3[1].b = eax_11.b
    else
        *arg3 = eax_10

arg3[1].b = 1
int32_t var_8_2 = 1
struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** ecx_3 = var_24

if (ecx_3 != 0)
    bool cond:0_1 = ecx_3[1] != 1
    ecx_3[1]
    ecx_3[1] -= 1
    
    if (not(cond:0_1))
        int32_t* edx_1 = ecx_3[0x1e]
        struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable** 
            var_44_1
        struct std::_Associated_state<bool>::std::_Packaged_state<bool __cdecl ()>::VTable* eax_13
        
        if (edx_1 == 0)
            eax_13 = *ecx_3
            var_44_1 = 1
        else
            eax_13 = *edx_1
            var_44_1 = ecx_3
        
        eax_13->__offset(0x0).d(var_44_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
