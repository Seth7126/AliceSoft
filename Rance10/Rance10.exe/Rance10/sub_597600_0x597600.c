// 函数: sub_597600
// 地址: 0x597600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c1ea
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_54 = arg1
int32_t* esi_1
int32_t edi_1

if ((*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3 != (*(arg1 + 0x74) - *(arg1 + 0x70)) s>> 3)
    void* var_7c_1 = var_54
    void* var_80_1 = arg1
    sub_568960(*(arg1 + 0x70), *(arg1 + 0x74))
    *(arg1 + 0x74) = *(arg1 + 0x70)
    int32_t ecx_3 = (*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3
    
    if ((*(arg1 + 0x78) - *(arg1 + 0x70)) s>> 3 u< ecx_3)
        if (ecx_3 u> 0x1fffffff)
            sub_6d0927("vector<T> too long")
            noreturn
        
        sub_5686a0(arg1 + 0x70, ecx_3)
    
    esi_1 = *(arg1 + 0x64)
    edi_1 = *(arg1 + 0x68)

void* result

if ((*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3 == (*(arg1 + 0x74) - *(arg1 + 0x70)) s>> 3
    || esi_1 == edi_1)
label_5977b0:
    result.b = 1
else
    while (true)
        int32_t* ebx_1 = *esi_1
        __Smtx_lock_shared(&ebx_1[1])
        int32_t* eax_10 = *ebx_1
        __Smtx_unlock_shared(&ebx_1[1])
        
        if (eax_10 != 0)
            int32_t* var_60
            int32_t* eax_14 = sub_432270(&var_60, (*(*arg2 + 0x60))(eax_10, 1))
            int32_t* var_50 = nullptr
            SRWLOCK var_4c
            __builtin_memset(&var_4c, 0, 4)
            sub_4323a0(&var_50, eax_14)
            int32_t var_8_1 = 0
            SRWLOCK var_5c
            __seterrormode(&var_5c)
            var_8_1.b = 1
            int32_t* ecx_9 = var_60
            
            if (ecx_9 != 0)
                var_60 = nullptr
                (*(*ecx_9 + 4))(eax_2)
            
            var_8_1.b = 0
            ___crtSetUnhandledExceptionFilter(&var_5c)
            __Smtx_lock_shared(&var_4c)
            ebx_1.b = var_50 != 0
            __Smtx_unlock_shared(&var_4c)
            ebx_1.b ^= 1
            
            if (ebx_1.b != 0)
                var_54 = (*(*eax_10 + 0x10))(eax_2)
                int32_t var_1c_1 = 0xf
                int32_t var_20_1 = 0
                char var_30 = 0
                sub_403490(&var_30, 0x768690, 0x9f)
                var_8_1.b = 2
                var_8_1.b = 3
                char var_48
                sub_5e01e0(sub_417810(&var_54, &var_30, &var_48, &var_54, (*(*eax_10 + 0x14))()))
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
                int32_t* ecx_21 = var_50
                
                if (ecx_21 != 0)
                    var_50 = nullptr
                    (*(*ecx_21 + 4))()
                
                ___crtSetUnhandledExceptionFilter(&var_4c)
            else
                sub_56a150(var_54 + 0x70, &var_50)
                __seterrormode(&var_4c)
                int32_t var_8_2 = 5
                int32_t* ecx_12 = var_50
                
                if (ecx_12 != 0)
                    var_50 = nullptr
                    (*(*ecx_12 + 4))(eax_2)
                
                int32_t var_8_3 = 0xffffffff
                ___crtSetUnhandledExceptionFilter(&var_4c)
                esi_1 = &esi_1[2]
                
                if (esi_1 == edi_1)
                    goto label_5977b0
                
                continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
