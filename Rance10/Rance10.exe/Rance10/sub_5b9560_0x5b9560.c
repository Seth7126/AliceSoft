// 函数: sub_5b9560
// 地址: 0x5b9560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f718
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
void* ebx = arg2
int32_t var_8_1 = 0
sub_5b9460(&var_34, ebx)
char var_11 = *(ebx + 0x18)
int32_t* var_1c
sub_5be180(&var_11, ebx, &var_1c, &var_11, &var_34)
var_8_1.b = 1
int32_t edi = 0
int32_t* esi = var_1c
int32_t eax_7 = (*(ebx + 0x2c) - *(ebx + 0x28)) s>> 2
int32_t** result

if (eax_7 s<= 0)
label_5b967a:
    result = arg1
    *result = esi
else
    while (true)
        if (edi s>= 0 && edi s< (*(ebx + 0x2c) - *(ebx + 0x28)) s>> 2)
            int32_t eax_12 = *(*(ebx + 0x28) + (edi << 2))
            
            if (eax_12 != 0)
                int32_t* var_18
                sub_5b9560(&var_18, eax_12)
                var_8_1.b = 2
                
                if (var_18 != 0)
                    sub_5c1e60(&esi[0x12], &var_18)
                    var_8_1.b = 1
                    int32_t* ebx_1 = var_18
                    
                    if (ebx_1 != 0)
                        sub_5bd0e0(ebx_1)
                        int32_t var_48_4 = 0x54
                        operator new(ebx_1)
                    
                    edi += 1
                    
                    if (edi s>= eax_7)
                        goto label_5b967a
                    
                    ebx = arg2
                    continue
        
        result = arg1
        *result = nullptr
        
        if (esi != 0)
            sub_5bd0e0(esi)
            int32_t var_48_5 = 0x54
            operator new(esi)
        
        break

sub_5b47d0(&var_34)
fsbase->NtTib.ExceptionList = ExceptionList
return result
