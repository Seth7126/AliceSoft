// 函数: sub_5fb270
// 地址: 0x5fb270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc417
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IShaderParam::sealengine::CShaderParam::VTable* const var_27c
int32_t eax_2 = __security_cookie ^ &var_27c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_238
sub_47b390(&var_238, arg1 + 0x14)
void var_f0
sub_535530(&var_f0)
int32_t var_4 = 0
char var_a3 = 0
int32_t* var_78 = arg3
char var_5c = 1
struct IRenderParam::sealengine::CRenderParam::VTable* var_1f8
sub_58c7e0(&var_1f8)
int32_t var_1a8 = *(arg1 + 0xc)
int32_t var_10c = *(arg1 + 4)
int32_t var_1a4 = *(arg1 + 0x10)
int128_t var_1a0 = var_238
int32_t var_108 = *(arg1 + 8)
int32_t var_13c = 0
int32_t var_160 = 1
int128_t var_228
int128_t var_190 = var_228
struct sealengine::CRenderConfig::VTable* const var_244 = &sealengine::CRenderConfig::`vftable'
int32_t var_23c = 0
int128_t var_218
int128_t var_180 = var_218
int128_t var_208
int128_t var_170 = var_208
int32_t var_240 = 2
var_27c = &sealengine::CShaderParam::`vftable'{for `IShaderParam'}
int32_t var_278 = 0
int32_t var_274 = 0
char var_270 = 0
int32_t var_26c = 0
int32_t var_268 = 0
char var_264 = 0
int32_t var_260 = 0
char var_25c = 0
int32_t var_258 = 0
int32_t var_254 = 0
int32_t var_250 = 0
char var_24c = 0
int32_t var_248 = 0
var_4.b = 3
void* ebx
long double x87_r0

if (sub_591d70(&var_27c, x87_r0, &var_f0, &var_1f8, &var_244, 0) == 0)
    ebx.b = 0
else if ((*(*arg2 + 0xd4))(&var_1f8, &var_f0, &var_27c) == 0)
    ebx.b = 0
else if ((*(*arg3 + 0x2c))(0, 1, 0, 1) == 0)
    ebx.b = 0
else
    (*(*arg2 + 0xc4))(1)
    (*(*arg2 + 0xc8))(1)
    (*(*arg2 + 0xd0))(0)
    
    if ((*(**(arg1 + 0x64) + 0x24))(eax_4) == 0)
        ebx.b = 0
    else
        void* esi_1 = **(arg1 + 0x64)
        int32_t eax_21
        int32_t edx_1
        edx_1:eax_21 = muls.dp.d(0x55555556, (*(esi_1 + 0x20))())
        *(arg1 + 0x64)
        
        if ((*(esi_1 + 0x28))(0, (edx_1 u>> 0x1f) + edx_1) == 0)
            ebx.b = 0
        else
            (*(*arg2 + 0xd0))(2)
            
            if ((*(*arg2 + 0xe8))() == 0)
                ebx.b = 0
            else
                ebx.b = 1

var_27c = &sealengine::CShaderParam::`vftable'{for `IShaderParam'}
var_1f8 = &sealengine::CRenderParam::`vftable'{for `IRenderParam'}
var_4.b = 4
int32_t* var_104

if (var_104 != 0)
    sub_53a360(var_104)
    int32_t var_104_1 = 0

var_4.b = 0
void var_15c
sub_58cec0(&var_15c)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_27c)
return result
