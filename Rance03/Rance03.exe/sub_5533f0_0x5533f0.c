// 函数: sub_5533f0
// 地址: 0x5533f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4ef4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_14 = arg1
*arg1 = &sealengine::CMotionObject::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 6
sub_5536b0(arg1)
arg1[0x51] = &sealengine::CSphereVolume::`vftable'
var_4.b = 4
int32_t* ecx = arg1[0x4f]
arg1[0x4e] = &sealengine::CDebugNormal::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x4f] = 0

arg1[0x50].b = 0
arg1[0x46] = &sealengine::CMatrixList::`vftable'{for `IMatrixList'}
int32_t eax_4 = arg1[0x47]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x47] = 0
    arg1[0x48] = 0
    arg1[0x49] = 0

int32_t eax_5 = arg1[0x43]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x43] = 0
    arg1[0x44] = 0
    arg1[0x45] = 0

var_4.b = 1
sub_549a50(&arg1[9])
arg1[6] = &sealengine::CMaterialList::`vftable'
void* var_10 = &arg1[6]
var_4.b = 7
sub_51faa0(&arg1[6])
int32_t** eax_6 = arg1[7]
sub_4200d0(&arg1[7], &var_10, *eax_6, eax_6)
int32_t result = j__free(arg1[7])
int32_t var_4_1 = 0xffffffff
int32_t* ecx_4 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_4 != 0)
    result = (**ecx_4)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
