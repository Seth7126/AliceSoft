// 函数: sub_56d680
// 地址: 0x56d680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK* i = *(arg1 + 0xc)
int32_t edi = *(arg1 + 0x10)
struct common::CSize::VTable** arg_4
struct common::CSize::VTable** ebx = arg_4

for (; i != edi; i = &i[1])
    if (sub_56c5a0(i->Ptr, ebx) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return true

sub_56d920(&arg_4, arg1)
int32_t var_8_1 = 0
struct common::CSize::VTable** esi = arg_4

if (sub_56c5a0(esi, ebx) != 0)
    sub_56d990(arg1 + 0xc, &arg_4)
    esi = arg_4
    ebx.b = 1
else
    ebx.b = 0

if (esi != 0)
    sub_56d020(&esi[7])
    sub_55c120(&esi[4])
    int32_t var_2c_4 = 0x28
    *esi = &common::CSize::`vftable'
    operator new(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
