// 函数: sub_44d230
// 地址: 0x44d230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b71a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CSactEngine::VTable** var_14 = arg1
*arg1 = &chipmunk::CSactEngine::`vftable'
int32_t var_4 = 5
void* ecx = arg1[0xb9]

if (ecx != 0)
    (*(*(ecx + 4) + 4))(eax_2)
    arg1[0xb9] = 0

int32_t* ecx_2 = arg1[8]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[8] = 0

int32_t* ecx_3 = arg1[0xb0]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    arg1[0xb0] = 0

int32_t* ecx_4 = arg1[0xad]

if (ecx_4 != 0)
    (**ecx_4)(1)
    arg1[0xad] = 0

sub_44eea0(&arg1[0xa7])
sub_44eea0(&arg1[0xaa])
sub_5eecf0(&arg1[0x6b])
sub_5f2390(&arg1[9])
sub_5f14b0(&arg1[0xf])
arg1[0x63] = 0
int32_t* ecx_10 = arg1[6]

if (ecx_10 != 0)
    (*(*ecx_10 + 4))(eax_2)
    arg1[6] = 0

int32_t* ecx_11 = arg1[4]

if (ecx_11 != 0)
    (*(*ecx_11 + 4))(eax_2)
    arg1[4] = 0

int32_t* ecx_12 = arg1[5]

if (ecx_12 != 0)
    (*(*ecx_12 + 4))(eax_2)
    arg1[5] = 0

arg1[3] = 0
arg1[0xb4] = &chipmunk::CFPS::`vftable'
arg1[0xb1] = &chipmunk::CDrawD3DPluginManager::`vftable'{for `IDrawD3DPluginManager'}
var_4.b = 2
sub_44e4f0(&arg1[0xa2])
void* var_10 = &arg1[0x6b]
arg1[0x6b] = &chipmunk::CDashTextSpriteCreater::`vftable'
var_4.b = 8
sub_5eecf0(&arg1[0x6b])
sub_5f0bd0(&arg1[0x90])
sub_5f0bd0(&arg1[0x7e])
arg1[0x6e] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0x6e])
arg1[0x64] = &chipmunk::CTextSpriteProperty::`vftable'
int32_t var_4_1 = 0xffffffff
int32_t result = sub_5f2300(&arg1[9])
fsbase->NtTib.ExceptionList = ExceptionList
return result
