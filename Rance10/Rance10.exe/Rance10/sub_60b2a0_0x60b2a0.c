// 函数: sub_60b2a0
// 地址: 0x60b2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
void* var_38 = edi
char* edx = *(edi + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(edi + 8))
    result.b = 0
else
    int32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(edi + 4) = &edx[4]
    int32_t ebx_1
    
    if (esi_7 u> 0)
        *(arg1 + 0x20) = *(arg1 + 0x1c)
        int32_t var_34 = 0
        sub_4d4cc0(arg1 + 0x1c, esi_7, &var_34)
        *(arg1 + 0x2c) = *(arg1 + 0x28)
        ebx_1 = 0
    
    if (esi_7 u<= 0 || esi_7 == 0)
    label_60b3dd:
        result.b = 1
    else
        while (true)
            struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
            void* var_1c_1 = nullptr
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (sub_61ed80(edi, &var_2c) == 0)
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                break
            
            *(*(arg1 + 0x1c) + (ebx_1 << 2)) = *(arg1 + 0x2c) - *(arg1 + 0x28)
            sub_405950(arg1 + 0x28, var_1c_1 + 1 + *(arg1 + 0x2c) - *(arg1 + 0x28))
            char* edx_1 = &var_2c
            
            if (var_18_1 u>= 0x10)
                edx_1 = var_2c.d
            
            sub_700660(*(arg1 + 0x28) + *(*(arg1 + 0x1c) + (ebx_1 << 2)), edx_1, var_1c_1 + 1)
            int32_t var_8_2 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            edi = var_38
            ebx_1 += 1
            
            if (ebx_1 u>= esi_7)
                goto label_60b3dd
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
