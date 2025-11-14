// 函数: sub_5e9f50
// 地址: 0x5e9f50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb7a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys40::CSurfaceUpdater::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys40::CSurfaceUpdater::VTable** var_10_1 = arg1
*arg1 = &sys40::CSurfaceUpdater::`vftable'
int32_t var_4 = 2
sub_5e9a10(&arg1[1])
int32_t* ecx_1 = arg1[0x12]

if (ecx_1 != 0)
    (*(*ecx_1 + 0x40))(eax_2)
    (*(arg1[0x12]->vFunc_0 + 4))()
    arg1[0x12] = 0

arg1[0x13] = &sys40::CDXOption::`vftable'{for `IDXOption'}
var_4.b = 0
int32_t* ecx_3 = arg1[0x12]
arg1[0x11] = &sys40::CGraphEngineFactory::`vftable'

if (ecx_3 != 0)
    (*(*ecx_3 + 0x40))(eax_2)
    (*(arg1[0x12]->vFunc_0 + 4))()
    arg1[0x12] = 0

int32_t var_4_1 = 0xffffffff
arg1[1] = &sys40::CSurfaceD3DUpdater::`vftable'
int32_t result = sub_5e9a10(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
