// 函数: sub_40dc00
// 地址: 0x40dc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727a26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_120 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
int32_t var_110 = 0

if (ecx == 0 || *(arg1 + 8) == 0)
    sub_414340(arg2)
else
    void var_90
    (*(*ecx + 0xc))(&var_90, arg3)
    int32_t var_8_1 = 0
    int32_t var_8c
    
    if (var_8c == 0x4f || var_8c == 0x4e || var_8c == 0x50)
        void var_10c
        (*(**(arg1 + 8) + 0xc))(&var_10c, arg3)
        var_8_1.b = 1
        int32_t var_108
        
        if (var_108 == 0xa || var_108 == 2 || var_108 == 0x12)
            int32_t eax_7 = sub_41a840(&var_10c)
            int32_t var_24
            int32_t var_20
            
            if (eax_7 s< 0)
                sub_414340(arg2)
            else if (eax_7 u>= (var_20 - var_24) s/ 0x7c)
                sub_414340(arg2)
            else
                sub_414740(arg2, eax_7 * 0x7c + var_24)
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
