// 函数: sub_42d910
// 地址: 0x42d910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_2c
int32_t* eax_4 = sub_425ab0(arg1, &var_2c, arg3)
int32_t var_8_1 = 0
int32_t var_18
int32_t* result
float ebx

if (*(arg1 + 0x14) != 5)
    result = sub_42cf90(arg1, arg3, arg4)
    
    if (result == 3)
        *arg2 = sub_407560(&var_2c, "true").b
        ebx.b = 1
    else
        float var_30
        
        if (result == 1)
            int32_t* var_48_2 = &var_30
            char* eax_5 = &var_2c
            var_30 = 0f
            
            if (var_18 u>= 0x10)
                eax_5 = var_2c
            
            if (sub_6ca310(eax_5, 0x7942e0) != 1)
                ebx.b = 0
            else
                ebx.b = 1
                result.b = var_30 != 0
                *arg2 = result.b
        else if (result != 2)
            ebx.b = 0
        else
            int32_t* var_48_3 = &var_30
            char* eax_6 = &var_2c
            var_30 = 0f
            
            if (var_18 u>= 0x10)
                eax_6 = var_2c
            
            if (sub_6ca310(eax_6, 0x79394c) != 1)
                ebx.b = 0
            else
                float xmm0_1 = var_30
                xmm0_1 f- 0
                result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                    | (xmm0_1 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    ebx.b = 1
                    *arg2 = 0
                else
                    *arg2 = 1
                    ebx.b = 1
else
    ebx.b = sub_42d3d0(eax_4, &var_2c, arg2, arg4).b

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
