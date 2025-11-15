// 函数: sub_637160
// 地址: 0x637160
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
    int32_t eax_3 = sub_638120(arg1, esi, arg3)
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
sub_60ebd0(&var_2c, &arg1[5])
int32_t var_8_2 = 1
int32_t edx = *arg1
int32_t* ecx_5 = arg1[0x10] + (*(esi + 0x20) << 3)
int32_t eax_9 = *ecx_5
int32_t eax_10 = ecx_5[1]
int32_t* var_18 = ecx_5
int32_t var_14 = edx

if (arg4 != 0)
    esi = arg2

if (arg4 == 0 || *eax_10 != edx)
    ebx:1.b = 1
else
    ebx:1.b = 0

int32_t edx_1 = *(esi + 0x18)

if (edx_1 s>= 0 && edx_1 s<= arg4)
    goto label_6372c3

int32_t var_54_3

if (arg4 s< *(esi + 0x14))
    if (ebx:1.b == 0)
        goto label_6372c3
    
    *ecx_5 = arg4 + 1
    ecx_5[1] = &var_14
    var_54_3 = *(esi + 0xc)
    goto label_6372cd

if (arg3 != 0)
    if (ebx:1.b == 0)
        if (arg4 s> 1)
            goto label_6372d9
        
        goto label_6372ad
    
    *ecx_5 = arg4 + 1
    ecx_5[1] = &var_14
    ebx.b = sub_635b70(arg1, *(esi + 0xc))
    
    if (ebx.b == 0)
        ecx_5 = var_18
    label_6372ad:
        *ecx_5 = eax_9
        ecx_5[1] = eax_10
        sub_6364c0(arg1, &var_40)
    label_6372c3:
        var_54_3 = *(*(esi + 0x1c) + 0xc)
    label_6372cd:
        ebx.b = sub_635b70(arg1, var_54_3)
        
        if (ebx.b == 0)
        label_6372d9:
            *arg1 = var_40
            arg1[4] = eax_6
            sub_4274a0(&arg1[1], &var_3c)
            sub_636640(&arg1[5], &var_2c)
else
    ebx.b = sub_635b70(arg1, *(*(esi + 0x1c) + 0xc))
    
    if (ebx.b == 0)
        if (ebx:1.b == 0)
            goto label_6372d9
        
        sub_6364c0(arg1, &var_40)
        *var_18 = arg4 + 1
        var_18[1] = &var_14
        var_54_3 = *(esi + 0xc)
        goto label_6372cd

*var_18 = eax_9
var_18[1] = eax_10
sub_6328f0(&var_40)
int32_t eax_26
eax_26.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_26
