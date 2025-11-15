// 函数: sub_647770
// 地址: 0x647770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7465f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_264
sub_6cad30(&var_264, arg1 + 0x4c)
void var_35c
sub_577df0(&var_35c)
int32_t var_8_1 = 0
char var_30f = 0
int32_t* var_2dc = arg3
char var_2c0 = 1
void var_21c
sub_5ca020(&var_21c)
var_8_1.b = 1
struct IShaderParam::sealengine::CShaderParam::VTable* var_394
struct IShaderParam::sealengine::CShaderParam::VTable** ecx_3 = &var_394
int32_t var_1cc = *(arg1 + 0x44)
int32_t var_1c8 = *(arg1 + 0x48)
int32_t var_34 = *(arg1 + 0xc)
int128_t var_1c4 = var_264
int32_t var_30 = *(arg1 + 0x10)
int32_t var_64 = 0
int32_t var_184 = 1
int128_t var_254
int128_t var_1b4 = var_254
int32_t var_220 = 0
int32_t var_224 = 2
int128_t var_244
int128_t var_1a4 = var_244
int128_t var_234
int128_t var_194 = var_234
sub_5d6010(ecx_3)
int32_t result
long double x87_r0

if (sub_5d6090(ecx_3, x87_r0, &var_35c, &var_21c, &var_224, 0) != 0)
    void* ecx_15
    
    if ((*(*arg2 + 0xd8))(&var_21c, &var_35c, &var_394) == 0)
    label_647983:
        ecx_15 = &var_21c
    label_647989:
        sub_5c55c0(ecx_15)
        sub_569970(&var_35c)
        result.b = 0
    else
        if ((*(*arg3 + 0x2c))(0, 1, 0, 1) == 0)
            goto label_647983
        
        (*(*arg2 + 0xc8))(1)
        (*(*arg2 + 0xcc))(1)
        (*(*arg2 + 0xd4))(0)
        int32_t* ecx_11 = *(arg1 + 0x30)
        
        if (ecx_11 == 0)
            goto label_647983
        
        if ((*(*ecx_11 + 0x24))(eax_2) == 0)
            goto label_647983
        
        if (sub_64a080(arg1 + 0x2c) == 0)
            goto label_647983
        
        (*(*arg2 + 0xd4))(2)
        ecx_15 = &var_21c
        
        if ((*(*arg2 + 0xec))() == 0)
            goto label_647989
        
        sub_5c55c0(ecx_15)
        sub_569970(&var_35c)
        result.b = 1
else
    sub_5c55c0(&var_21c)
    void* var_274
    int32_t var_26c
    
    if (var_274 != 0)
        sub_403160(var_274, (var_26c - var_274) s>> 6, 0x40)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
