// 函数: sub_687f20
// 地址: 0x687f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20
sub_4275f0(&var_20, &arg1[0xb1])
int32_t var_8_1 = 0
int32_t* ecx_1 = var_20
int32_t edi = 0
int32_t* esi = ecx_1
int32_t var_1c
uint32_t ebx_3 = (var_1c - ecx_1 + 3) u>> 2

if (ecx_1 u> var_1c)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        (*(**esi + 0x10))(eax_2)
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = (*(*arg1 + 0xfc))(eax_2)
int32_t* ecx_4 = var_20
int32_t var_18

if (ecx_4 != 0)
    result = sub_403160(ecx_4, (var_18 - ecx_4) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
