// 函数: sub_6861f0
// 地址: 0x6861f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 =
    &graphengined3d11::CGraphEngine::`vftable'{for `common::SuicideRefCounter<class IGraphEngine>'}
sub_686380(arg1)
sub_687e10(arg1)
void* ecx_1 = arg1[0xb1]

if (ecx_1 != 0)
    sub_403160(ecx_1, (arg1[0xb3] - ecx_1) s>> 2, 4)
    arg1[0xb1] = 0
    arg1[0xb2] = 0
    arg1[0xb3] = 0

sub_68a960(&arg1[0xa2])
arg1[0x9a] = &graphengined3d11::CBlendStateManager::`vftable'
sub_6845d0(&arg1[0x9a])
sub_6847f0(&arg1[0x9e])
sub_6847f0(&arg1[0x9b])
sub_693af0(&arg1[0x7b])
sub_6923c0(&arg1[0x5d])
int32_t var_8_1 = 0
int32_t* ecx_8 = arg1[0x51]
arg1[0x4f] = &graphengine::CSpecularTableTexture::`vftable'

if (ecx_8 != 0)
    (*(*ecx_8 + 4))(eax_2)
    arg1[0x51] = 0

int32_t* ecx_9 = arg1[0x50]

if (ecx_9 != 0)
    (*(*ecx_9 + 4))(eax_2)
    arg1[0x50] = 0

sub_683920(&arg1[0x49])
sub_688260(&arg1[0x43])
sub_688300(&arg1[0x3d])
sub_6883a0(&arg1[0x37])
sub_688490(&arg1[0x31])
sub_6885d0(&arg1[0x2b])
sub_6886b0(&arg1[0x25])
sub_688790(&arg1[0x1f])
int32_t result = sub_684e60(&arg1[0xb])
arg1[5] = &common::CSize::`vftable'
arg1[2] = &common::CSize::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
