// 函数: sub_51ef10
// 地址: 0x51ef10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = arg1[0x53].b

if (result.b == 0)
    char var_2c
    int32_t ecx_1 = sub_522cb0(&var_2c)
    int32_t var_48_1 = 1
    int32_t var_8_1 = 0
    char var_30 = 0xa
    void* i = sub_42cb30(&var_2c, &var_30, ecx_1)
    void* i_1
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    
    if (i != 0xffffffff)
        var_30 = 0xa
        
        do
            if (i_1 u< i)
                sub_6d0947("invalid string position")
                noreturn
            
            char* ecx_5 = &var_2c
            
            if (i_1 - i u> 1)
                struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
                void* i_2 = i_1 - 1
                char* ebx_1 = var_2c.d
                
                if (result_2 u>= 0x10)
                    ecx_5 = ebx_1
                
                ecx_5 += i
                
                if (i_2 != i)
                    ecx_5 = sub_6feca0(ecx_5, &ecx_5[1], i_2 - i)
                    result_2 = result_1
                    ebx_1 = var_2c.d
                
                i_1 = i_2
                char* eax_4 = &var_2c
                
                if (result_2 u>= 0x10)
                    eax_4 = ebx_1
                
                *(eax_4 + i_2) = 0
            else
                i_1 = i
                
                if (result_1 u>= 0x10)
                    ecx_5 = var_2c.d
                
                *(ecx_5 + i) = 0
            
            int32_t var_48_3 = 1
            i = sub_42cb30(&var_2c, &var_30, ecx_5)
        while (i != 0xffffffff)
    
    if (i_1 != 0)
        sub_51fb60(arg1, &var_2c)
    
    int32_t var_8_2 = 0xffffffff
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)
    
    int32_t var_18 = 0xf
    int32_t var_1c = 0
    var_2c = 0

void* esi_1 = data_7fcb68

if (*(esi_1 + 4) != 0)
    result = (*(**(esi_1 + 4) + 0x28))(eax_2)
else
    int32_t* ecx_8 = data_7fcb88
    
    if (ecx_8 != 0)
        result = (**ecx_8)(0x75ff30)
        *(esi_1 + 4) = result
        
        if (result != 0)
            result = (*(**(esi_1 + 4) + 0x28))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
