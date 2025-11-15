// 函数: sub_6106a0
// 地址: 0x6106a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if ((arg1[0x284] - &arg1[0x183] - 4) s>> 2 u< 0x100)
    result = sub_622720(&arg1[0x52], arg2)
    
    if (result != 0)
        sub_621d30(&arg1[0x52], result[0xb])
        
        if (arg1[0x4a4].b != 0)
            void* eax_7 = result[9]
            int32_t eax_8
            
            if (eax_7 != 0)
                eax_8 = *(eax_7 + 0x58)
            else
                eax_8 = 0xffffffff
            
            sub_5fc1c0(&arg1[0x496], eax_8)
        
        *arg1[0x284] = arg2
        arg1[0x284] += 4
        result = sub_610960(arg1)
    else
        result.b = 0
else
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, 0x76b4b4, 0x24)
    int32_t var_8_1 = 0
    void* ebx
    ebx.b = sub_612320(arg1, &var_30).b
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
