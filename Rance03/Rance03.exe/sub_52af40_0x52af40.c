// 函数: sub_52af40
// 地址: 0x52af40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c37a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CBlurBuffer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CBlurBuffer::VTable** var_10_1 = arg1
*arg1 = &sealengine::CBlurBuffer::`vftable'
int32_t var_4 = 2
int32_t result = sub_52b110(arg1)
var_4.b = 1
int32_t* ecx = arg1[0x12]
arg1[0x11] = &sealengine::CSprite::`vftable'

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[0x12] = 0

arg1[0x1b].b = 0
var_4.b = 0
int32_t* ecx_1 = arg1[0xb]
arg1[0xa] = &sealengine::CRenderTarget::`vftable'

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[0xb] = 0

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe].b = 0
arg1[0xf] = 0
arg1[0x10].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = arg1[4]
arg1[3] = &sealengine::CRenderTarget::`vftable'

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))(eax_2)
    arg1[4] = 0

arg1[5] = 0
arg1[6] = 0
arg1[7].b = 0
arg1[8] = 0
arg1[9].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
