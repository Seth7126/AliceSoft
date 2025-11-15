// 函数: sub_452a20
// 地址: 0x452a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct commonsystemdata::CCommonSystemData::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &commonsystemdata::CCommonSystemData::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)

int32_t* eax_4 = arg1[8]
int32_t* var_24 = eax_4
sub_4536c0(&arg1[8], &var_14, *eax_4)
sub_403160(arg1[8], 1, 0x54)
int32_t eax_5 = arg1[7]

if (eax_5 u>= 0x10)
    eax_5 = sub_403160(arg1[2], eax_5 + 1, 1)

arg1[7] = 0xf
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:0)
    arg1[2].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* eax_7 = arg1[2]
*eax_7 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
