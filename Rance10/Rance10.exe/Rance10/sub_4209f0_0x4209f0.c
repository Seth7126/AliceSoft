// 函数: sub_4209f0
// 地址: 0x4209f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728f58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 8)
int32_t* result

if (ecx != 0 && *(arg1 + 0xc) != 0)
    int32_t eax_4 = (**ecx)(eax_2)
    int32_t var_4c = 0
    void* var_58 = nullptr
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    sub_422540(&var_58, eax_4, &var_4c)
    int32_t var_8_1 = 0
    int32_t ebx_1
    
    if (sub_421810(arg1, (*(**(arg1 + 8) + 0x1c))(), &var_58) != 0)
        if (sub_421e70(arg1, &var_58) != 0)
            if (sub_421ed0(arg1, &var_58).b != 0)
                int32_t esi_1 = 0
                int32_t edx_1 = 0
                var_4c = 0
                int32_t var_48 = 0
                
                if (eax_4 s> 0)
                    do
                        if ((*(**(arg1 + 8) + 0x10))(edx_1) != 0xffffffff)
                            int32_t edx_2 = var_48
                            
                            if ((*(**(arg1 + 8) + 0x34))(edx_2) == *(var_58 + (edx_2 << 2)))
                                esi_1 = var_4c
                            else
                                int32_t ecx_11 = var_48
                                int32_t var_64_1 = ecx_11
                                int32_t var_68 = *(var_58 + (ecx_11 << 2))
                                sub_422260(arg3, &var_68)
                                void var_2c
                                sub_403360(&var_2c, "Page %d : Ref %d != %d\r\n")
                                var_8_1.b = 1
                                int32_t edx_3 = var_48
                                var_8_1.b = 2
                                void var_44
                                sub_4055a0(arg2, 
                                    sub_422a40(&var_48, &var_2c, &var_44, &var_48, 
                                        (*(**(arg1 + 8) + 0x34))(edx_3), *(var_58 + (edx_3 << 2))), 
                                    0, 0xffffffff)
                                sub_403320(&var_44)
                                var_8_1.b = 0
                                sub_403320(&var_2c)
                                esi_1 = var_4c + 1
                                var_4c = esi_1
                        
                        edx_1 = var_48 + 1
                        var_48 = edx_1
                    while (edx_1 s< eax_4)
                
                if (eax_4 s<= 0 || esi_1 s<= 0)
                    ebx_1.b = 1
                else
                    ebx_1.b = 0
            else
                sub_403450(0x75d484)
                ebx_1.b = 0
        else
            sub_403450(0x75d420)
            ebx_1.b = 0
    else
        sub_403450(0x75d448)
        ebx_1.b = 0
    
    void* edx_6 = var_58
    
    if (edx_6 != 0)
        sub_403160(edx_6, (var_50_1 - edx_6) s>> 2, 4)
    
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
