// 函数: sub_42beb0
// 地址: 0x42beb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_3c = ebx
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0

while (*(arg1 + 0x10) u> *(arg1 + 8))
    char* ecx = *(arg1 + 8)
    ebx.b = *ecx
    int32_t eax_3
    
    if (ebx.b u< 0x81 || ebx.b u> 0x9f)
        eax_3.b = ebx.b
        eax_3.b += 0x20
    
    char var_4c_2
    
    if ((ebx.b u< 0x81 || ebx.b u> 0x9f) && eax_3.b u> 0xf)
        if (sub_42c6d0(arg1) != 0)
            break
        
        var_4c_2 = ebx.b
    else
        if (ebx.b == 0x81 && ecx[1] == 0x40)
            break
        
        sub_405500(&var_30, 1, *ecx)
        *(arg1 + 8) += 1
        char* eax_5 = *(arg1 + 8)
        
        if (*(arg1 + 0x10) u> eax_5)
            eax_5.b = *eax_5
            var_4c_2 = eax_5.b
        else
            var_4c_2 = 0
    
    sub_405500(&var_30, 1, var_4c_2)
    *(arg1 + 8) += 1

*arg2 = &advengine::CToken::`vftable'
arg2[1] = 1
arg2[7] = 0xf
arg2[6] = 0
arg2[2].b = 0
sub_403590(&arg2[2], &var_30, 0, 0xffffffff)
arg2[8] = 0
arg2[9] = 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
