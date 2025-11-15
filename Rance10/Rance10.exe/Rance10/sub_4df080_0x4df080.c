// 函数: sub_4df080
// 地址: 0x4df080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734ae8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_84 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_526cb0(arg1 + 0x70, arg2)
void* ecx_1 = *(arg1 + 0x12c)
void* ecx_2

if (ecx_1 != 0)
    ecx_2 = *(ecx_1 + 8)
else
    ecx_2 = data_7fcba0

struct partsengine::CProjection::VTable** result

if (*(ecx_2 + 0x1c) != *(arg1 + 0x2c))
label_4df127:
    int128_t* var_1c = nullptr
    int128_t* i = nullptr
    int32_t var_14_1 = 0
    int32_t var_8_1 = 0
    sub_4efe50(*(*(*(arg1 + 0x140) + 0x88) + 0x98), &var_1c)
    sub_4aae20(var_1c, i)
    int128_t var_74
    sub_4b9c00(&var_74)
    int128_t* esi_1 = var_1c
    
    if (esi_1 != i)
        float* esi_2 = esi_1 + 8
        
        do
            sub_4b9d50(&var_74, esi_2[1], esi_2[2], arg1 + 0x10, esi_2[3], *(esi_2 + 0x10), 
                esi_2[-1], *esi_2, zx.d(esi_2[-2].b), zx.d(*(esi_2 - 7)))
            esi_2 = &esi_2[0xa]
        while (&esi_2[-2] != i)
    
    result = sub_527800(arg1 + 0x70, arg1 + 0x10)
    int128_t* esi_3 = var_1c
    *(arg1 + 0x70) = var_74
    int128_t var_64
    *(arg1 + 0x80) = var_64
    int128_t var_54
    *(arg1 + 0x90) = var_54
    int128_t var_44
    *(arg1 + 0xa0) = var_44
    int128_t var_34
    *(arg1 + 0xb0) = var_34
    int64_t var_24
    *(arg1 + 0xc0) = var_24
    
    if (esi_3 != 0)
        result = sub_403160(esi_3, (var_14_1 - esi_3) s/ 0x28, 0x28)
else
    result = *(ecx_2 + 0x20)
    
    if (result != *(arg1 + 0x30))
        goto label_4df127
    
    if (sub_48b210(*(ecx_2 + 0x34) f- *(arg1 + 0x44)) f> 1.1920929e-07f)
        goto label_4df127
    
    if (sub_48b210(*(ecx_2 + 0x38) f- *(arg1 + 0x48)) f> 1.1920929e-07f)
        goto label_4df127
    
    if (not(sub_48b210(*(ecx_2 + 0x3c) f- *(arg1 + 0x4c)) f<= 1.1920929e-07f))
        goto label_4df127

fsbase->NtTib.ExceptionList = ExceptionList
return result
