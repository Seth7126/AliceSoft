// 函数: sub_5ccc10
// 地址: 0x5ccc10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740908
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int128_t var_34
__builtin_memset(&var_34, 0, 0x14)
int32_t var_8_1 = 0
void** arg_8
void* ecx

if (sub_5ce990(ecx, arg_8, &var_34) != 0)
    __Smtx_lock_shared(&var_34:4)
    int32_t esi_2 = var_34.d
    __Smtx_unlock_shared(&var_34:4)
    
    if ((esi_2 != 0 || var_34:8.d != var_34:0xc.d) && sub_5ca940(&var_34) s> 0)
        sub_586b10(&arg_8)
        var_8_1.b = 1
        int32_t esi_4 = sub_5ca8f0(&var_34) + sub_5ca940(&var_34)
        int32_t eax_9 = sub_5ca8f0(&var_34)
        struct fileimage::CFileImageAnalyser::VTable* const var_20 =
            &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_1c = eax_9
        int32_t var_18 = esi_4
        var_8_1.b = 2
        void** esi_5 = arg_8
        
        if (sub_58a9a0(esi_5, &var_20) != 0)
            *arg1 = esi_5
        else
            *arg1 = 0
            
            if (esi_5 != 0)
                int32_t var_48_4 = 0xa4
                operator new(esi_5)
        
        sub_5cc410(&var_34)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1

*arg1 = 0
sub_5cc410(&var_34)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
