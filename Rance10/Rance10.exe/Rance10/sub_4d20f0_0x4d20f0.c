// 函数: sub_4d20f0
// 地址: 0x4d20f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@DD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ec = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = *(arg1 + 0x10)

if (eax_3 != 0)
    int32_t esi_1 = eax_3[0xd]
    int32_t eax_4 = eax_3[0x21]
    void var_dc
    
    if (eax_4 == 1)
        sub_4d1d70(arg1)
        sub_526a90(&var_dc, arg2)
        int32_t var_1c = 0
        int32_t var_18 = 0
        int32_t var_14 = 0
        int32_t var_8_1 = 0
        sub_4d4be0(arg1 + 0x38, &var_dc)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = sub_4aa740(&var_dc)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    int128_t* arg_8
    
    if (eax_4 == 2)
        if (arg_8.b != 0)
            sub_4aa740(*(arg1 + 0x3c) - 0xcc)
            *(arg1 + 0x3c) -= 0xcc
        
        if (esi_1 s<= (*(arg1 + 0x3c) - *(arg1 + 0x38)) s/ 0xcc)
            sub_4d4a90(arg1 + 0x38, &arg_8, *(arg1 + 0x38))
        
        sub_526a90(&var_dc, arg2)
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_8_2 = 1
        sub_4d4be0(arg1 + 0x38, &var_dc)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_10 = sub_4aa740(&var_dc)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
    
    if (arg_8.b != 0)
        sub_4aa740(*(arg1 + 0x3c) - 0xcc)
        *(arg1 + 0x3c) -= 0xcc
    
    if (esi_1 s<= (*(arg1 + 0x3c) - *(arg1 + 0x38)) s/ 0xcc)
        sub_4d4a90(arg1 + 0x38, &arg_8, *(arg1 + 0x38))
    
    sub_4aa800(arg1 + 0x44, arg1, arg2, *(arg1 + 0x10))
    eax_3 = sub_4d4af0(arg1 + 0x38, arg1 + 0x44)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
