// 函数: sub_503fa0
// 地址: 0x503fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = &arg1[0x68]
*arg1 = &partsengine::CGUIModel::`vftable'
int32_t eax_3 = edi[5]

if (eax_3 u>= 0x10)
    sub_403160(*edi, eax_3 + 1, 1)

edi[5] = 0xf
bool cond:0 = edi[5] u< 0x10
edi[4] = 0

if (not(cond:0))
    edi = *edi

*edi = nullptr
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(&arg1[0x4d], 0x18, 4, sub_403320)
int32_t var_20 = 0x40
int32_t var_24_2 = arg1[0x34]
arg1[0x33] = &partsengine::CProjection::`vftable'
operator new(var_24_2)
int32_t var_28_2 = 0x40
int32_t result = operator new(arg1[0x35])
void* ecx = arg1[0x30]

if (ecx != 0)
    result = sub_403160(ecx, (arg1[0x32] - ecx) s>> 2, 4)
    arg1[0x30] = 0
    arg1[0x31] = 0
    arg1[0x32] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
