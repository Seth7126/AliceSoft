// 函数: sub_5281f0
// 地址: 0x5281f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c3490
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct _EXCEPTION_REGISTRATION_RECORD** esi = nullptr
int32_t var_18 = 0

if (arg2 != 0)
    if (arg2 u<= 0x4924924)
        eax_3 = sub_69adc6(arg2 * 0x38)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x4924924 || esi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_528350(eax_3, arg1[1], *arg1, esi)
int32_t ecx_2 = arg1[1] - *arg1
int32_t* eax_8 = *arg1

if (eax_8 != 0)
    sub_528160(eax_8, arg1[1])
    j__free(*arg1)

*arg1 = esi
arg1[2] = &esi[arg2 * 0xe]
void* result = &esi[ecx_2 s/ 0x38 * 0xe]
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
