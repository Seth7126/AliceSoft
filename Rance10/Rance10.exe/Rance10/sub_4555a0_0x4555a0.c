// 函数: sub_4555a0
// 地址: 0x4555a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edi = arg3
uint32_t var_40 = edi
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 2)
label_455716:
    result.b = 1
else
    char* edx_1 = *(edi + 4)
    
    if (&edx_1[4] u> *(edi + 8))
        result.b = 0
    else
        uint32_t ecx_6 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(edi + 4) = &edx_1[4]
        sub_456ae0(arg1 + 8, ecx_6)
        int32_t* esi_2 = *(arg1 + 8)
        int32_t ebx_1 = *(arg1 + 0xc)
        
        if (esi_2 == ebx_1)
        label_455716_1:
            result.b = 1
        else
            while (sub_4597d0(esi_2, edi, arg2).b != 0)
                char* edx_2 = (**esi_2)(eax_2)
                struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                void* ecx_10
                
                if (*edx_2 != 0)
                    char* ecx_11 = edx_2
                    char* eax_7
                    
                    do
                        eax_7.b = *ecx_11
                        ecx_11 = &ecx_11[1]
                    while (eax_7.b != 0)
                    ecx_10 = ecx_11 - &ecx_11[1]
                else
                    ecx_10 = nullptr
                
                sub_403490(&var_2c, edx_2, ecx_10)
                int32_t var_8_1 = 0
                void** edi_2 = sub_432330(arg1 + 0x14, &var_2c)
                char eax_13
                
                if (edi_2 != *(arg1 + 0x14))
                    eax_13 = sub_412ca0(&var_2c, &edi_2[4])
                
                if (edi_2 == *(arg1 + 0x14) || eax_13 != 0)
                    char* var_58_6 = &var_2c
                    char* var_38 = &var_2c
                    char** var_5c_4 = &var_38
                    int32_t* eax_14 = sub_458740(&var_38)
                    void** var_3c
                    sub_458790(arg1 + 0x14, &var_3c, edi_2, &eax_14[4], eax_14)
                    edi_2 = var_3c
                
                edi_2[0xa] = esi_2
                int32_t var_8_2 = 0xffffffff
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                edi = var_40
                esi_2 = &esi_2[0x14]
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                
                if (esi_2 == ebx_1)
                    goto label_455716_1
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
