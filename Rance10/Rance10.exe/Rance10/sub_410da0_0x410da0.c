// 函数: sub_410da0
// 地址: 0x410da0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727d96
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_124 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_114 = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_414340(arg2)
else
    void var_90
    (*(*ecx + 0xc))(&var_90, arg3)
    int32_t var_8_1 = 0
    int32_t var_8c
    
    if (var_8c == 0x12 || var_8c == 0x33 || var_8c == 0x13 || var_8c == 0x14 || var_8c == 0x15
            || var_8c == 0x43 || var_8c == 0x50 || var_8c == 0x59 || var_8c == 0x5d)
        void var_10c
        (*(**(arg1 + 8) + 0xc))(&var_10c, arg3)
        var_8_1.b = 1
        int32_t var_110
        
        if (___std_fs_get_file_attributes_by_handle@8(&var_90, &var_110, &var_10c) != 0)
            sub_414470(arg2, var_110.b)
        else
            sub_414340(arg2)
        
        sub_40ad50(&var_10c)
        sub_40ad50(&var_90)
    else
        sub_414340(arg2)
        sub_40ad50(&var_90)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
