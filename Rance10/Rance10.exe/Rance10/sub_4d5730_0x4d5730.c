// 函数: sub_4d5730
// 地址: 0x4d5730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734108
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4d5860(arg1)
int32_t* ecx = nullptr

if (sub_41ac20(0x763cec, 0x75daa4).b != 0)
    ecx = data_7fcb40

*(arg1 + 0x38) = ecx
int32_t* result

if (ecx != 0)
    (**ecx)(eax_2)
    int32_t* esi_1 = data_7fcb88
    
    if (esi_1 == 0)
        result.b = 0
    else
        int32_t* eax_5 = (**esi_1)(0x763fa4)
        *(arg1 + 0x3c) = 0
        
        if (eax_5 != 0)
            *(arg1 + 0x3c) = (**eax_5)()
        
        result = (**esi_1)(0x763d6c)
        
        if (result == 0)
            result.b = 0
        else
            void var_44
            sub_403360(&var_44, (*(*result + 0xc))())
            int32_t var_8_1 = 0
            void var_5c
            char* eax_12 = sub_405070(&var_5c, &var_44)
            var_8_1.b = 1
            int32_t* var_2c
            sub_4176f0(eax_12.b, eax_12, &var_2c, "Flat.afa")
            var_8_1.b = 3
            sub_403320(&var_5c)
            
            if (sub_5f2400(&var_2c) != 0)
                int32_t* edx_3 = &var_2c
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    edx_3 = var_2c
                
                (*(**(arg1 + 0x38) + 0xc))(3, edx_3)
            
            sub_403320(&var_2c)
            sub_403320(&var_44)
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
