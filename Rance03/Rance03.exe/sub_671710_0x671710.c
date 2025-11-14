// 函数: sub_671710
// 地址: 0x671710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6d0060
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct _EXCEPTION_REGISTRATION_RECORD** ebx = nullptr
int32_t var_1c = 0

if (arg2 != 0)
    if (arg2 u<= 0x7ffffff)
        eax_3 = sub_69adc6(arg2 << 5)
        ebx = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = ebx
    
    if (arg2 u> 0x7ffffff || ebx == 0)
        sub_69a4fc()
        noreturn

int32_t var_8_1 = 0
int32_t var_30_2 = arg2
sub_671860(eax_3, arg1[1], *arg1, ebx)
int32_t var_8_2 = 0xffffffff
int32_t ecx_1 = arg1[1]
struct _EXCEPTION_REGISTRATION_RECORD** i = *arg1
int32_t eax_8 = (ecx_1 - i) s>> 5
struct _EXCEPTION_REGISTRATION_RECORD*** esi_1

if (i == 0)
    esi_1 = arg1
else
    for (; i != ecx_1; i = &i[8])
        (*i)->Next(0)
    
    esi_1 = arg1
    j__free(*esi_1)

void* result = &ebx[eax_8 * 8]
esi_1[2] = &ebx[arg2 * 8]
esi_1[1] = result
*esi_1 = ebx
fsbase->NtTib.ExceptionList = ExceptionList
return result
