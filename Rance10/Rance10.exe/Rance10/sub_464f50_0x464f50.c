// 函数: sub_464f50
// 地址: 0x464f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c5a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_84 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 == 0)
labelid_1:
    result.b = 0
else
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
    labelid_1:
        result.b = 0
    else
        uint32_t ecx_6 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        
        if (ecx_6 != 1)
            goto label_4650f4
        
        uint32_t var_7c
        uint32_t var_78
        
        if (sub_61ec90(arg2, &var_7c).b == 0)
        labelid_1:
            result.b = 0
        else if (sub_61ec90(arg2, &var_78).b == 0 || var_78 == 0)
        label_4650c2:
            result.b = 0
        else
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (sub_61ec90(arg2, &var_78) == 0)
            label_4650bd:
                sub_403320(&var_2c)
            label_4650c2_1:
                result.b = 0
            else
                if (sub_6c9360(arg2, &var_2c, var_78) == 0)
                    goto label_4650bd
                
                uint32_t eax_9 = sub_4752b0(arg3, 0xffffffff)
                
                if (sub_464810(var_7c, arg2, eax_9) == 0)
                    void var_74
                    char* eax_11 = sub_46de30(arg3, &var_74)
                    var_8_1.b = 1
                    
                    if (*(eax_11 + 0x14) u>= 0x10)
                        eax_11 = *eax_11
                    
                    var_7c = eax_11
                    void var_44
                    sub_403360(&var_44, 0x75e49c)
                    var_8_1.b = 2
                    void var_5c
                    char* eax_13 = sub_409240(&var_7c, &var_44, &var_5c, &var_7c)
                    var_8_1.b = 3
                    sub_45eb40(*(arg1 + 4), eax_13)
                    sub_403320(&var_5c)
                    sub_403320(&var_44)
                    sub_403320(&var_74)
                    goto label_4650bd
                
                int32_t var_8_2 = 0xffffffff
                sub_403320(&var_2c)
            label_4650f4:
                var_78 = 0
                
                if (sub_61ec90(arg2, &var_78).b == 0)
                label_4650c2_2:
                    result.b = 0
                else
                    int32_t edi_1 = 0
                    
                    if (var_78 s> 0)
                        while (true)
                            struct _EXCEPTION_REGISTRATION_RECORD** var_18_2 = 0xf
                            int32_t var_1c_2 = 0
                            var_2c = 0
                            int32_t var_8_3 = 4
                            char* edx_3 = *(arg2 + 4)
                            
                            if (&edx_3[4] u> *(arg2 + 8))
                                goto label_4650c2_2
                            
                            void* ecx_32 =
                                ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8
                                | zx.d(*edx_3)
                            *(arg2 + 4) = &edx_3[4]
                            
                            if (sub_6c9360(arg2, &var_2c, ecx_32) != 0
                                    && sub_464f50(arg2, sub_475360(arg3, &var_2c)) != 0)
                                int32_t var_8_4 = 0xffffffff
                                sub_403320(&var_2c)
                                edi_1 += 1
                                
                                if (edi_1 s>= var_78)
                                    break
                                
                                continue
                            
                            if (var_18_2 u< 0x10)
                                goto label_4650c2_2
                            
                            sub_403160(var_2c.d, var_18_2 + 1, 1)
                            goto label_4650c2_2
                    
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
