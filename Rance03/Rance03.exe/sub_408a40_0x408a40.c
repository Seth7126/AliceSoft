// 函数: sub_408a40
// 地址: 0x408a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b32c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_100
int32_t eax_2 = __security_cookie ^ &var_100
int32_t __saved_edi
int32_t var_110 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_fc = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_40d770(arg2)
else
    void var_f8
    (*(*ecx + 0xc))(&var_f8, arg3)
    int32_t var_4 = 0
    int32_t var_f4
    
    if (var_f4 - 0x12 u<= 7 || var_f4 == 0x1f || var_f4 == 0x20 || var_f4 == 0x33 || var_f4 == 0x34)
        void var_84
        (*(**(arg1 + 8) + 0xc))(&var_84, arg3)
        var_4.b = 1
        char var_fd
        
        if (sub_410020(&var_f8, &var_fd, &var_84) != 0)
            sub_40d890(arg2, var_fd == 0)
        else
            sub_40d770(arg2)
        
        sub_405be0(&var_84)
        sub_405be0(&var_f8)
    else
        sub_40d770(arg2)
        sub_405be0(&var_f8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_100)
return arg2
