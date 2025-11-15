// 函数: sub_568f70
// 地址: 0x568f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c1ea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg1 + 0x48)
int32_t* var_54 = arg1 + 0x44
int32_t* var_7c = var_54
void* var_80 = arg1
sub_568960(*(arg1 + 0x44), edx)
*(arg1 + 0x48) = *(arg1 + 0x44)
int32_t* esi = *(arg1 + 0x38)
int32_t edi_1 = *(arg1 + 0x3c)
int32_t result

if (esi == edi_1)
label_5690d6:
    result.b = 1
else
    while (true)
        int32_t* ebx_1 = *esi
        __Smtx_lock_shared(&ebx_1[1])
        int32_t* eax_5 = *ebx_1
        __Smtx_unlock_shared(&ebx_1[1])
        
        if (eax_5 != 0)
            int32_t* var_60
            int32_t* eax_9 = sub_432270(&var_60, (*(*arg2 + 0x60))(eax_5, 1))
            int32_t* var_50 = nullptr
            SRWLOCK var_4c
            __builtin_memset(&var_4c, 0, 4)
            sub_4323a0(&var_50, eax_9)
            int32_t var_8_1 = 0
            SRWLOCK var_5c
            __seterrormode(&var_5c)
            var_8_1.b = 1
            int32_t* ecx_5 = var_60
            
            if (ecx_5 != 0)
                var_60 = nullptr
                (*(*ecx_5 + 4))(eax_2)
            
            var_8_1.b = 0
            ___crtSetUnhandledExceptionFilter(&var_5c)
            __Smtx_lock_shared(&var_4c)
            ebx_1.b = var_50 != 0
            __Smtx_unlock_shared(&var_4c)
            ebx_1.b ^= 1
            
            if (ebx_1.b != 0)
                var_54 = (*(*eax_5 + 0x10))(eax_2)
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30 = 0
                sub_403490(&var_30, 0x767d48, 0x9f)
                var_8_1.b = 2
                var_8_1.b = 3
                char var_48
                sub_5e01e0(sub_417810(&var_54, &var_30, &var_48, &var_54, (*(*eax_5 + 0x14))()))
                int32_t var_34
                
                if (var_34 u>= 0x10)
                    sub_403160(var_48.d, var_34 + 1, 1)
                
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                
                if (var_1c_1 u>= 0x10)
                    sub_403160(var_30.d, var_1c_1 + 1, 1)
                
                __seterrormode(&var_4c)
                int32_t var_8_4 = 4
                int32_t* ecx_16 = var_50
                
                if (ecx_16 != 0)
                    var_50 = nullptr
                    (*(*ecx_16 + 4))()
                
                ___crtSetUnhandledExceptionFilter(&var_4c)
            else
                sub_56a150(var_54, &var_50)
                __seterrormode(&var_4c)
                int32_t var_8_2 = 5
                int32_t* ecx_7 = var_50
                
                if (ecx_7 != 0)
                    var_50 = nullptr
                    (*(*ecx_7 + 4))(eax_2)
                
                int32_t var_8_3 = 0xffffffff
                ___crtSetUnhandledExceptionFilter(&var_4c)
                esi = &esi[2]
                
                if (esi == edi_1)
                    goto label_5690d6
                
                continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
