// 函数: sub_639a70
// 地址: 0x639a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745b11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 0
arg2[4] = 0
arg2[5] = 0
arg2[5] = 7
bool cond:0 = arg2[5] u< 8
int32_t* var_4c = arg2
arg2[4] = 0
int16_t* eax_3

if (cond:0)
    eax_3 = arg2
else
    eax_3 = *arg2

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_40_1 = 1

if (arg3 != arg4)
    int32_t var_64_1 = 0.d
    void* var_3c = nullptr
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    sub_639c70(&var_3c, arg3, arg4)
    int32_t var_8_2 = 1
    void* ebx_1 = var_3c
    void* esi_1 = ebx_1 + ((var_38_1 - ebx_1) s>> 1 << 1)
    (*(*arg1[1] + 0x1c))(ebx_1, esi_1)
    void* var_30
    sub_635110(arg2, sub_633ee0(*arg1, &var_30, ebx_1, esi_1))
    int32_t var_1c
    
    if (var_1c u>= 8)
        sub_403160(var_30, var_1c + 1, 2)
    
    if (ebx_1 != 0)
        sub_403160(ebx_1, (var_34_1 - ebx_1) s>> 1, 2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
