// 函数: sub_5c9e60
// 地址: 0x5c9e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c362
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CShader::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x83]
arg1[0x83] = 0

if (ecx != 0)
    int32_t var_8_1 = 0
    (**ecx)(1)
    int32_t var_8_2 = 0xffffffff

void arg_4
struct sealengine::CShader::VTable*** result = sub_5c9fa0(&var_14, &arg_4)

if (&arg1[0x83] != result)
    struct sealengine::CShader::VTable** edx_1 = *result
    *result = nullptr
    int32_t* ecx_2 = arg1[0x83]
    arg1[0x83] = edx_1
    
    if (ecx_2 != 0)
        int32_t var_8_3 = 1
        (**ecx_2)(1)
        int32_t var_8_4 = 0xffffffff

struct sealengine::CShader::VTable** ecx_3 = var_14

if (ecx_3 != 0)
    int32_t var_8_5 = 2
    (*ecx_3)->vFunc_0(1)
    int32_t var_8_6 = 0xffffffff

void* ecx_4 = arg1[0x83]

if (ecx_4 == 0)
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t* ecx_7 = *(ecx_4 + 4)

if (ecx_7 != 0)
    (*(*ecx_7 + 0xec))(eax_2)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
