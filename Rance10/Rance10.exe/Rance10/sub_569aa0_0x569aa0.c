// 函数: sub_569aa0
// 地址: 0x569aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c31e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(arg1 + 0x34)
int32_t esi = *(arg1 + 0x30)
__Smtx_unlock_shared(arg1 + 0x34)
int32_t esi_2

if (esi == 0)
    int32_t eax_5 = (*(*arg2 + 0x58))(eax_2)
    __seterrormode(arg1 + 0x34)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = *(arg1 + 0x30)
    
    if (ecx_1 != 0)
        *(arg1 + 0x30) = 0
        (*(*ecx_1 + 4))()
    
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 0x30) = eax_5
    ___crtSetUnhandledExceptionFilter(arg1 + 0x34)
    __Smtx_lock_shared(arg1 + 0x34)
    esi_2 = *(arg1 + 0x30)
    __Smtx_unlock_shared(arg1 + 0x34)

int32_t result

if (esi == 0 && esi_2 == 0)
    result.b = 0
else
    __Smtx_lock_shared(arg1 + 0x34)
    int32_t* esi_3 = *(arg1 + 0x30)
    __Smtx_unlock_shared(arg1 + 0x34)
    
    if ((*(*esi_3 + 0x20))(eax_2) s>= 4)
        result.b = 1
    else
        int32_t var_64_8 = 0
        int128_t var_40
        __builtin_memcpy(&var_40, 
            "\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x"
        "00\x00\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
            0x28)
        void* var_50 = nullptr
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        sub_452440(&var_50, &var_40, &var_18)
        int32_t var_8_3 = 1
        __Smtx_lock_shared(arg1 + 0x34)
        int32_t* edi_3 = *(arg1 + 0x30)
        __Smtx_unlock_shared(arg1 + 0x34)
        void* esi_5 = var_50
        
        if ((*(*edi_3 + 8))(4, esi_5, (var_4c_1 - esi_5) s>> 2, 1).b != 0)
            if (esi_5 != 0)
                sub_403160(esi_5, (var_48_1 - esi_5) s>> 2, 4)
            
            result.b = 1
        else
            if (esi_5 != 0)
                sub_403160(esi_5, (var_48_1 - esi_5) s>> 2, 4)
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_18 ^ &__saved_ebp)
return result
