// 函数: sub_60ba70
// 地址: 0x60ba70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd282
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraphEngine::graphengined3d11::CGraphEngine::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &graphengined3d11::CGraphEngine::`vftable'{for `IGraphEngine'}
int32_t var_4 = 0xe
sub_60bca0(arg1)
sub_60d480(arg1)
int32_t eax_3 = arg1[0x9e]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x9e] = 0
    arg1[0x9f] = 0
    arg1[0xa0] = 0

var_4.b = 0xc
arg1[0x8f] = &graphengined3d11::CSamplerStateManager::`vftable'
sub_60fbb0(&arg1[0x8f])
int32_t eax_4 = arg1[0x96]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x96] = 0
    arg1[0x97] = 0
    arg1[0x98] = 0

sub_60a4b0(&arg1[0x93])
sub_60a4b0(&arg1[0x90])
var_4.b = 0xb
arg1[0x87] = &graphengined3d11::CBlendStateManager::`vftable'
sub_60a220(&arg1[0x87])
sub_60a4b0(&arg1[0x8b])
sub_60a4b0(&arg1[0x88])
var_4.b = 0xa
sub_619da0(&arg1[0x6e])
var_4.b = 9
sub_6185a0(&arg1[0x56])
var_4.b = 8
int32_t* ecx_9 = arg1[0x4d]
arg1[0x4b] = &graphengine::CSpecularTableTexture::`vftable'

if (ecx_9 != 0)
    (*(*ecx_9 + 4))(eax_2)
    arg1[0x4d] = 0

int32_t* ecx_10 = arg1[0x4c]

if (ecx_10 != 0)
    (*(*ecx_10 + 4))(eax_2)
    arg1[0x4c] = 0

var_4.b = 7
sub_6096a0(&arg1[0x45])
var_4.b = 6
sub_60dc80(&arg1[0x3f])
var_4.b = 5
sub_60dba0(&arg1[0x39])
var_4.b = 4
sub_60db00(&arg1[0x33])
var_4.b = 3
sub_60da10(&arg1[0x2d])
var_4.b = 2
sub_60d8d0(&arg1[0x27])
var_4.b = 1
sub_60d7f0(&arg1[0x21])
var_4.b = 0
sub_60d5d0(&arg1[0x1b])
arg1[0xb] = &graphengined3d11::CDirect3DDevice::`vftable'
var_10 = &arg1[0xb]
int32_t var_4_1 = 0x10
sub_60aed0(&arg1[0xb])
var_4_1.b = 0xf
sub_60a4b0(&arg1[0x17])
int32_t** eax_7 = arg1[0x14]
sub_4200d0(&arg1[0x14], &var_10, *eax_7, eax_7)
int32_t result = j__free(arg1[0x14])
fsbase->NtTib.ExceptionList = ExceptionList
return result
