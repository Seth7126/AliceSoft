// 函数: sub_6398c0
// 地址: 0x6398c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_745be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 4)
void* var_3c
sub_636330(*(arg1 + 0xc), &var_3c, arg2, arg3)
int32_t var_14_1 = 0

for (int32_t i = 0; i u< 0x100; i += 1)
    uint32_t var_58 = zx.d(i.w)
    void* var_54
    int32_t eax_7 = sub_636780(sub_639a70(*(arg1 + 0xc), &var_54, &var_58, &var_58:2), &var_3c)
    int32_t var_40
    
    if (var_40 u>= 8)
        sub_403160(var_54, var_40 + 1, 2)
    
    if (eax_7 == 0)
        if (*(edi + 0x18) == eax_7)
            int32_t eax_8 = sub_6e810c(0x20)
            int32_t var_5c_2 = eax_8
            __builtin_memset(eax_8, 0, 0x20)
            *(edi + 0x18) = eax_8
        
        char* edx_3 = (i u>> 3) + *(edi + 0x18)
        *edx_3 |= (1 << ((i & 7) u% 0x20)).b

sub_639a00(arg2, arg3, arg4, edi + 0x28)
int32_t result_1
int32_t result = result_1

if (result u>= 8)
    result = sub_403160(var_3c, result + 1, 2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
