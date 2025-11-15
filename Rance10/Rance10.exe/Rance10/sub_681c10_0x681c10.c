// 函数: sub_681c10
// 地址: 0x681c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct graphengine::CShaderArchive::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CShaderArchive::`vftable'
sub_681fc0(arg1)
int32_t* eax_3 = arg1[0xb]
int32_t* var_24 = eax_3
sub_6826e0(&arg1[0xb], &var_14, *eax_3)
sub_403160(arg1[0xb], 1, 0x24)
void* ecx_1 = arg1[8]

if (ecx_1 != 0)
    sub_403160(ecx_1, arg1[0xa] - ecx_1, 1)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t eax_7 = arg1[7]

if (eax_7 u>= 0x10)
    eax_7 = sub_403160(arg1[2], eax_7 + 1, 1)

arg1[7] = 0xf
bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0

if (cond:0)
    arg1[2].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

char* eax_8 = arg1[2]
*eax_8 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
