// 函数: sub_4dc2a0
// 地址: 0x4dc2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7293f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4dd450(arg1 + 0x40)
int32_t i = 0
int32_t edi = 0
int32_t i_1 = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
void* ecx_1 = *(*(arg1 + 0x60) + 8)

if (ecx_1 != 0)
    sub_4ce000(ecx_1, &i_1)
    edi = var_18
    i = i_1

for (; i != edi; i += 0x18)
    void* ecx_2 = *(*(arg1 + 0x60) + 0x68)
    
    if (ecx_2 != 0)
        sub_4db1c0(ecx_2, i)

int32_t result = sub_417070(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
