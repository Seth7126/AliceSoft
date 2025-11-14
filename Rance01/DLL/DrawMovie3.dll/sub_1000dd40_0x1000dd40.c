// 函数: sub_1000dd40
// 地址: 0x1000dd40
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_100191b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct CBaseFilter::CBaseRenderer::VTable** esi = arg1
struct CBaseFilter::CBaseRenderer::VTable** var_10_1 = esi
*esi = &CBaseRenderer::`vftable'{for `CBaseFilter'}
esi[3] = &CBaseRenderer::`vftable'{for `IBaseFilter'}
esi[4] = &CBaseRenderer::`vftable'{for `IAMovieSetup'}
int32_t var_4 = 6
sub_1000caa0(arg1)
sub_1000c850(esi)
void* eax_3 = esi[0x14]

if (eax_3 != 0)
    (*(*(eax_3 + 8) + 0xc))(1)
    esi[0x14] = 0

int32_t* ecx_2 = esi[0x1e]

if (ecx_2 != 0)
    (*(*ecx_2 + 0xc))(1)
    esi[0x1e] = 0

DeleteCriticalSection(&esi[0x31])
DeleteCriticalSection(&esi[0x25])
DeleteCriticalSection(&esi[0x1f])
var_4.b = 2
sub_10011050(&esi[0x17])
var_4.b = 1
sub_10011050(&esi[0x16])
var_4.b = 0
sub_10011050(&esi[0x15])
int32_t var_4_1 = 0xffffffff
int32_t result = sub_1000ea30(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
