// 函数: sub_58ca60
// 地址: 0x58ca60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7bfe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IRenderParam::sealengine::CRenderParam::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderParam::sealengine::CRenderParam::VTable** var_10_1 = arg1
*arg1 = &sealengine::CRenderParam::`vftable'{for `IRenderParam'}
int32_t var_4 = 0
int32_t* ecx = arg1[0x3d]

if (ecx != 0)
    sub_53a360(ecx)
    arg1[0x3d] = 0

int32_t var_4_1 = 0xffffffff
int32_t result = sub_58cec0(&arg1[0x27])
fsbase->NtTib.ExceptionList = ExceptionList
return result
