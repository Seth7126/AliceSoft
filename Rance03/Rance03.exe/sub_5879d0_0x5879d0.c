// 函数: sub_5879d0
// 地址: 0x5879d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7912
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CReignModel::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &sealengine::CReignModel::`vftable'
int32_t var_4 = 0xb
sub_587ca0(arg1)
int32_t* ecx = arg1[0x6d]

if (ecx != 0)
    sub_53a360(ecx)
    arg1[0x6d] = 0

int32_t eax_3 = arg1[0x7d]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x7d] = 0
    arg1[0x7e] = 0
    arg1[0x7f] = 0

arg1[0x79] = &sealengine::CBackCGModel::`vftable'
int32_t* eax_4 = arg1[0x7a]

if (eax_4 != 0)
    sub_528160(eax_4, arg1[0x7b])
    j__free(arg1[0x7a])
    arg1[0x7a] = 0
    arg1[0x7b] = 0
    arg1[0x7c] = 0

var_4.b = 8
sub_5244a0(&arg1[0x71])
int32_t eax_5 = arg1[0x6e]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x6e] = 0
    arg1[0x6f] = 0
    arg1[0x70] = 0

arg1[0x67] = &sealengine::CDebugMode::`vftable'
int32_t eax_6 = arg1[0x68]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0x68] = 0
    arg1[0x69] = 0
    arg1[0x6a] = 0

int32_t** eax_7 = arg1[0x5b]
sub_4200d0(&arg1[0x5b], &var_10, *eax_7, eax_7)
j__free(arg1[0x5b])
arg1[0x3c] = &sealengine::CProjection::`vftable'
int32_t eax_8 = arg1[0x2a]

if (eax_8 != 0)
    j__free(eax_8)
    arg1[0x2a] = 0
    arg1[0x2b] = 0
    arg1[0x2c] = 0

int32_t eax_9 = arg1[0x27]

if (eax_9 != 0)
    j__free(eax_9)
    arg1[0x27] = 0
    arg1[0x28] = 0
    arg1[0x29] = 0

int32_t eax_10 = arg1[0x24]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x24] = 0
    arg1[0x25] = 0
    arg1[0x26] = 0

arg1[9] = &sealengine::CCamera::`vftable'
int32_t var_4_1 = 0xffffffff
int32_t result = sub_5446e0(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
