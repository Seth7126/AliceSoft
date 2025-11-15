// 函数: sub_455d10
// 地址: 0x455d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t esi = arg3
uint32_t var_34 = esi

if (arg2 s> 4)
    goto label_455dd5

uint32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
char var_2c = 0
int32_t var_8_1 = 0
uint32_t result

if (sub_6c9360(esi, &var_2c, 4) == 0)
label_455e50:
    
    if (var_18_1 u< 0x10)
    label_455e64:
        result.b = 0
    else
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    label_455e64_1:
        result.b = 0
else
    if (sub_407560(&var_2c, "JDG2") == 0)
        goto label_455e50
    
    int32_t eax_6 = *(esi + 4) + arg2
    
    if (eax_6 u> *(esi + 8))
        goto label_455e50
    
    *(esi + 4) = eax_6
    uint32_t result_1
    
    if (sub_61ec90(esi, &result_1) == 0)
        goto label_455e50
    
    int32_t eax_9 = (*(*arg1 + 0x1c))(eax_2)
    
    if (result_1 != eax_9)
        goto label_455e50
    
    int32_t var_8_2 = 0xffffffff
    sub_403320(&var_2c)
label_455dd5:
    result = arg1[0xb]
    void* ebx_1 = arg1[0xa]
    result_1 = result
    
    if (ebx_1 == result)
    label_455e68:
        result.b = 1
    else
        while (true)
            char* edx_1 = *(esi + 4)
            
            if (&edx_1[4] u> *(esi + 8))
                break
            
            uint32_t ecx_11 =
                ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
            *(esi + 4) = &edx_1[4]
            sub_4569c0(ebx_1 + 0x30, ecx_11)
            void* i = *(ebx_1 + 0x30)
            
            for (int32_t edi_2 = *(ebx_1 + 0x34); i != edi_2; i += 0x84)
                if (sub_45a800(i, arg2, var_34).b == 0)
                    goto label_455e64_2
            
            ebx_1 += 0x3c
            
            if (ebx_1 == result_1)
                goto label_455e68
            
            esi = var_34
        
    label_455e64_2:
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
