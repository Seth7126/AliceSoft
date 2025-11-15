// 函数: sub_6353a0
// 地址: 0x6353a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745aa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2

if (*(esi + 0x24) == 1)
    int32_t eax_3 = sub_6367f0(arg1, esi, arg3)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t var_40 = *arg1
int32_t ebx
ebx.b = 0
void var_3c
sub_4275f0(&var_3c, &arg1[1])
int32_t eax_6 = arg1[4]
int32_t var_8_1 = 0
void var_2c
sub_636730(&var_2c, &arg1[5])
int32_t var_8_2 = 1
int32_t* ecx_5 = arg1[0x10] + (*(esi + 0x20) << 3)
int32_t eax_9 = *ecx_5
int32_t eax_10 = ecx_5[1]
int32_t eax_11 = *arg1
int32_t* var_18 = ecx_5
int32_t var_14 = eax_11

if (arg4 != 0)
    esi = arg2

if (arg4 == 0 || *eax_10 != eax_11)
    ebx:1.b = 1
else
    ebx:1.b = 0

int32_t eax_12 = *(esi + 0x18)

if (eax_12 s>= 0 && eax_12 s<= arg4)
    goto label_635507

int32_t var_54_3

if (arg4 s< *(esi + 0x14))
    if (ebx:1.b == 0)
        goto label_635507
    
    *ecx_5 = arg4 + 1
    ecx_5[1] = &var_14
    var_54_3 = *(esi + 0xc)
    goto label_635511

if (arg3 != 0)
    if (ebx:1.b == 0)
        if (arg4 s> 1)
            goto label_63551d
        
        goto label_6354f1
    
    *ecx_5 = arg4 + 1
    ecx_5[1] = &var_14
    ebx.b = sub_634030(arg1, *(esi + 0xc))
    
    if (ebx.b == 0)
        ecx_5 = var_18
    label_6354f1:
        *ecx_5 = eax_9
        ecx_5[1] = eax_10
        sub_634ff0(arg1, &var_40)
    label_635507:
        var_54_3 = *(*(esi + 0x1c) + 0xc)
    label_635511:
        ebx.b = sub_634030(arg1, var_54_3)
        
        if (ebx.b == 0)
        label_63551d:
            *arg1 = var_40
            arg1[4] = eax_6
            sub_4274a0(&arg1[1], &var_3c)
            sub_635030(&arg1[5], &var_2c)
else
    ebx.b = sub_634030(arg1, *(*(esi + 0x1c) + 0xc))
    
    if (ebx.b == 0)
        if (ebx:1.b == 0)
            goto label_63551d
        
        sub_634ff0(arg1, &var_40)
        *var_18 = arg4 + 1
        var_18[1] = &var_14
        var_54_3 = *(esi + 0xc)
        goto label_635511

*var_18 = eax_9
var_18[1] = eax_10
sub_6328f0(&var_40)
int32_t eax_27
eax_27.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_27
