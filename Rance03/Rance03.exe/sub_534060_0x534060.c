// 函数: sub_534060
// 地址: 0x534060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3c96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDOFFrame::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDOFFrame::VTable** var_10_1 = arg1
*arg1 = &sealengine::CDOFFrame::`vftable'
int32_t var_4 = 1
int32_t* ecx = arg1[0x20]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x20] = 0

arg1[0x29].b = 0
sub_52b110(&arg1[3])
arg1[1] = 0
arg1[2] = 0
var_4.b = 0
int32_t* ecx_2 = arg1[0x20]
arg1[0x1f] = &sealengine::CSprite::`vftable'

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0x20] = 0

arg1[0x29].b = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_52af40(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
