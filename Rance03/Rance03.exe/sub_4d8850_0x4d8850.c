// 函数: sub_4d8850
// 地址: 0x4d8850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bf990
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
    if (arg2 u<= 0x1f07c1f)
        eax_3 = sub_69adc6(arg2 * 0x84)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x1f07c1f || esi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_4d9f80(eax_3, arg1[1], *arg1, esi)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x3e0f83e1, arg1[1] - *arg1)
void* ecx_3 = *arg1
int32_t edx_2 = edx_1 s>> 5
int32_t eax_8 = (edx_2 u>> 0x1f) + edx_2

if (ecx_3 != 0)
    int32_t var_2c_3 = eax_8
    void* var_30_1 = ecx_3
    sub_4d98b0(ecx_3, arg1[1])
    j__free(*arg1)

*arg1 = esi
arg1[2] = arg2 * 0x84 + esi
void* result = eax_8 * 0x84 + esi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
