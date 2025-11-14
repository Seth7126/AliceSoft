// 函数: sub_58c6b0
// 地址: 0x58c6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x114)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x114) = 0

struct sealengine::CShader::VTable** esi = sub_69adc6(0x10)
struct sealengine::CShader::VTable** var_10_1 = esi
int32_t var_4 = 0

if (esi == 0)
    esi = nullptr
else
    *esi = &sealengine::CShader::`vftable'
    esi[1] = arg2
    esi[2].b = (*(*arg2 + 0x90))(eax_2)
    esi[3] = arg3

int32_t var_4_1 = 0xffffffff
*(arg1 + 0x114) = esi
struct sealengine::CShader::VTable** result

if (esi == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t* ecx_4 = esi[1]

if (ecx_4 != 0)
    (*(*ecx_4 + 0xe8))(eax_2)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
