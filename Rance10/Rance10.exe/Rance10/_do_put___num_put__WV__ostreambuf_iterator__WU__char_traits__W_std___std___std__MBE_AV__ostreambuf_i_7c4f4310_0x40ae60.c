// 函数: ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
// 地址: 0x40ae60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = (*(**(*(arg1 + 0x10) + 4) + 0x2c))(arg2, arg3)
char* result

if (ecx_1 != 0)
    void var_94
    sub_414a00(&var_94, ecx_1, *(arg1 + 0xc) + 0x20)
    int32_t var_8_1 = 0
    int32_t* ecx_3 = data_7fcb38
    
    if (ecx_3 != 0 && (*(*ecx_3 + 0x10))(eax_2) != 0)
        void* ecx_4 = *(data_7fcb38 + 0x14)
        
        if (ecx_4 != 0)
            int32_t var_4c
            int32_t var_a8_2 = var_4c
            struct _EXCEPTION_REGISTRATION_RECORD** var_50
            sub_41da40(ecx_4, var_50)
    
    sub_40ad50(&var_94)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
