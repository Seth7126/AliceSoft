// 函数: sub_50b590
// 地址: 0x50b590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4cbd50(&arg1[3], arg3, arg2)
int32_t result = sub_50f440(arg1)

if (result.b == 0)
    int32_t eax_3 = arg3[1]
    
    if (eax_3 != 1)
        if (eax_3 == 0x10)
            if (arg1[0x2f] == 0xffffffff)
                arg1[0x2f] = sub_50e5e0(&arg1[0x33])
            
            arg1[0x2e].b = 1
        else if (eax_3 == 0x11)
            *(arg1 + 0xb9) = 1
        
        goto label_50b6de
    
    int32_t ecx_2 = arg1[0x2b]
    result = ecx_2 + 0xc
    int32_t ecx_3 = neg.d(ecx_2)
    
    if (arg2 != (sbb.d(ecx_3, ecx_3, ecx_2 != 0) & result))
        int32_t ecx_6 = arg1[0x2c]
        result = ecx_6 + 0xc
        int32_t ecx_7 = neg.d(ecx_6)
        
        if (arg2 != (sbb.d(ecx_7, ecx_7, ecx_6 != 0) & result))
            int32_t var_34 = 0
            float var_30 = 0f
            sub_522c20(&var_34, &var_30)
            float var_3c
            float var_38
            sub_50f950(arg1, &var_3c, &var_38)
            void var_2c
            sub_4079d0(&arg1[0x39], &arg1[0x33], &var_2c, &arg1[0x39])
            int32_t var_8_1 = 0
            int32_t eax_6 = int.d(_mm_cvtepi32_ps(zx.o(var_30)) - var_38) - arg1[0x86]
            sub_50da00(arg1, &var_2c, int.d(_mm_cvtepi32_ps(zx.o(var_34)) - var_3c) - arg1[0x88], 
                eax_6)
            *(arg1 + 0xba) = 1
            sub_403320(&var_2c)
        label_50b6de:
            result = arg3[1]
            
            if (result == 0x25 || result == 0x27 || result == 8 || result == 0x26 || result == 0x28
                    || result == 0x2e || result == 0xd || result == 0x24 || result == 0x23)
                arg1[0x31] = 0
                *(arg1 + 0xba) = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
