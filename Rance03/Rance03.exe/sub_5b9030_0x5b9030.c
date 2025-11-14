// 函数: sub_5b9030
// 地址: 0x5b9030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c9240
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct _EXCEPTION_REGISTRATION_RECORD** edi = nullptr
int32_t var_1c = 0

if (arg2 != 0)
    if (arg2 u> 0xfffffff)
        sub_69a4fc()
        noreturn
    
    eax_3 = sub_69adc6(arg2 << 4)
    edi = eax_3
    struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = edi
    
    if (edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t var_30_2 = arg2
sub_5b9910(eax_3, arg1[1], *arg1, edi)
struct _EXCEPTION_REGISTRATION_RECORD** ecx_1 = *arg1
int32_t edx_1 = arg1[1]

if (ecx_1 != 0)
    int32_t var_30_3 = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** var_34_1 = ecx_1
    sub_5b9650(ecx_1, edx_1)
    j__free(*arg1)

arg1[2] = &edi[arg2 * 4]
arg1[1] = ((edx_1 - ecx_1) & 0xfffffff0) + edi
*arg1 = edi
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
