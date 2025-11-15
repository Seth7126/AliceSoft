// 函数: sub_475800
// 地址: 0x475800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_54 = nullptr
char* var_50 = nullptr
int32_t var_4c = 0
int32_t var_8_1 = 0
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 2
uint32_t eax_5 = edx_1 u>> 0x1f
int32_t eax_6 = eax_5 + edx_1

if (eax_5 != neg.d(edx_1))
    if (eax_6 u> 0xaaaaaaa)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_4173f0(&var_54, eax_6)

void** i = *arg2

for (int32_t edi_1 = arg2[1]; i != edi_1; i = &i[6])
    var_8_1.b = 1
    void* var_48
    char var_30
    char* eax_8 = sub_462db0(&var_30, sub_46d8e0(&var_48, i))
    var_8_1.b = 2
    char* ecx_5 = var_50
    
    if (ecx_5 == var_4c)
        sub_4170d0(&var_54, 1)
        ecx_5 = var_50
    
    if (ecx_5 != 0)
        *(ecx_5 + 0x10) = 0
        *(ecx_5 + 0x14) = 0
        *(ecx_5 + 0x14) = 0xf
        bool cond:0_1 = *(ecx_5 + 0x14) u< 0x10
        *(ecx_5 + 0x10) = 0
        char* eax_9
        
        if (cond:0_1)
            eax_9 = ecx_5
        else
            eax_9 = *ecx_5
        
        *eax_9 = 0
        sub_4056a0(ecx_5, eax_8)
        ecx_5 = var_50
    
    var_50 = &ecx_5[0x18]
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    var_8_1.b = 0
    var_1c = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)

int32_t result = sub_475990(arg1, &var_54, 0)
sub_417070(&var_54)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
