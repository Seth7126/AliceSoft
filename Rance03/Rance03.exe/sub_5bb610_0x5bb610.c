// 函数: sub_5bb610
// 地址: 0x5bb610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 u>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
    result = 0xffffffff
else
    void* eax_9 = *(*(arg3 + 8) + (arg2 << 2))
    
    if (eax_9 == 0 || *(eax_9 + 0xc) == 0)
        result = 0xffffffff
    else
        char* edi_1 = *(eax_9 + 8)
        
        if (edi_1 == 0)
            result = 0xffffffff
        else if (*edi_1 != 0)
            int32_t eax_10
            int32_t edx_1
            edx_1:eax_10 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x20) - *(arg1 + 0x1c))
            int32_t edx_2 = edx_1 s>> 2
            int32_t var_4 = 0
            int32_t var_28
            sub_412d60(arg1 + 0x1c, sub_401f60(&var_28, edi_1))
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            result = (edx_2 u>> 0x1f) + edx_2
        else
            result = 0x7fffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
