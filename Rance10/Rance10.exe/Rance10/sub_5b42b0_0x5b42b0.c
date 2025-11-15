// 函数: sub_5b42b0
// 地址: 0x5b42b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *(arg1 + 0x14)
int32_t esi = *(arg1 + 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (edx == esi)
label_5b4306:
    result.b = 1
else
    while (true)
        void* ecx = *edx
        result = *(ecx + 0x1c)
        int32_t ecx_1 = *(ecx + 0x20)
        
        if (result != ecx_1)
            while (result[3] != result[4])
                result = &result[6]
                
                if (result == ecx_1)
                    goto label_5b42ff
            
            void** eax_3 = *edx
            
            if (eax_3[5] u>= 0x10)
                eax_3 = *eax_3
            
            void** var_48 = eax_3
            struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, 0x769e38, 0x6a)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            char var_44
            sub_5e01e0(sub_409240(&var_48, &var_2c, &var_44, &var_48))
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            result.b = 0
            break
        
    label_5b42ff:
        edx = &edx[1]
        
        if (edx == esi)
            goto label_5b4306

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
