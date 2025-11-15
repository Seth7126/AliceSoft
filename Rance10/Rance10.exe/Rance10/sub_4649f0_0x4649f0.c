// 函数: sub_4649f0
// 地址: 0x4649f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 4)
uint32_t result

if (&edx[4] u> *(arg1 + 8))
label_464be1:
    result.b = 0
else
    uint32_t result_1 = 0
    uint32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg1 + 4) = &edx[4]
    
    if (ecx_7 s> 0)
        while (true)
            char* ecx_8 = *(arg1 + 4)
            
            if (&ecx_8[4] u> *(arg1 + 8))
                goto label_464be1
            
            uint32_t edi_7 =
                ((zx.d(ecx_8[3]) << 8 | zx.d(ecx_8[2])) << 8 | zx.d(ecx_8[1])) << 8 | zx.d(*ecx_8)
            *(arg1 + 4) = &ecx_8[4]
            uint32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403490(&var_2c, 0x75cddd, nullptr)
            int32_t var_8_1 = 0
            char* edx_2 = *(arg1 + 4)
            
            if (&edx_2[4] u<= *(arg1 + 8))
                uint32_t ecx_16 =
                    ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                    | zx.d(*edx_2)
                *(arg1 + 4) = &edx_2[4]
                
                if (sub_6c9360(arg1, &var_2c, ecx_16) != 0)
                    char* ecx_18 = *(arg1 + 4)
                    
                    if (&ecx_18[4] u<= *(arg1 + 8))
                        uint32_t ebx_4 = zx.d(ecx_18[3]) << 8 | zx.d(ecx_18[2])
                        uint32_t var_34 = 0
                        uint32_t ebx_8 = (ebx_4 << 8 | zx.d(ecx_18[1])) << 8 | zx.d(*ecx_18)
                        *(arg1 + 4) = &ecx_18[4]
                        
                        if (sub_61ec90(arg1, &var_34) != 0 && sub_46b530(arg2, &var_2c) == 0)
                            if (var_34 != 1)
                            label_464b78:
                                void* ecx_23 = sub_46b3a0(arg2, &var_2c)
                                void* eax_18
                                
                                if (ebx_8 == 1)
                                    eax_18 = sub_4648b0(edi_7, arg1, ecx_23)
                                
                                if (ebx_8 != 1 || eax_18.b != 0)
                                    *(ecx_23 + 8) = edi_7
                                    eax_18.b = ebx_8 == 1
                                    bool cond:2_1 = var_34 == 1
                                    *(ecx_23 + 4) = eax_18.b
                                    eax_18.b = cond:2_1
                                    int32_t var_8_2 = 0xffffffff
                                    *(ecx_23 + 5) = eax_18.b
                                    sub_403320(&var_2c)
                                    result = result_1 + 1
                                    result_1 = result
                                    
                                    if (result s>= ecx_7)
                                        break
                                    
                                    continue
                            else if (sub_46b620(arg2) == 0)
                                goto label_464b78
            
            if (var_18_1 u< 0x10)
                goto label_464be1
            
            sub_403160(var_2c.d, var_18_1 + 1, 1)
            goto label_464be1
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
