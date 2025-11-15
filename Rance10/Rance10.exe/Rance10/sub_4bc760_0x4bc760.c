// 函数: sub_4bc760
// 地址: 0x4bc760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg1[4]
*arg1 = &partsengine::CSurfacePack::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)

struct common::CRect::VTable** edi = arg1[2]

if (edi != 0)
    sub_4bd6b0(edi)
    int32_t var_20_1 = 0x28
    operator new(edi)

if ((arg2 & 1) != 0)
    int32_t var_20_2 = 0x14
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
