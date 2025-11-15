// 函数: sub_608750
// 地址: 0x608750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742991
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_6227b0(arg3, arg2)

if (eax_3 != 0 && *(eax_3 + 0x14) != 0)
    char* edi_1 = *(eax_3 + 0x10)
    
    if (edi_1 != 0)
        if (*edi_1 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0x7fffffff
        
        if (*(arg1 + 0x20) == *(arg1 + 0x24))
            sub_4170d0(arg1 + 0x1c, 1)
        
        char* ecx_4 = *(arg1 + 0x20)
        arg2 = ecx_4
        arg3 = ecx_4
        int32_t var_8_1 = 0
        
        if (ecx_4 != 0)
            sub_403360(ecx_4, edi_1)
        
        *(arg1 + 0x20) += 0x18
        int32_t eax_6
        int32_t edx
        edx:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x20) - *(arg1 + 0x1c))
        int32_t edx_1 = edx s>> 2
        fsbase->NtTib.ExceptionList = ExceptionList
        return (edx_1 u>> 0x1f) - 1 + edx_1

fsbase->NtTib.ExceptionList = ExceptionList
return 0xffffffff
