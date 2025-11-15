// 函数: sub_471110
// 地址: 0x471110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_stats@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2[0xc]
void** result

if (esi != 1)
    char var_b9_1
    
    if (esi != 0xf && esi != 0x10 && esi != 0x1d)
        var_b9_1 = 0
    
    if (esi == 0xf || esi == 0x10 || esi == 0x1d || esi == 2)
        var_b9_1 = 1
    
    int32_t ebx_1 = *(arg1 + 0x1c)
    *(arg1 + 0x1c) = esi
    void var_50
    sub_4691b0(&var_50, arg2)
    int32_t var_8_1 = 0
    
    if (esi != 0x14)
        goto label_4711cb
    
    if (ebx_1 == esi)
        int32_t var_20_1 = 0x17
        void var_68
        sub_403360(&var_68, "<<")
        var_8_1.b = 1
        sub_403590(&var_50, &var_68, 0, 0xffffffff)
        var_8_1.b = 0
        sub_403320(&var_68)
    label_4711cb:
        
        if (esi != 0x15)
            goto label_47120c
        
        if (ebx_1 == esi)
            int32_t var_20_2 = 0x18
            void var_80
            sub_403360(&var_80, ">>")
            var_8_1.b = 2
            sub_403590(&var_50, &var_80, 0, 0xffffffff)
            var_8_1.b = 0
            sub_403320(&var_80)
        label_47120c:
            
            if (ebx_1 != 0x11 && ebx_1 != 7 && var_b9_1 != 0)
                if (sub_407560(&var_50, 0x75f834) == 0)
                    int32_t var_20_3 = 0x16
                    sub_467620(arg1 + 0x10, &var_50)
            else if (esi == 0x11)
                sub_467620(arg1 + 4, &var_50)
            else if (esi != 7)
                if (esi != 6 && *(arg1 + 0x10) != *(arg1 + 0x14))
                    do
                        int32_t eax_18 = *(arg1 + 0x10)
                        
                        if (*(eax_18 + (*(arg1 + 0x14) - *(arg1 + 0x10)) s/ 0x38 * 0x38 - 8) == 6)
                            break
                        
                        void var_108
                        sub_4691b0(&var_108, 
                            *(arg1 + 0x10) + (*(arg1 + 0x14) - eax_18) s/ 0x38 * 0x38 - 0x38)
                        int32_t eax_26 = sub_4719d0(var_108)
                        sub_4691b0(&var_108, &var_50)
                        
                        if (eax_26 s< sub_4719d0())
                            break
                        
                        sub_467620(arg1 + 4, 
                            *(arg1 + 0x10) + (*(arg1 + 0x14) - *(arg1 + 0x10)) s/ 0x38 * 0x38
                                - 0x38)
                        sub_408940(*(arg1 + 0x14) - 0x38)
                        *(arg1 + 0x14) -= 0x38
                    while (*(arg1 + 0x10) != *(arg1 + 0x14))
                
                sub_467620(arg1 + 0x10, &var_50)
            else
                while (*(arg1 + 0x10) != *(arg1 + 0x14))
                    void var_b8
                    sub_4691b0(&var_b8, 
                        *(arg1 + 0x10) + (*(arg1 + 0x14) - *(arg1 + 0x10)) s/ 0x38 * 0x38 - 0x38)
                    var_8_1.b = 3
                    sub_408940(*(arg1 + 0x14) - 0x38)
                    *(arg1 + 0x14) -= 0x38
                    int32_t var_88
                    
                    if (var_88 == 6)
                        sub_408940(&var_b8)
                        break
                    
                    sub_467620(arg1 + 4, &var_b8)
                    var_8_1.b = 0
                    sub_408940(&var_b8)
    
    sub_408940(&var_50)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
