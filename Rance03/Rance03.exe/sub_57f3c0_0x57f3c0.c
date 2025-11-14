// 函数: sub_57f3c0
// 地址: 0x57f3c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c6f60
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
    if (arg2 u<= 0x71c71c7)
        eax_3 = sub_69adc6(arg2 * 0x24)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x71c71c7 || esi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_580970(eax_3, arg1[1], *arg1, esi)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x38e38e39, arg1[1] - *arg1)
void* eax_7 = *arg1
int32_t edx_2 = edx_1 s>> 3
int32_t ecx_5 = (edx_2 u>> 0x1f) + edx_2

if (eax_7 != 0)
    int32_t var_2c_3 = ecx_5
    int32_t var_30_1 = ecx_5
    sub_57ffd0(eax_7, arg1[1])
    j__free(*arg1)

*arg1 = esi
arg1[2] = &esi[arg2 * 9]
void* result = &esi[ecx_5 * 9]
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
