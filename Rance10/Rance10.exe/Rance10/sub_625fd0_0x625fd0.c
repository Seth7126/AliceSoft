// 函数: sub_625fd0
// 地址: 0x625fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg2
void* var_34 = edx
void** esi_2
int32_t edi_1

if (*(arg1 + 0x44) == 4)
    edi_1 = *(arg1 + 4)
    esi_2 = **(arg1 + 4)

void* result

if (*(arg1 + 0x44) != 4 || esi_2 == edi_1)
label_6260dc:
    result.b = 1
else
    while (true)
        int32_t ebx_1 = *(edx + 0x1c)
        int32_t ecx = *(edx + 0x20)
        
        if (ebx_1 != ecx && *(edx + 0x28) != *(edx + 0x2c))
            result = esi_2[2]
            
            if (result u< (ecx - ebx_1) s>> 2)
                int32_t edx_1 = *(edx + 0x28)
                char* edx_2 = edx_1 + *(ebx_1 + (result << 2))
                
                if (edx_1 != neg.d(*(ebx_1 + (result << 2))))
                    bool cond:1_1 = *edx_2 != 0
                    void* var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    void* eax_3
                    
                    if (cond:1_1)
                        char* eax_4 = edx_2
                        int32_t ecx_2
                        
                        do
                            ecx_2.b = *eax_4
                            eax_4 = &eax_4[1]
                        while (ecx_2.b != 0)
                        eax_3 = eax_4 - &eax_4[1]
                    else
                        eax_3 = nullptr
                    
                    sub_403490(&var_2c, edx_2, eax_3)
                    int32_t var_8_1 = 0
                    void* var_3c
                    sub_6261a0(arg1 + 0x20, &var_3c, &var_2c)
                    int32_t var_8_2 = 0xffffffff
                    *(var_3c + 0x20) = esi_2[3]
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    esi_2 = *esi_2
                    
                    if (esi_2 == edi_1)
                        goto label_6260dc
                    
                    edx = var_34
                    continue
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
