// 函数: sub_409ec0
// 地址: 0x409ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b33a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_esi
int32_t var_bc = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
var_b4 = 0

if (ecx != 0)
    void var_98
    (*(*ecx + 0xc))(&var_98, arg3)
    void* ecx_2 = &var_98
    int32_t var_c_1 = 0
    
    if (sub_421dd0(ecx_2) != 0)
    label_409f6b:
        var_c_1.b = 1
        void var_b0
        sub_40da30(arg2, sub_4220a0(&var_98, &var_b0))
        sub_401fb0(&var_b0)
    else
        if (sub_421e00(ecx_2) != 0)
            goto label_409f6b
        
        if (sub_421e20(ecx_2) != 0)
            goto label_409f6b
        
        sub_40d770(arg2)
    
    sub_405be0(&var_98)
else
    sub_40d770(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return arg2
