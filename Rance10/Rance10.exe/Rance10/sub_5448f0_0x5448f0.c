// 函数: sub_5448f0
// 地址: 0x5448f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg3
int32_t var_18 = 0

if (arg4 s>= 0)
    void* eax_4 = sub_4f4e40(data_7fcba4 + 0x124, arg2)
    
    if (eax_4 != 0)
        int32_t var_24 = 0
        int32_t var_20 = 0
        int32_t var_1c = 0
        int32_t var_8_1 = 0
        void* edi = *(eax_4 + 0x44)
        sub_555e00(edi, 0x1a, arg5)
        void* ecx_5 = *(*(*(edi + (arg5 << 2) + 0x7c) + 0x60) + 8)
        int32_t ecx_6
        
        if (ecx_5 == 0)
            ecx_6 = 0
        else
            sub_4cdf40(ecx_5, &var_24)
            ecx_6 = var_20
        
        int32_t esi_1 = var_24
        *(arg3 + 0x14) = 0xf
        *(arg3 + 0x10) = 0
        *arg3 = 0
        
        if ((ecx_6 - esi_1) s/ 0x18 s> arg4)
            sub_403590(arg3, esi_1 + arg4 * 0x18, 0, 0xffffffff)
        
        sub_417070(&var_24)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
*arg3 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
