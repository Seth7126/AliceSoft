// 函数: sub_10010670
// 地址: 0x10010670
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_1001944b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEnumPins::CEnumPins::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEnumPins::CEnumPins::VTable** var_10_1 = arg1
int32_t var_20 = 0
*arg1 = &CEnumPins::`vftable'{for `IEnumPins'}
arg1[1] = 0
arg1[2] = 0
arg1[3] = arg2
arg1[5] = 1
sub_10012660(&arg1[6])
void* eax_4 = arg1[3]
int32_t var_4 = 0
(*(*(eax_4 + 0xc) + 4))(eax_4 + 0xc)

if (arg3 != 0)
    arg1[1] = *(arg3 + 4)
    arg1[2] = *(arg3 + 8)
    arg1[4] = *(arg3 + 0x10)
    sub_10012750(&arg1[6], arg3 + 0x18)
else
    int32_t eax_8 = (*(arg1[3]->vFunc_0 + 0x14))(eax_2)
    int32_t* ecx_3 = arg1[3]
    arg1[4] = eax_8
    arg1[2] = (*(*ecx_3 + 0x18))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
