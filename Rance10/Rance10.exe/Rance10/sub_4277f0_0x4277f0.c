// 函数: sub_4277f0
// 地址: 0x4277f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CFunctionSyntax::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &advengine::CFunctionSyntax::`vftable'
sub_427910(arg1)
arg1[0x10] = &advengine::CCharMap::`vftable'
void* ecx = arg1[0x11]

if (ecx != 0)
    sub_403160(ecx, arg1[0x13] - ecx, 1)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

void* ecx_1 = arg1[0xd]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0xf] - ecx_1) s>> 2, 4)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t* eax_8 = arg1[0xb]
int32_t* var_24 = eax_8
sub_4292e0(&arg1[0xb], &var_14, *eax_8)
sub_403160(arg1[0xb], 1, 0x28)
sub_429140(&arg1[7])
int32_t eax_9 = arg1[6]

if (eax_9 u>= 0x10)
    eax_9 = sub_403160(arg1[1], eax_9 + 1, 1)

arg1[6] = 0xf
bool cond:0 = arg1[6] u< 0x10
arg1[5] = 0

if (cond:0)
    arg1[1].b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9

char* eax_11 = arg1[1]
*eax_11 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
