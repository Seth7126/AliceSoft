// 函数: sub_5b96a0
// 地址: 0x5b96a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2
void* var_30
sub_404ea0(&var_30)
int32_t edi = 0
int32_t var_8_1 = 0
char* result
void* ebx

if (eax_5 s<= 0)
label_5b97a3:
    ebx.b = 1
else
    while (true)
        if (edi s>= 0 && edi s< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
            result = *(*(arg2 + 8) + (edi << 2))
            
            if (result != 0)
                int32_t* var_34
                sub_5b9560(&var_34, result)
                var_8_1.b = 1
                int32_t* esi_1 = var_34
                
                if (esi_1 != 0)
                    if (sub_5c0720(esi_1, &var_30, *(arg1 + 0xa0)) == 0)
                        sub_5bd0e0(esi_1)
                        int32_t var_54_5 = 0x54
                        operator new(esi_1)
                    else
                        sub_5c1f80(arg1 + 0x48, edi, &var_34)
                        var_8_1.b = 0
                        int32_t* esi_2 = var_34
                        
                        if (esi_2 != 0)
                            sub_5bd0e0(esi_2)
                            int32_t var_54_4 = 0x54
                            operator new(esi_2)
                        
                        edi += 1
                        
                        if (edi s>= eax_5)
                            goto label_5b97a3
                        
                        continue
        
        ebx.b = 0
        break

int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
