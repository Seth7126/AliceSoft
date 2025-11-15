// 函数: sub_46ec90
// 地址: 0x46ec90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1
int32_t i_2 = i_1
void* var_50 = arg1
sub_417d50(*arg2, arg2[1])
arg2[1] = *arg2
int32_t esi = *(arg1 + 8)
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x2aaaaaab, arg2[2] - *arg2)
int32_t edx_2 = edx_1 s>> 2

if ((edx_2 u>> 0x1f) + edx_2 u< esi)
    if (esi u> 0xaaaaaaa)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_4173f0(arg2, esi)

int32_t* esi_1 = *(arg1 + 4)
int32_t i = *esi_1
i_1 = i

for (; i != esi_1; i = i_1)
    int32_t var_8_1 = 0
    void* var_30
    sub_431bd0(arg2, sub_462ed0(&var_30))
    int32_t var_8_2 = 0xffffffff
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
    
    sub_429080(&i_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
