// 函数: sub_58a290
// 地址: 0x58a290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d9f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg1
int32_t* var_34 = edx
int32_t* ebx = arg2
int32_t edi = 0
int32_t* var_38 = ebx
int32_t result = (ebx[1] - *ebx) s>> 3
int32_t result_1 = result

if (result s<= 0)
label_58a3b3:
    result.b = 1
else
    while (true)
        if (edi s>= 0)
            int32_t ecx = *edx
            
            if (edi s< (edx[1] - ecx) s>> 2)
                if (*(ecx + (edi << 2)) == 0)
                    goto label_58a3a9
                
                void var_44
                int32_t edx_1 = sub_586e30(ebx, &var_44, edi)
                int32_t var_8_1 = 0
                void* ecx_2 = *(ecx + (edi << 2))
                
                if (*(ecx_2 + 4) != 8 || *(ecx_2 + 0x4c) == 0)
                    ebx.b = 1
                else
                    result.b = *(ecx_2 + 0x50)
                    
                    if (result.b != 0)
                        ebx.b = 1
                    else if (sub_5a8e60(*(ecx_2 + 0x4c), edx_1, arg3).b != 0)
                        ebx.b = 1
                    else
                        void var_2c
                        sub_403360(&var_2c, 0x768310)
                        var_8_1.b = 1
                        sub_5e01e0(&var_2c)
                        sub_403320(&var_2c)
                        ebx.b = 0
                
                int32_t var_8_2 = 2
                int32_t* var_40
                
                if (var_40 != 0)
                    bool cond:1_1 = var_40[1] != 1
                    var_40[1]
                    var_40[1] -= 1
                    
                    if (not(cond:1_1))
                        (**var_40)(eax_2)
                        bool cond:2_1 = var_40[2] != 1
                        var_40[2]
                        var_40[2] -= 1
                        
                        if (not(cond:2_1))
                            (*(*var_40 + 4))()
                
                int32_t var_8_3 = 0xffffffff
                
                if (ebx.b != 0)
                    edx = var_34
                    ebx = var_38
                label_58a3a9:
                    edi += 1
                    
                    if (edi s>= result_1)
                        goto label_58a3b3
                    
                    continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
