// 函数: sub_5db1b0
// 地址: 0x5db1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c31e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_3 = (*(arg1 + 4) - 2) * *(arg1 + 8) + 2
int32_t eax_4 = (*(*arg2 + 0x58))(eax_2)
__seterrormode(arg1 + 0x10)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    *(arg1 + 0xc) = 0
    (*(*ecx_1 + 4))()

int32_t var_8_2 = 0xffffffff
*(arg1 + 0xc) = eax_4
___crtSetUnhandledExceptionFilter(arg1 + 0x10)
__Smtx_lock_shared(arg1 + 0x10)
int32_t esi_1 = *(arg1 + 0xc)
__Smtx_unlock_shared(arg1 + 0x10)
char result

if (esi_1 != 0)
    int32_t var_64_4 = 0
    int128_t var_40
    __builtin_memcpy(&var_40, 
        "\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x"
    "00\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
        0x28)
    void* var_50 = nullptr
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    sub_452440(&var_50, &var_40, &var_18)
    int32_t var_8_3 = 1
    __Smtx_lock_shared(arg1 + 0x10)
    int32_t* edi_1 = *(arg1 + 0xc)
    __Smtx_unlock_shared(arg1 + 0x10)
    void* esi_3 = var_50
    ebx_3.b = (*(*edi_1 + 8))(ebx_3, esi_3, (var_4c_1 - esi_3) s>> 2, 0) != 0
    
    if (esi_3 != 0)
        sub_403160(esi_3, (var_48_1 - esi_3) s>> 2, 4)
    
    result = ebx_3.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_18 ^ &__saved_ebp)
return result
