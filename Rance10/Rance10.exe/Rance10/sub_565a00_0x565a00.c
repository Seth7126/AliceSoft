// 函数: sub_565a00
// 地址: 0x565a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CApp::`vftable'{for `IGraphPlugin'}
arg1[1] = &sealengine::CApp::`vftable'{for `IMarmotModel'}
sub_565ae0(arg1)
int32_t* ecx = arg1[0x15]

if (ecx != 0)
    struct IGraphPlugin::sealengine::CApp::VTable** var_24_1 = arg1
    int32_t* var_28_1 = ecx
    sub_568960(ecx, arg1[0x16])
    void* ecx_1 = arg1[0x15]
    sub_403160(ecx_1, (arg1[0x17] - ecx_1) s>> 3, 8)
    arg1[0x15] = 0
    arg1[0x16] = 0
    arg1[0x17] = 0

sub_406310(&arg1[7])
void* esi = arg1[6]

if (esi != 0)
    sub_5cadc0(esi)
    int32_t var_24_2 = 0xcc
    operator new(esi)

__seterrormode(&arg1[5])
int32_t var_8_1 = 0
int32_t* ecx_4 = arg1[4]

if (ecx_4 != 0)
    arg1[4] = 0
    (*(*ecx_4 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[5])
fsbase->NtTib.ExceptionList = ExceptionList
return result
