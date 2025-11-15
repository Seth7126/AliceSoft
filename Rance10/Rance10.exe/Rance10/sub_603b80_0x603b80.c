// 函数: sub_603b80
// 地址: 0x603b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *arg1 - 0xa

if (result u<= 0x53)
    result = zx.d(lookup_table_603d18[result])
    float var_34
    
    switch (result)
        case 0
            result = sub_6035f0(arg1, &var_34)
            
            if (result.b != 0)
                int32_t* ecx_1 = *(arg4 + 0x24)
                var_34 = var_34
                
                if (ecx_1 == 0)
                    sub_6d090a()
                    noreturn
                
                result = (*(*ecx_1 + 8))(&var_34)
                var_34 = fconvert.s(arg2)
        case 1
            result = sub_6036b0(arg1, &var_34)
            
            if (result.b != 0)
                var_34 = var_34
                int32_t* ecx_3 = *(arg5 + 0x24)
                
                if (ecx_3 == 0)
                    sub_6d090a()
                    noreturn
                
                result = (*(*ecx_3 + 8))(&var_34)
                float var_38_1 = fconvert.s(arg2)
        case 2
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (sub_603710(arg1, &var_2c) == 0)
                result = sub_403320(&var_2c)
            else
                int32_t* ecx_4 = *(arg6 + 0x24)
                
                if (ecx_4 == 0)
                    sub_6d090a()
                    noreturn
                
                (*(*ecx_4 + 8))(&var_2c)
                float var_38_2 = fconvert.s(arg2)
                result = sub_403320(&var_2c)
        case 3
            bool var_30
            result = sub_603590(arg1, &var_30)
            
            if (result.b != 0)
                result.b = var_30
                int32_t* ecx = *(arg3 + 0x24)
                var_30 = result.b
                
                if (ecx == 0)
                    sub_6d090a()
                    noreturn
                
                result = (*(*ecx + 8))(&var_30)
                var_34 = fconvert.s(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
