// 函数: sub_53dff0
// 地址: 0x53dff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4595
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CInstance::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CInstance::VTable** var_10_1 = arg1
*arg1 = &sealengine::CInstance::`vftable'
int32_t var_4 = 0xd
sub_53e260(arg1)
var_4.b = 0xc
sub_4b4d00(&arg1[0x78])
int32_t eax_3 = arg1[0x6c]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x6c] = 0
    arg1[0x6d] = 0
    arg1[0x6e] = 0

int32_t eax_4 = arg1[0x69]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x69] = 0
    arg1[0x6a] = 0
    arg1[0x6b] = 0

if (arg1[0x66] u>= 0x10)
    j__free(arg1[0x61])

arg1[0x66] = 0xf
arg1[0x65] = 0
arg1[0x61].b = 0

if (arg1[0x60] u>= 0x10)
    j__free(arg1[0x5b])

arg1[0x60] = 0xf
arg1[0x5f] = 0
arg1[0x5b].b = 0
arg1[0x50] = &sealengine::CMotionState::`vftable'
arg1[0x49] = &sealengine::CMotionState::`vftable'
var_4.b = 5
arg1[0x34] = &sealengine::CSkeleton::`vftable'
sub_596fd0(&arg1[0x34])

if (arg1[0x46] u>= 0x10)
    j__free(arg1[0x41])

arg1[0x46] = 0xf
arg1[0x45] = 0
arg1[0x41].b = 0
arg1[0x3d] = &sealengine::CBoneCollisionShapeList::`vftable'
sub_52c1c0(&arg1[0x3e])
sub_52c580(&arg1[0x35])
int32_t eax_5 = arg1[0x30]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x30] = 0
    arg1[0x31] = 0
    arg1[0x32] = 0

int32_t eax_6 = arg1[0x1d]

if (eax_6 != 0)
    j__free(eax_6)
    arg1[0x1d] = 0
    arg1[0x1e] = 0
    arg1[0x1f] = 0

int32_t result = arg1[0x1a]

if (result != 0)
    result = j__free(result)
    arg1[0x1a] = 0
    arg1[0x1b] = 0
    arg1[0x1c] = 0

var_4.b = 1
arg1[0xb] = &thread::CCriticalObject<struct sealengine::S3D>::`vftable'
int32_t* ecx_4 = arg1[0x10]
arg1[0xf] = &thread::CCriticalSection::`vftable'

if (ecx_4 != 0)
    result = (**ecx_4)(1)

if (arg1[0xa] u>= 0x10)
    result = j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_5 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_5 != 0)
    result = (**ecx_5)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
