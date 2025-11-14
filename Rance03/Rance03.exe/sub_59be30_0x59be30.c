// 函数: sub_59be30
// 地址: 0x59be30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8751
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CSSAOFrame::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CSSAOFrame::VTable** var_10_1 = arg1
*arg1 = &sealengine::CSSAOFrame::`vftable'
int32_t var_4 = 2
sub_59bf90(arg1)
var_4.b = 1
int32_t result = sub_52af40(&arg1[0x15])
var_4.b = 0
int32_t* ecx_1 = arg1[0xf]
arg1[0xe] = &sealengine::CRenderTarget::`vftable'

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[0xf] = 0

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12].b = 0
arg1[0x13] = 0
arg1[0x14].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = arg1[4]
arg1[3] = &sealengine::CSprite::`vftable'

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)
    arg1[4] = 0

arg1[0xd].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
