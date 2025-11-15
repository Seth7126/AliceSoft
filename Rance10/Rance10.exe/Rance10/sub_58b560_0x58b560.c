// 函数: sub_58b560
// 地址: 0x58b560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73da2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(arg1 + 8)
int32_t esi = *(arg1 + 4)
__Smtx_unlock_shared(arg1 + 8)
int32_t esi_2

if (esi == 0)
    int32_t eax_5 = (*(*arg3 + 0x58))(eax_2)
    __seterrormode(arg1 + 8)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        *(arg1 + 4) = 0
        (*(*ecx_1 + 4))()
    
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 4) = eax_5
    ___crtSetUnhandledExceptionFilter(arg1 + 8)
    __Smtx_lock_shared(arg1 + 8)
    esi_2 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)

int32_t result

if (esi != 0 || esi_2 != 0)
    int32_t var_60_6 = 0
    int128_t var_3c
    __builtin_memcpy(&var_3c, 
        "\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x"
    "00\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
        0x28)
    void* var_4c = nullptr
    int32_t var_48_1 = 0
    int32_t var_44_1 = 0
    sub_452440(&var_4c, &var_3c, &var_14)
    int32_t var_8_3 = 1
    __Smtx_lock_shared(arg1 + 8)
    int32_t* edi_2 = *(arg1 + 4)
    __Smtx_unlock_shared(arg1 + 8)
    void* esi_4 = var_4c
    void* ebx
    
    if ((*(*edi_2 + 8))(arg2 * 2, esi_4, (var_48_1 - esi_4) s>> 2, 1).b != 0)
        *(arg1 + 0xc) = arg2
        ebx.b = 1
    else
        ebx.b = 0
    
    if (esi_4 != 0)
        sub_403160(esi_4, (var_44_1 - esi_4) s>> 2, 4)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return result
