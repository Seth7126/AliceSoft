// 函数: sub_5f3140
// 地址: 0x5f3140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6cc030
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
    if (arg2 u<= 0x4924924)
        eax_3 = sub_69adc6(arg2 * 0x38)
        edi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = edi
    
    if (arg2 u> 0x4924924 || edi == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t var_30_2 = arg2
sub_5f3c20(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_7 = arg1[1]
int32_t* i = *arg1
void* ecx_2 = eax_7 - i
int32_t* esi_1

if (i == 0)
    esi_1 = arg1
else
    for (; i != eax_7; i = &i[0xe])
        (**i)(0)
    
    esi_1 = arg1
    j__free(*esi_1)

*esi_1 = edi
esi_1[2] = &edi[arg2 * 0xe]
void* result = &edi[ecx_2 s/ 0x38 * 0xe]
esi_1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
