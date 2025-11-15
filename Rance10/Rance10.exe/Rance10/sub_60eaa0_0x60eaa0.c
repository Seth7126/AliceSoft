// 函数: sub_60eaa0
// 地址: 0x60eaa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743241
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t* edi = arg2
*arg1 = *edi
arg1[6] = 0xf
arg1[5] = 0
char* eax_4

if (arg1[6] u< 0x10)
    eax_4 = &arg1[1]
else
    eax_4 = arg1[1]

*eax_4 = 0
sub_403590(&arg1[1], &edi[1], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
void* eax_5

if (arg1[0xc] u< 0x10)
    eax_5 = &arg1[7]
else
    eax_5 = arg1[7]

*eax_5 = 0
sub_403590(&arg1[7], &edi[7], 0, 0xffffffff)
var_8_1.b = 1
arg1[0xd] = &sys43vm::CObjType::`vftable'{for `IDebugFileObjType'}
arg1[0xe] = edi[0xe]
arg1[0xf] = edi[0xf]
arg2 = &arg1[0xd]
sub_600560(&arg1[0x10], &edi[0x10])
var_8_1.b = 2
arg1[0x13] = edi[0x13]
arg1[0x14] = edi[0x14]
int32_t eax_10
eax_10.b = edi[0x15].b
arg1[0x15].b = eax_10.b
arg1[0x16] = edi[0x16]
arg1[0x17] = edi[0x17]
arg2 = &arg1[0x18]
sub_60ecf0(&arg1[0x18], &edi[0x18])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
