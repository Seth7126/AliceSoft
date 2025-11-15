// 函数: sub_585010
// 地址: 0x585010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d5f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
char result

if (&edx[4] u> *(arg2 + 8))
    result = 0
else
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    *arg1 = ecx_6
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    char var_60 = 0
    int32_t var_8_1 = 0
    uint32_t* ebx
    
    if (sub_61ed80(arg2, &var_60) == 0)
        ebx.b = 0
    else
        int32_t var_74 = 0
        int32_t var_70_1 = 0
        int32_t var_6c_1 = 0
        int32_t edx_2
        result, edx_2 = sub_57d0d0(arg2, &var_74)
        
        if (result == 0)
            ebx.b = 0
        else
            sub_586580(&var_74, edx_2, &arg1[0x17], &var_74)
            
            if (sub_581280(&arg1[0x1d], arg2) == 0)
                ebx.b = 0
            else if (sub_57d0d0(arg2, &arg1[0x30]) == 0)
                ebx.b = 0
            else if (sub_585430(arg1, arg2) == 0)
                ebx.b = 0
            else if (sub_5854b0(arg1, arg2) == 0)
                ebx.b = 0
            else if (sub_57d190(arg2, &arg1[0x39]) == 0)
                ebx.b = 0
            else if (sub_57d190(arg2, &arg1[0x3d]) == 0)
                ebx.b = 0
            else if (sub_6c9300(arg2, &arg1[0x41]) == 0)
                ebx.b = 0
            else if (sub_6c9300(arg2, &arg1[0x42]) == 0)
                ebx.b = 0
            else if (sub_585590(arg1, arg2) == 0)
                ebx.b = 0
            else if (sub_6c9280(arg2, &arg1[0x47]) == 0)
                ebx.b = 0
            else if (sub_6c9300(arg2, &arg1[0x5c]) == 0)
                ebx.b = 0
            else if (sub_596da0(&arg1[0x5d], arg2) == 0)
                ebx.b = 0
            else if (sub_596da0(&arg1[0x63], arg2) == 0)
                ebx.b = 0
            else
                int32_t var_34_1 = 0xf
                int32_t var_38_1 = 0
                char var_48 = 0
                var_8_1.b = 1
                
                if (sub_61ed80(arg2, &var_48) != 0)
                    int32_t var_1c_1 = 0xf
                    int32_t var_20_1 = 0
                    char var_30 = 0
                    var_8_1.b = 2
                    
                    if (sub_61ed80(arg2, &var_30) == 0)
                        ebx.b = 0
                    else if (sub_6c9280(arg2, &arg1[0x79]) == 0)
                        ebx.b = 0
                    else if (sub_6c9300(arg2, &arg1[0x7a]) == 0)
                        ebx.b = 0
                    else
                        char* edx_6 = *(arg2 + 4)
                        
                        if (&edx_6[4] u> *(arg2 + 8))
                            ebx.b = 0
                        else
                            uint32_t ecx_34 =
                                ((zx.d(edx_6[3]) << 8 | zx.d(edx_6[2])) << 8 | zx.d(edx_6[1])) << 8
                                | zx.d(*edx_6)
                            *(arg2 + 4) = &edx_6[4]
                            sub_42c9c0(&arg1[0x7b], ecx_34)
                            
                            if (sub_6c9470(arg2, &arg1[0x7b]) == 0)
                                ebx.b = 0
                            else if (sub_6c9300(arg2, &arg1[0x7e]) == 0)
                                ebx.b = 0
                            else if (sub_61ec90(arg2, &arg1[0x85]) == 0)
                                ebx.b = 0
                            else
                                int32_t eax_25 = *(arg2 + 4)
                                
                                if (eax_25 + 1 u> *(arg2 + 8))
                                    ebx.b = 0
                                else
                                    bool cond:0_1 = *eax_25 == 1
                                    *(arg2 + 4) = eax_25 + 1
                                    eax_25.b = cond:0_1
                                    
                                    if (eax_25.b == 0)
                                    label_585316:
                                        
                                        if (sub_585630(arg1, arg2) == 0)
                                            ebx.b = 0
                                        else if (sub_6c9300(arg2, &arg1[0x8f]) == 0)
                                            ebx.b = 0
                                        else if (sub_6c9280(arg2, &arg1[0x90]) == 0)
                                            ebx.b = 0
                                        else if (sub_6c9280(arg2, arg1 + 0x241) == 0)
                                            ebx.b = 0
                                        else
                                            char eax_33 = arg1[0x90].b
                                            int32_t xmm0_1 = arg1[0x8f]
                                            arg1[0x90].b = 0
                                            
                                            if (sub_583700(arg1, &var_60) == 0)
                                                ebx.b = 0
                                            else if (arg1[5] == 0)
                                            label_5853c3:
                                                arg1[0x8f] = xmm0_1
                                                ebx.b = 1
                                                arg1[0x90].b = eax_33
                                            else if (var_38_1 == 0)
                                            label_5853a0:
                                                
                                                if (arg1[5] == 0 || var_20_1 == 0)
                                                    goto label_5853c3
                                                
                                                if (sub_583c70(arg1, &var_30) != 0)
                                                    goto label_5853c3
                                                
                                                ebx.b = 0
                                            else
                                                if (sub_5838c0(arg1, &var_48) != 0)
                                                    goto label_5853a0
                                                
                                                ebx.b = 0
                                    else if (sub_5822a0(arg1) == 0)
                                        ebx.b = 0
                                    else
                                        if (sub_58a9a0(arg1[0x86], arg2) != 0)
                                            goto label_585316
                                        
                                        ebx.b = 0
                    
                    sub_403320(&var_30)
                    sub_403320(&var_48)
                else
                    ebx.b = 0
                    sub_403320(&var_48)
    
    if (var_4c_1 u>= 0x10)
        sub_403160(var_60.d, var_4c_1 + 1, 1)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
