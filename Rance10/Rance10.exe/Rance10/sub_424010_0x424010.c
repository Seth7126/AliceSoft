// 函数: sub_424010
// 地址: 0x424010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[2]
int32_t* result

if (ecx == 0)
    result.b = 0
else
    result = (*(*ecx + 0x10))(7)
    
    if (result == 0)
        result.b = 0
    else
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        result = (*(*result + 0xc))(edx_1)
        
        if (result == 0)
            result.b = 0
        else
            int32_t eax_6 = (*(*result + 0x18))(eax_2)
            int32_t eax_7 = (*(*result + 0x14))()
            int32_t eax_8 = (*(*result + 0x18))()
            struct fileimage::CFileImageBitAnalyser::VTable* const var_58 =
                &fileimage::CFileImageBitAnalyser::`vftable'
            int32_t var_54_1 = eax_8
            int32_t var_50_1 = eax_6 + eax_7
            int32_t var_4c_1 = 0
            int32_t var_8_1 = 0
            bool cond:0_1 = sub_428b60(&arg1[5], &var_58) != 0
            int32_t eax_10 = *result
            
            if (cond:0_1)
                (*(eax_10 + 4))()
                result.b = 1
            else
                void var_44
                int32_t* eax_12 = sub_419600((*(eax_10 + 4))(), 0x75d5b4, &var_44, arg2)
                var_8_1.b = 1
                var_8_1.b = 2
                void var_2c
                sub_45ab60(sub_4176f0(eax_12.b, eax_12, &var_2c, 0x75d5c4))
                sub_403320(&var_2c)
                sub_403320(&var_44)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
