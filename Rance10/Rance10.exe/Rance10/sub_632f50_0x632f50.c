// 函数: sub_632f50
// 地址: 0x632f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg5
void* eax_3 = *ecx

if (eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg5:3.b = 0
void var_94
sub_6339c0(&var_94, arg3, arg2, &ecx[1], eax_3, *(eax_3 + 0x1c), *(eax_3 + 0x14), arg6)
int32_t var_8_1 = 0

if (sub_634930(&var_94, arg4, false) != 0)
label_633059:
    arg5:3.b = 1
    
    if (arg4 != 0)
        bool cond:0_1 = arg3 != arg4[6]
        *arg4 = arg7
        int32_t eax_15
        eax_15.b = cond:0_1
        arg4[5] = arg3
        arg4[7].b = eax_15.b
else if (arg3 != arg2 && (arg6.b & 0x40) == 0)
    int32_t var_34
    int32_t var_34_1 = (var_34 | 0x100) & 0xffffdfff
    
    for (int16_t* i = sub_634650(&var_94, arg3 + 2, arg2, nullptr); i != arg2; 
            i = sub_634650(&var_94, &i[1], arg2, nullptr))
        int16_t* i_1 = i
        
        if (sub_634930(&var_94, arg4, false) != 0)
            goto label_633059
    
    int32_t var_40_1 = arg2
    
    if (sub_634930(&var_94, arg4, false) != 0)
        goto label_633059

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
eax_19.b = arg5:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_19
