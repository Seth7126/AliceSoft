// 函数: sub_5d9740
// 地址: 0x5d9740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741508
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_44
__builtin_memset(&var_44, 0, 0x14)
int32_t var_8_1 = 0
char eax_4 = sub_5ce990(arg2, &arg1[0xa], &var_44)
int32_t esi_1

if (eax_4 != 0)
    __Smtx_lock_shared(&var_44:4)
    esi_1 = var_44.d
    __Smtx_unlock_shared(&var_44:4)

int32_t ebx

if (eax_4 != 0 && (esi_1 != 0 || var_44:8.d != var_44:0xc.d))
    int32_t esi_3 = sub_5ca8f0(&var_44) + sub_5ca940(&var_44)
    int32_t eax_8 = sub_5ca8f0(&var_44)
    struct fileimage::CFileImageAnalyser::VTable* const var_50 =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_4c_1 = eax_8
    int32_t var_48_1 = esi_3
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    var_8_1.b = 2
    
    if (sub_61ed80(&var_50, &var_30) == 0)
        ebx.b = 0
    else
        uint32_t var_54
        
        if (sub_407560(&var_30, 0x76a88c) == 0)
            ebx.b = 0
        else if (sub_61ec90(&var_50, &var_54) == 0 || var_54 != 0)
            ebx.b = 0
        else if (sub_5d98c0(arg1, &var_50) == 0)
            ebx.b = 0
        else if (sub_5d9b20(arg1, &var_50) == 0)
            ebx.b = 0
        else
            ebx.b = 1
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
else
    ebx.b = 1

sub_5cc410(&var_44)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
