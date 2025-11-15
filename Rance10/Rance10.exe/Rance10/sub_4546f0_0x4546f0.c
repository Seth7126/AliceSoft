// 函数: sub_4546f0
// 地址: 0x4546f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6ca100(arg2, *(arg1 + 4))
void* result = *(arg1 + 4)

if (result - 1 u> 3)
    result.b = 0
else
    switch (result)
        case 1
            if (result != 1)
                result.b = 0
            else
                sub_6ca100(arg2, *(arg1 + 8))
                result.b = 1
        case 2
            if (result != 2)
                result.b = 0
            else
                sub_6ca100(arg2, *(arg1 + 0xc))
                result.b = 1
        case 3
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (result != 3)
                sub_403320(&var_2c)
                result.b = 0
            else
                if (&var_2c != arg1 + 0x10)
                    sub_403590(&var_2c, arg1 + 0x10, 0, 0xffffffff)
                
                sub_6ca1a0(arg2, &var_2c)
                sub_403320(&var_2c)
                result.b = 1
        case 4
            if (result != 4)
                result.b = 0
            else
                result.b = *(arg1 + 0x28)
                int32_t ecx_11
                ecx_11.b = result.b != 0
                sub_6ca100(arg2, ecx_11)
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
