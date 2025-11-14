// 函数: sub_435ec0
// 地址: 0x435ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5b52
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CFunctionSyntax::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &advengine::CFunctionSyntax::`vftable'
int32_t var_4 = 5
sub_435fe0(arg1)
void* ecx = arg1[0x1e]

if (ecx != 0)
    struct advengine::CFunctionSyntax::VTable** var_1c_1 = arg1
    void* var_20_1 = ecx
    sub_438160(ecx, arg1[0x1f])
    j__free(arg1[0x1e])
    arg1[0x1e] = 0
    arg1[0x1f] = 0
    arg1[0x20] = 0

int32_t eax_3 = arg1[0x1b]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x1b] = 0
    arg1[0x1c] = 0
    arg1[0x1d] = 0

var_4.b = 2
sub_435c20(&arg1[0x18])
var_4.b = 1
int32_t result = sub_435c20(&arg1[0x15])
arg1[0xb] = &advengine::CToken::`vftable'

if (arg1[0x12] u>= 0x10)
    result = j__free(arg1[0xd])

arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
arg1[1] = &advengine::CToken::`vftable'

if (arg1[8] u>= 0x10)
    result = j__free(arg1[3])

arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
