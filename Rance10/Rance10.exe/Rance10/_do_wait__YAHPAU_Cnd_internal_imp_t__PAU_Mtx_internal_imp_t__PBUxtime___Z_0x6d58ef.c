// 函数: ?do_wait@@YAHPAU_Cnd_internal_imp_t@@PAU_Mtx_internal_imp_t@@PBUxtime@@@Z
// 地址: 0x6d58ef
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 0
int32_t eax_3 = __Mtx_getconcrtcs(arg2)

if (arg3 != 0)
    void var_18
    _xtime_get(&var_18, 1)
    __Mtx_clear_owner(arg2)
    void* esi_2 = *arg1
    int32_t eax_7 = __Xtime_diff_to_millis2(arg3, &var_18)
    int32_t esi_3 = *(esi_2 + 4)
    j_sub_4033e0()
    
    if (esi_3(eax_3, eax_7) == 0)
        _xtime_get(&var_18, 1)
        
        if (__Xtime_diff_to_millis2(arg3, &var_18) == 0)
            result = 2
else
    __Mtx_clear_owner(arg2)
    int32_t esi_1 = **arg1
    j_sub_4033e0()
    esi_1(eax_3)

__Mtx_reset_owner(arg2)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
