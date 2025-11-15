// 函数: sub_562b30
// 地址: 0x562b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct passregister::CPassRegister::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &passregister::CPassRegister::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)

int32_t* eax_4 = arg1[0xb]
int32_t* var_24 = eax_4
sub_44dce0(&arg1[0xb], &var_14, *eax_4)
sub_403160(arg1[0xb], 1, 0x28)
int32_t* eax_5 = arg1[9]
int32_t* var_24_1 = eax_5
sub_513f00(&arg1[9], &var_14, *eax_5)
sub_403160(arg1[9], 1, 0x14)
int32_t eax_6 = arg1[7]

if (eax_6 u>= 0x10)
    eax_6 = sub_403160(arg1[2], eax_6 + 1, 1)

arg1[7] = 0xf
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:0)
    arg1[2].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

char* eax_8 = arg1[2]
*eax_8 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
