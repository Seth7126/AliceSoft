// 函数: sub_512f50
// 地址: 0x512f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_30 = ebx
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s>= 8)
    char* edx_1 = *(arg3 + 4)
    
    if (&edx_1[4] u> *(arg3 + 8))
        result.b = 0
    else
        uint32_t ecx_2 = zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])
        uint32_t var_38 = 0
        uint32_t ecx_6 = (ecx_2 << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg3 + 4) = &edx_1[4]
        result = sub_6c92b0(arg3, &var_38)
        
        if (result.b == 0)
            result.b = 0
        else
            int32_t edi_2 = 0
            char var_2c
            struct _EXCEPTION_REGISTRATION_RECORD** var_18_1
            
            if (var_38 u> 0)
                while (true)
                    var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_8_1 = 0
                    
                    if (sub_61ed80(arg3, &var_2c) == 0)
                        break
                    
                    char* edx_2 = *(arg3 + 4)
                    
                    if (&edx_2[4] u> *(arg3 + 8))
                        break
                    
                    uint32_t ecx_15 =
                        ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                        | zx.d(*edx_2)
                    *(arg3 + 4) = &edx_2[4]
                    ebx = var_30
                    
                    if (sub_510b20(ebx, &var_2c, ecx_15) == 0)
                        break
                    
                    int32_t var_8_2 = 0xffffffff
                    sub_403320(&var_2c)
                    edi_2 += 1
                    
                    if (edi_2 u>= var_38)
                        goto label_51307c
                
                goto label_513149
            
        label_51307c:
            uint32_t ecx_22 = ecx_6
            
            if (ecx_22 s< 3)
                goto label_51312b
            
            char* edx_3 = *(arg3 + 4)
            
            if (&edx_3[4] u> *(arg3 + 8))
                result.b = 0
            else
                uint32_t ebx_8 = ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8
                    | zx.d(*edx_3)
                *(arg3 + 4) = &edx_3[4]
                int32_t edi_4 = 0
                
                if (ebx_8 u<= 0)
                label_513125:
                    ebx = var_30
                label_51312b:
                    
                    if (ecx_22 s< 6)
                        result = sub_510f20(arg3)
                    
                    if (ecx_22 s< 6 && result.b == 0)
                        result.b = 0
                    else
                        result.b = sub_5110e0(ebx, arg3).b != 0
                else
                    while (true)
                        var_18_1 = 0xf
                        int32_t var_1c_2 = 0
                        var_2c = 0
                        int32_t var_8_3 = 1
                        char eax_14
                        int32_t ecx_19
                        eax_14, ecx_19 = sub_61ed80(arg3, &var_2c)
                        
                        if (eax_14 == 0)
                            break
                        
                        uint32_t var_50_5 = ecx_6
                        char* var_54_2 = &var_2c
                        void* var_3c
                        sub_44e4f0(&var_30[6], &var_3c, ecx_19)
                        int32_t var_8_4 = 0xffffffff
                        
                        if (var_18_1 u>= 0x10)
                            sub_403160(var_2c.d, var_18_1 + 1, 1)
                        
                        edi_4 += 1
                        
                        if (edi_4 u>= ebx_8)
                            ecx_22 = ecx_6
                            goto label_513125
                    
                label_513149:
                    
                    if (var_18_1 u< 0x10)
                        result.b = 0
                    else
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                        result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
