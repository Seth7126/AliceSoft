// 函数: sub_5ac7e0
// 地址: 0x5ac7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
j_sub_57c2e0(arg1 + 0x568)
int32_t* esi = *(arg1 + 0x564)

if (esi != 0)
    sub_586a00(esi)
    int32_t var_24_1 = 0x24
    operator new(esi)

int32_t* ecx_2 = *(arg1 + 0x55c)

if (ecx_2 != 0)
    int32_t var_8_1 = 0
    (*(*ecx_2 + 0x1c))(1)

sub_581770(arg1 + 0x50c)
__seterrormode(arg1 + 0x508)
int32_t var_8_2 = 1
int32_t* ecx_4 = *(arg1 + 0x504)

if (ecx_4 != 0)
    *(arg1 + 0x504) = 0
    int32_t edi_1 = ecx_4[1]
    ecx_4[1] -= 1
    (**ecx_4)(edi_1 - 1)

___crtSetUnhandledExceptionFilter(arg1 + 0x508)
sub_5ac720(arg1 + 0x480)
char* result = sub_59b2c0(arg1 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
