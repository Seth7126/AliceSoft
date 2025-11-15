// 函数: sub_58a060
// 地址: 0x58a060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d9be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t* edx = arg2
int32_t esi = 0
int32_t ebx_2 = (edx[1] - *edx) s>> 3

if (ebx_2 s> 0)
    do
        if (esi s>= 0)
            int32_t ecx = *result
            
            if (esi s< (result[1] - ecx) s>> 2 && *(ecx + (esi << 2)) != 0)
                void var_24
                int32_t* eax_6
                int32_t ecx_2
                eax_6, ecx_2 = sub_586e30(edx, &var_24, esi)
                int32_t var_3c_2 = ecx_2
                int32_t var_8_1 = 0
                bool ecx_4 =
                    sub_587b40(*(ecx + (esi << 2)), eax_6, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
                    == 0
                int32_t var_8_2 = 1
                int32_t* var_20
                
                if (var_20 != 0)
                    bool cond:1_1 = var_20[1] != 1
                    var_20[1]
                    var_20[1] -= 1
                    
                    if (not(cond:1_1))
                        (**var_20)(eax_2)
                        bool cond:2_1 = var_20[2] != 1
                        var_20[2]
                        var_20[2] -= 1
                        
                        if (not(cond:2_1))
                            (*(*var_20 + 4))()
                
                int32_t var_8_3 = 0xffffffff
                
                if (ecx_4 != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                edx = arg2
            
            result = result_1
        
        esi += 1
    while (esi s< ebx_2)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
