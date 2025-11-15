// 函数: ___std_fs_change_permissions@12
// 地址: 0x453190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_453680(*(*(arg1 + 0x20) + 4))
void* eax_4 = *(arg1 + 0x20)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x20)
*eax_5 = eax_5
void* eax_6 = *(arg1 + 0x20)
int32_t var_8_2 = 0xffffffff
*(eax_6 + 8) = eax_6
*(arg1 + 0x24) = 0
char* ecx_1 = *arg2
uint32_t result = arg2[1]

if (ecx_1 != result)
    struct fileimage::CFileImageAnalyser::VTable* const var_38 =
        &fileimage::CFileImageAnalyser::`vftable'
    result = result
    char* var_34_1 = ecx_1
    uint32_t result_1 = result
    int32_t var_8_3 = 1
    
    if (&ecx_1[4] u> result)
        result.b = 0
    else
        int32_t esi_1 = 0
        void* var_34_2 = &ecx_1[4]
        uint32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        
        if (edi_7 s<= 0)
            result.b = 1
        else
            while (true)
                uint32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                var_8_3.b = 2
                
                if (sub_61ed80(&var_38, &var_2c) != 0)
                    void** var_40
                    sub_453ba0(arg1 + 0x20, &var_40, &var_2c)
                    
                    if (sub_4545a0(&var_40[0xa], &var_38) != 0)
                        var_8_3.b = 1
                        
                        if (var_18_1 u>= 0x10)
                            sub_403160(var_2c.d, var_18_1 + 1, 1)
                        
                        esi_1 += 1
                        
                        if (esi_1 s< edi_7)
                            continue
                        
                        result.b = 1
                        goto label_4532d8
                
                if (var_18_1 u< 0x10)
                    break
                
                sub_403160(var_2c.d, var_18_1 + 1, 1)
                break
            
            result.b = 0
else
    result.b = 1

label_4532d8:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
