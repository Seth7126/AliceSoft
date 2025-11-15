// 函数: sub_68c360
// 地址: 0x68c360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74744b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_25c
void* ecx = &var_25c
sub_683180(ecx)
int32_t var_8_1 = 0
char result

if (sub_6834f0(ecx, arg2, arg3, arg4) == 0)
    result = 0
else
    if (sub_683350(arg1 + 0x50, &var_25c) != 0)
        goto label_68c44b
    
    int32_t* ecx_2 = *(arg1 + 0x4c)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0x4c) = 0
    
    int32_t* ecx_3 = *(arg1 + 0x48)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))(eax_2)
        *(arg1 + 0x48) = 0
    
    sub_683600(arg1 + 0x50)
    void* var_270_2 = arg1 + 0x50
    
    if (sub_68cd00(arg1, &var_25c) == 0)
        result = 0
    else if (sub_68cda0(arg1, &var_25c, 0) == 0)
        result = 0
    else
        sub_683440(arg1 + 0x50, &var_25c)
    label_68c44b:
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(arg6))
        void* eax_6 = *(arg1 + 4)
        int32_t var_1c_1 = 0xbf800000
        int32_t var_18_1 = 0x3f800000
        float xmm1_1 = 1f / xmm0_2
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(arg7))
        float var_24 = xmm1_1 + xmm1_1
        float var_20_1 = -2f / xmm0_4
        
        if (sub_684cb0(arg1 + 0x14c, &var_24, *(eax_6 + 0x38)) == 0)
            result = 0
        else
            int32_t var_224[0x80]
            __builtin_memset(&var_224, 0, 0x200)
            int32_t (* ecx_9)[0x80] = &var_224
            
            if (arg5 == 0)
                sub_690640(0, arg3, ecx_9, arg4, arg7)
            else
                sub_690520(0, arg3, ecx_9, arg4, arg6)
            
            if (sub_684cb0(arg1 + 0x160, &var_224, *(*(arg1 + 4) + 0x38)) == 0)
                result = 0
            else if (sub_684c10(arg1 + 0x14c, 0, *(arg1 + 4)) == 0)
                result = 0
            else if (sub_684c60(arg1 + 0x160, *(arg1 + 4)) == 0)
                result = 0
            else
                result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
