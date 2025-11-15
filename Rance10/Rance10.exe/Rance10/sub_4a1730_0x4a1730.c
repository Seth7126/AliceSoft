// 函数: sub_4a1730
// 地址: 0x4a1730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730fa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0xad]

if (ecx != 0)
    result = (**ecx)(0x760e0c)
    
    if (result != 0)
        int32_t eax_4 = (*result)->__offset(0x20).d(eax_2)
        int32_t eax_5 = (*result)->__offset(0x24).d()
        int32_t ebx
        ebx:1.b = (*(*arg1 + 0x74))()
        int32_t var_54_1 = arg1[0x1a]
        int32_t ecx_5 = arg1[0x1b]
        struct common::CSize::VTable* const var_58 = &common::CSize::`vftable'
        int32_t var_50_1 = ecx_5
        int32_t var_8_1 = 0
        int32_t eax_8 = (*(*arg1 + 0x6c))()
        int32_t eax_9 = (*(*arg1 + 0x68))()
        struct common::CPoint::VTable* var_4c = &common::CPoint::`vftable'
        int32_t var_48_1 = eax_9
        int32_t var_44_1 = eax_8
        var_8_1.b = 1
        arg1[0x7d].b = 0
        *(arg1 + 0x121) = 1
        sub_4a5040(&arg1[0x2f])
        
        if (arg1[0x43] != 0)
            ebx.b = (*(*arg1[0x43] + 0x10))()
            
            if (ebx.b != 0 && arg1[0x43] != 0)
                (*(*arg1[0x43] + 0x1c))()
        else
            ebx.b = 0
        
        void var_2c
        
        if (ebx:1.b != 0 && sub_49e170(&arg1[-1]) == 0)
            sub_403360(&var_2c, 0x7612f4)
            var_8_1.b = 2
            sub_6c52e0(&var_2c)
            var_8_1.b = 1
            sub_403320(&var_2c)
        
        float var_30
        int32_t* ecx_15 = &var_30
        int32_t var_34 = 0x3f800000
        int32_t var_38 = 0x3dcccccd
        var_30 = arg2
        
        if (1f <= arg2)
            ecx_15 = &var_34
        
        int32_t* eax_15 = &var_38
        bool cond:1_1 = *ecx_15 > 0.100000001f
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(eax_5))
        
        if (cond:1_1)
            eax_15 = ecx_15
        
        float xmm6_1 = *eax_15
        arg1[0x26] = xmm6_1
        float xmm0_5 = sub_49d390(xmm0_3 * xmm6_1)
        arg1[0x11] = int.d(sub_49d390(_mm_cvtepi32_ps(zx.o(eax_4)) * xmm6_1))
        arg1[0x12] = int.d(xmm0_5)
        sub_49ed40(&arg1[-1], &arg1[0x10])
        arg1[0x17] = arg1[0x11]
        arg1[0x18] = arg1[0x12]
        arg1[0x4a] = arg1[0x11]
        arg1[0x4b] = arg1[0x12]
        
        if (arg1[0x43] != 0)
            (*(*arg1[0x43] + 0x24))(arg1[0x11], arg1[0x12])
        
        if (ebx:1.b != 0)
            if (sub_49e0f0(&arg1[-1]) != 0)
                sub_49e2d0(&arg1[-1])
            else
                sub_403360(&var_2c, 0x7612d0)
                var_8_1.b = 3
                sub_6c52e0(&var_2c)
                var_8_1.b = 1
                sub_403320(&var_2c)
        
        result = sub_49dbe0(&arg1[-1], 0, 1, &var_58, &var_4c, 0)
        
        if (ebx.b != 0 && arg1[0x43] != 0)
            result = (*(*arg1[0x43] + 0x20))()
        
        if (ebx.b == 0 || arg1[0x43] == 0 || result.b != 0)
            *(arg1 + 0x121) = 0
            arg1[0x7d].b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
