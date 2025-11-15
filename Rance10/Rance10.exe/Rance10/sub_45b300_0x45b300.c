// 函数: sub_45b300
// 地址: 0x45b300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_74
int32_t eax_1 = __security_cookie ^ &var_74

if (arg3 != 0 && arg2 != 0 && arg4 != 0 && arg5 != 0)
    void (* var_294)(int32_t* arg1) __noreturn
    void (** var_1d0)(int32_t* arg1) __noreturn = sub_65eaa0(&var_294)
    var_294 = sub_45b2e0
    void var_210
    int32_t esi
    struct _EXCEPTION_REGISTRATION_RECORD* edi
    int32_t var_2ac_1 = __setjmp3(&var_74, esi, edi, &var_210, 0, edi, esi)
    sub_655a30(sub_654030(&var_1d0), arg4, &var_1d0, arg5)
    sub_654370(&var_1d0)
    sub_6545d0(&var_1d0)
    int32_t var_1ac
    
    if (var_1ac == 3)
        void* var_1cc
        int32_t var_174
        int32_t var_168
        int32_t* eax_8 = (*(var_1cc + 8))(&var_1d0, 1, var_168 * var_174, 1)
        int32_t var_1b4
        int32_t var_1b0
        
        if (var_1b4 != 0 && var_1b0 u> 0)
            *arg3 = var_1b4
            *arg2 = var_1b0
            int32_t var_2ac_2 = var_1b0 * var_1b4 * 3
            int32_t result
            int32_t ecx_8
            result, ecx_8 = sub_705e22()
            
            if (result != 0)
                void* esi_1 = var_1b4 * 3
                int32_t var_170
                int32_t var_158
                
                while (var_158 u< var_170)
                    int32_t var_2ac_3 = ecx_8
                    sub_6547a0(&var_1d0, eax_8)
                    ecx_8 = sub_700660((var_158 - 1) * esi_1 + result, *eax_8, esi_1)
                
                sub_6544d0(&var_1d0)
                sub_654140(&var_1d0)
                @__security_check_cookie@4(eax_1 ^ &var_74)
                return result
    
    sub_654140(&var_1d0)

@__security_check_cookie@4(eax_1 ^ &var_74)
return 0
