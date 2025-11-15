// 函数: sub_632460
// 地址: 0x632460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *arg2

if (eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int16_t* esi = arg4
int32_t ebx
ebx.b = 0
void var_94
sub_632960(&var_94, esi, arg5, &arg2[1], eax_3, *(eax_3 + 0x1c), *(eax_3 + 0x14), arg6)
int32_t var_8_1 = 0

if (sub_6335d0(&var_94, arg3, false) != 0)
label_632589:
    ebx.b = 1
    
    if (arg3 != 0)
        bool cond:0_1 = esi != arg3[6]
        *arg3 = arg7
        int32_t eax_15
        eax_15.b = cond:0_1
        arg3[5] = esi
        arg3[7].b = eax_15.b
else if (arg4 != arg5 && (arg6.b & 0x40) == 0)
    arg4 = &arg4[1]
    int32_t var_34
    int32_t var_34_1 = (var_34 | 0x100) & 0xffffdfff
    int16_t* ecx_6 = arg5
    int16_t* var_14
    int16_t* eax_9 = *sub_633270(&var_94, &var_14, &arg4[1], arg5, nullptr)
    arg4 = eax_9
    
    while (eax_9 != ecx_6)
        int16_t* var_40_1 = eax_9
        
        if (sub_6335d0(&var_94, arg3, false) != 0)
            goto label_632589
        
        int16_t* eax_12 = &arg4[1]
        arg4 = eax_12
        ecx_6 = arg5
        eax_9 = *sub_633270(&var_94, &var_14, eax_12, arg5, nullptr)
        arg4 = eax_9
    
    int16_t* var_40_2 = ecx_6
    
    if (sub_6335d0(&var_94, arg3, false) != 0)
        goto label_632589

void* var_54

if (var_54 != 0)
    int32_t var_4c
    sub_403160(var_54, (var_4c - var_54) s>> 3, 8)
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0

void var_74
sub_6328f0(&var_74)
sub_6328f0(&var_94)
int32_t eax_19
eax_19.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_19
