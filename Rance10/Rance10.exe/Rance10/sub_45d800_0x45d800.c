// 函数: sub_45d800
// 地址: 0x45d800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_254
int32_t var_c = __security_cookie ^ &var_254
int32_t eax_1

if (arg4 != 0 && arg5 != 0)
    eax_1 = *arg2
    int32_t ecx = arg2[1]
    
    if (eax_1 != ecx && arg4 * arg5 * 3 == ecx - eax_1)
        void (* var_98)(int32_t* arg1) __noreturn
        void (** var_264)(int32_t* arg1) __noreturn = &var_98
        void (** var_240)(int32_t* arg1) __noreturn = sub_65eaa0(&var_98)
        sub_64a9b0(&var_240)
        char* var_24c = nullptr
        char* var_250 = nullptr
        sub_6558f0(&var_250, &var_24c, &var_240, &var_250)
        int32_t var_224 = arg4
        int32_t var_21c = 3
        int32_t var_218 = 2
        sub_652720(&var_240)
        sub_6525c0(&var_240, 0x50)
        int32_t ecx_8 = sub_64acd0(&var_240)
        int32_t i_1
        
        for (int32_t i = i_1; i u< arg5; i = i_1)
            int32_t var_264_1 = ecx_8
            int32_t var_248 = i * arg4 * 3 + *arg2
            ecx_8 = sub_64ad40(&var_240, &var_248)
        
        sub_64ab80(&var_240)
        char* eax_8 = var_250
        int32_t ebx_1
        ebx_1.b = eax_8 != 0
        
        if (ebx_1.b != 0)
            sub_405950(arg3, eax_8)
            sub_700660(*arg3, var_24c, var_250)
        
        void* var_23c
        
        if (var_23c != 0)
            (*(var_23c + 0x28))(&var_240)
        
        eax_8.b = ebx_1.b
        @__security_check_cookie@4(var_c ^ &var_254)
        return eax_8

eax_1.b = 0
@__security_check_cookie@4(var_c ^ &var_254)
return eax_1
