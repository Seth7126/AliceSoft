// 函数: sub_467420
// 地址: 0x467420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c9a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
void* eax_3

if (*(arg2 + 0x20) != 0)
    eax_3 = *(arg2 + 0x24)

char* eax_4

if (*(arg2 + 0x20) == 0 || eax_3 == *(arg2 + 0x1c))
    eax_4 = nullptr
else
    eax_4 = eax_3 + 8

sub_467620(&var_20, eax_4)
int32_t ebx = 1

while (true)
    if (*(arg2 + 0x20) != 0 && *(arg2 + 0x24) != *(arg2 + 0x1c))
        void* eax_7 = **(arg2 + 0x24)
        *(arg2 + 0x24) = eax_7
        
        if (*(arg2 + 0x20) != 0 && eax_7 != *(arg2 + 0x1c) && eax_7 != 0xfffffff8)
            sub_467620(&var_20, eax_7 + 8)
            int32_t ecx_2 = ebx + 1
            
            if (*(eax_7 + 0x38) != 6)
                ecx_2 = ebx
            
            ebx = ecx_2 - 1
            
            if (*(eax_7 + 0x38) != 7)
                ebx = ecx_2
            
            if (ebx s> 0)
                continue
            
            struct exfile::CReversePolishNotation::VTable* const var_44 =
                &exfile::CReversePolishNotation::`vftable'
            int32_t var_40
            __builtin_memset(&var_40, 0, 0x18)
            var_8_1.b = 2
            int32_t var_28_1 = 1
            char var_24_1 = 0
            sub_471070(&var_44, &var_20)
            var_8_1.b = 3
            char eax_8 = sub_471410(&var_44, arg1)
            var_44 = &exfile::CReversePolishNotation::`vftable'
            ebx.b = eax_8
            int32_t var_34
            sub_4676f0(&var_34)
            sub_4676f0(&var_40)
            break
    
    ebx.b = 0
    break

sub_4676f0(&var_20)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
