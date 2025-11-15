// 函数: sub_46ad20
// 地址: 0x46ad20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d030
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != 0)
    void* esi_1 = *(arg2 + 0x34)
    int32_t ebx
    
    if (esi_1 != 0)
        int32_t var_8_2 = 1
        int32_t var_8_3 = 0xffffffff
        char var_2c
        ebx.b = sub_4750b0(esi_1, sub_46de30(arg2, &var_2c)) == 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (ebx.b != 0)
            result.b = 0
        else if (((*(esi_1 + 0x24) - *(esi_1 + 0x20)) & 0xfffffffc) s> 0)
            result.b = 1
        else
            result = sub_46ad20(esi_1)
    else
        void* var_8_1 = esi_1
        void* var_44
        ebx.b = sub_46e880(arg1 + 8, sub_46de30(arg2, &var_44)).b
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
