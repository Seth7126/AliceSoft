// 函数: sub_49a090
// 地址: 0x49a090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7303e2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
int32_t edi = *(arg1 + 8)
void* result = arg2
void* result_1 = result

if (esi != edi)
    int32_t* ebx_1 = &esi[0xb]
    
    do
        result = *esi
        void var_3c
        void* result_2 = &var_3c
        int32_t* ecx = nullptr
        int32_t* var_18_1 = nullptr
        int32_t var_8_1 = 0
        int32_t* edx_1 = *ebx_1
        
        if (edx_1 != 0)
            ecx = (**edx_1)(&var_3c)
            var_18_1 = ecx
        
        int32_t var_8_2 = 1
        
        if (result == 0)
            int32_t var_8_3 = 2
        label_49a14e:
            
            if (ecx != 0)
                result = (*(*ecx + 0x10))(ecx != &var_3c)
        else if (ecx != 0)
            int32_t var_50 = arg5
            int32_t var_54 = arg4
            int32_t var_58 = arg3
            result_2 = result_1
            result = (*(*ecx + 8))(&result_2, &var_58, &var_54, &var_50)
            int32_t var_8_4 = 4
            ecx = var_18_1
            goto label_49a14e
        
        esi = &esi[0xc]
        int32_t var_8_5 = 0xffffffff
        ebx_1 = &ebx_1[0xc]
    while (esi != edi)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
