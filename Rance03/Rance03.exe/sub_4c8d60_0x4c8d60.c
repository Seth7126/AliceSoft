// 函数: sub_4c8d60
// 地址: 0x4c8d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bea18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1 = arg1
int32_t edi = result_1[4]

if (edi != 0)
    if (result_1[5] u< 0x10)
        result = result_1
    else
        result = *result_1
    
    if (*(result + edi - 1) != 0xa)
        char var_5c = 0xa
        void* eax_5 = sub_4c93e0(result_1, &var_5c)
        
        if (eax_5 != 0xffffffff)
            void* edi_1 = edi - (eax_5 + 1)
            char var_40
            int32_t* eax_7 = sub_403070(result_1, &var_40, eax_5 + 1, edi_1)
            int32_t var_4 = 0
            char var_58
            sub_408340(arg2, sub_410ad0(eax_7, eax_7, &var_58, arg2))
            int32_t var_44
            
            if (var_44 u>= 0x10)
                j__free(var_58.d)
            
            int32_t var_4_1 = 0xffffffff
            int32_t var_44_1 = 0xf
            int32_t var_48_1 = 0
            var_58 = 0
            int32_t var_2c
            
            if (var_2c u>= 0x10)
                j__free(var_40.d)
            
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            result = sub_402210(result_1, eax_5 + 1, edi_1)
        else
            int32_t var_28
            result = sub_408340(arg2, sub_40d1c0(eax_5, result_1, &var_28, arg2))
            int32_t var_14
            
            if (var_14 u>= 0x10)
                result = j__free(var_28)
            
            bool cond:1_1 = result_1[5] u< 0x10
            result_1[4] = 0
            
            if (not(cond:1_1))
                result_1 = *result_1
            
            *result_1 = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
