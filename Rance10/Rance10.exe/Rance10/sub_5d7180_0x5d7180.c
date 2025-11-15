// 函数: sub_5d7180
// 地址: 0x5d7180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7413db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRenderParam::sealengine::CRenderParam::VTable* var_21c
sub_5ca020(&var_21c)
int32_t var_8_1 = 0
int128_t var_20c = *(arg1 + 0x198)
int128_t var_1fc = *(arg1 + 0x1a8)
int128_t var_1ec = *(arg1 + 0x1b8)
int128_t var_1dc = *(arg1 + 0x1c8)
int128_t var_1c4 = *(arg1 + 0x1d8)
int128_t var_1b4 = *(arg1 + 0x1e8)
int128_t var_1a4 = *(arg1 + 0x1f8)
arg7[0x13].b = arg3
int128_t var_194 = *(arg1 + 0x208)

if (arg4 == 0)
    *(arg7 + 4) = *arg2
    *(arg7 + 0x14) = arg2[1]
    *(arg7 + 0x24) = arg2[2]
    *(arg7 + 0x34) = arg2[3]

struct IShaderParam::sealengine::CShaderParam::VTable* var_258
struct IShaderParam::sealengine::CShaderParam::VTable** ecx_1 = &var_258
arg7[0x11] = arg5
arg7[0x12] = arg6
sub_5d6010(ecx_1)
int32_t result

if (sub_5d6520(ecx_1, arg3, arg4) != 0)
    int32_t* eax_8 = (*(*arg7 + 0x48))(eax_2)
    
    if (eax_8 != 0)
        if ((*(*eax_8 + 0x18))() == 0)
            goto label_5d7316
        
        (*(**arg1 + 0xc4))(1, 0xc0)
        
        if ((*(*eax_8 + 0x2c))(0, 0, 1, zx.d((*(*arg7 + 0x64))())) == 0)
            goto label_5d728c
        
        goto label_5d7316
    
    (*(**arg1 + 0xc4))(eax_8, eax_8)
label_5d7316:
    struct IRenderParam::sealengine::CRenderParam::VTable** ecx_9 = &var_21c
    
    if ((*(**arg1 + 0xd8))(&var_21c, arg7, &var_258) == 0)
        sub_5c55c0(ecx_9)
        result.b = 0
    else
        sub_5c55c0(ecx_9)
        result.b = 1
else
label_5d728c:
    sub_5c55c0(&var_21c)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
