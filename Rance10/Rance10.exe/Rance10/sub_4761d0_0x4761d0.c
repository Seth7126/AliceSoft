// 函数: sub_4761d0
// 地址: 0x4761d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7293f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
void* ecx
sub_4756c0(ecx, &var_1c)
int32_t edi = var_1c
int32_t ebx

if ((var_18 - edi) s/ 0x18 s<= arg2 || arg2 s< 0)
    ebx.b = 0
else
    int32_t eax_8 = arg2 * 3
    int32_t* ecx_6 = edi + (eax_8 << 3)
    
    if (*(edi + (eax_8 << 3) + 0x14) u>= 0x10)
        ecx_6 = *ecx_6
    
    (*(*arg1 + 4))(ecx_6)
    ebx.b = 1

sub_417070(&var_1c)
int32_t eax_10
eax_10.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
