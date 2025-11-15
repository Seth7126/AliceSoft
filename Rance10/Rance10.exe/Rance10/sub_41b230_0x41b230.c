// 函数: sub_41b230
// 地址: 0x41b230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0)
    result.b = 0
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x38e38e39, *(arg1 + 0xc) - *(arg1 + 8))
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        void* esi_1 = &(*(arg1 + 8))[arg2 * 0x12]
        
        if (esi_1 == 0)
            result.b = 0
        else
            void* var_44
            sub_403360(&var_44, sub_41ad80())
            int32_t var_8_1 = 0
            void* var_5c
            int32_t* eax_8 = sub_4175e0(sub_681030(&var_44), &var_44, &var_5c, U"\")
            var_8_1.b = 1
            char var_2c
            sub_4176f0(eax_8.b, eax_8, &var_2c, arg3)
            int32_t var_48
            int32_t eax_9 = var_48
            
            if (eax_9 u>= 0x10)
                eax_9 = sub_403160(var_5c, eax_9 + 1, 1)
            
            void* edx_5 = esi_1 + 0x30
            
            if (*(esi_1 + 0x44) u>= 0x10)
                edx_5 = *edx_5
            
            char* ebx
            ebx.b = sub_67efe0(eax_9, edx_5, &var_2c, *(esi_1 + 0x40))
            int32_t var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            struct _EXCEPTION_REGISTRATION_RECORD** var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
