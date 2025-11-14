// 函数: sub_4d6000
// 地址: 0x4d6000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf856
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIScene::VTable** var_14 = arg1
*arg1 = &partsengine::CGUIScene::`vftable'
int32_t var_4 = 0xb
sub_4a8230(&arg1[0x40])
sub_4b51e0(&arg1[0x30])
sub_4b51e0(&arg1[0x33])
arg1[3] = arg1[2]
arg1[0xb] = arg1[0xa]
arg1[0xe] = arg1[0xd]
arg1[1].b = 0
var_4.b = 0xa
sub_4a8180(&arg1[0x40])
arg1[0x3c] = &partsengine::CActivityDataList::`vftable'
int32_t** eax_8 = arg1[0x3d]
int32_t var_10
sub_4d0490(&arg1[0x3d], &var_10, *eax_8, eax_8)
j__free(arg1[0x3d])
var_4.b = 8
sub_4b5080(&arg1[0x2f])
var_4.b = 7
sub_50c100(&arg1[0x2b])
sub_4d8550(&arg1[0x24])
int32_t eax_9 = arg1[0x21]

if (eax_9 != 0)
    j__free(eax_9)
    arg1[0x21] = 0
    arg1[0x22] = 0
    arg1[0x23] = 0

int32_t eax_10 = arg1[0x1e]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x1e] = 0
    arg1[0x1f] = 0
    arg1[0x20] = 0

arg1[0x17] = &partsengine::CMotionDataList<int32_t>::`vftable'
int32_t* ecx_6 = arg1[0x1b]

if (ecx_6 != 0)
    int32_t var_28_6 = var_10
    int32_t* var_2c_1 = ecx_6
    sub_4bf310(ecx_6, arg1[0x1c])
    j__free(arg1[0x1b])
    arg1[0x1b] = 0
    arg1[0x1c] = 0
    arg1[0x1d] = 0

sub_4bd310(&arg1[0x18])
arg1[0x10] = &partsengine::CMotionDataList<int32_t>::`vftable'
int32_t* ecx_8 = arg1[0x14]

if (ecx_8 != 0)
    int32_t var_28_7 = var_10
    int32_t* var_2c_2 = ecx_8
    sub_4bf310(ecx_8, arg1[0x15])
    j__free(arg1[0x14])
    arg1[0x14] = 0
    arg1[0x15] = 0
    arg1[0x16] = 0

sub_4bd310(&arg1[0x11])
int32_t eax_11 = arg1[0xd]

if (eax_11 != 0)
    j__free(eax_11)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t eax_12 = arg1[0xa]

if (eax_12 != 0)
    j__free(eax_12)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t result = arg1[2]

if (result != 0)
    result = j__free(result)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
