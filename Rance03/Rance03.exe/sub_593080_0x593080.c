// 函数: sub_593080
// 地址: 0x593080
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c84ec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IShaderParam::sealengine::CShaderParam::VTable* const var_234
int32_t eax_2 = __security_cookie ^ &var_234
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderParam::sealengine::CRenderParam::VTable* var_1fc
sub_58c7e0(&var_1fc)
int32_t var_4 = 0
int128_t var_1ec = *(arg1 + 0x1bc)
int128_t var_1dc = *(arg1 + 0x1cc)
int128_t var_1cc = *(arg1 + 0x1dc)
int128_t var_1bc = *(arg1 + 0x1ec)
int128_t var_1a4 = *(arg1 + 0x1fc)
int128_t var_194 = *(arg1 + 0x20c)
int128_t var_184 = *(arg1 + 0x21c)
int128_t var_174 = *(arg1 + 0x22c)
struct IDrawParam::sealengine::CDrawParam::VTable* var_f4
sub_535530(&var_f4)
struct IDrawParam::sealengine::CDrawParam::VTable** edi = &var_f4
var_234 = &sealengine::CShaderParam::`vftable'{for `IShaderParam'}

if (arg6 != 0)
    edi = arg6

int32_t var_230 = 0
int32_t var_22c = 0
char var_228 = 0
int32_t var_224 = 0
edi[0x13].b = arg3
int32_t var_220 = 0
char var_21c = 0
*(edi + 4) = *arg2
int32_t var_218 = 0
char var_214 = 0
int32_t var_210 = 0
*(edi + 0x14) = arg2[1]
int32_t var_20c = 0
int32_t var_208 = 0
char var_204 = 0
*(edi + 0x24) = arg2[2]
int32_t var_200 = 0
int128_t xmm0_11 = arg2[3]
edi[0x11] = arg4
*(edi + 0x34) = xmm0_11
edi[0x12] = arg5
var_4.b = 2
void* ebx

if (sub_592200(&var_234, arg3) == 0)
    ebx.b = 0
else
    int32_t* eax_10 = (*edi)->vFunc_17(eax_4)
    int32_t eax_11 = **(arg1 + 4)
    
    if (eax_10 != 0)
        (*(eax_11 + 0xc0))(1, 0xc0)
        
        if ((*(*eax_10 + 0x2c))(0, 0, 1, zx.d((*edi)->vFunc_24())) != 0)
            goto label_593295
        
        ebx.b = 0
    else
        (*(eax_11 + 0xc0))(eax_10, eax_10)
    label_593295:
        
        if ((*(**(arg1 + 4) + 0xd4))(&var_1fc, edi, &var_234) == 0)
            ebx.b = 0
        else
            ebx.b = 1

var_234 = &sealengine::CShaderParam::`vftable'{for `IShaderParam'}
var_f4 = &sealengine::CDrawParam::`vftable'{for `IDrawParam'}
var_1fc = &sealengine::CRenderParam::`vftable'{for `IRenderParam'}
int32_t var_4_1 = 3
int32_t* var_108

if (var_108 != 0)
    sub_53a360(var_108)
    int32_t var_108_1 = 0

int32_t var_4_2 = 0xffffffff
void var_160
sub_58cec0(&var_160)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_234)
return result
