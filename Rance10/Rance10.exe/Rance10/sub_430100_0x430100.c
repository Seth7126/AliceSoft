// 函数: sub_430100
// 地址: 0x430100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_70 = 0xffffffff
int32_t (* var_74)(void* arg1) = sub_72a280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *arg3
void** result

if (edx s< arg5)
    void* ecx = *arg2
    uint32_t edi_2
    
    if (arg2[1] - ecx s>= edx + 4)
        edi_2 = ((zx.d(*(ecx + edx + 3)) << 8 | zx.d(*(ecx + edx + 2))) << 8
            | zx.d(*(ecx + edx + 1))) << 8 | zx.d(*(ecx + edx))
        *arg3 = edx + 4
    else
        edi_2 = 0
    
    int32_t ecx_1 = *arg3
    void* edx_1 = *arg2
    uint32_t ecx_2
    
    if (arg2[1] - edx_1 s>= ecx_1 + 4)
        ecx_2 = ((zx.d(*(edx_1 + ecx_1 + 3)) << 8 | zx.d(*(edx_1 + *arg3 + 2))) << 8
            | zx.d(*(edx_1 + *arg3 + 1))) << 8 | zx.d(*(edx_1 + *arg3))
        *arg3 = ecx_1 + 4
    else
        ecx_2 = 0
    
    if (*arg3 + 0x10 + ecx_2 s> arg5)
        result.b = 0
    else
        int32_t* eax_20 = sub_6e810c(0x28)
        void** eax_21 = &eax_20[4]
        *eax_20 = 0
        eax_20[1] = 0
        eax_20[2] = 0
        eax_20[3] = 0
        eax_21[5] = 0xf
        eax_21[4] = 0
        
        if (eax_21[5] u>= 0x10)
            eax_21 = *eax_21
        
        *eax_21 = nullptr
        int32_t* var_90 = eax_20
        void** var_24_1 = 0xf
        int32_t var_28_1 = 0
        char var_38 = 0
        int32_t eax_22 = 0
        int32_t var_70_1 = 0
        int32_t var_80_1 = 0
        
        if (edi_2 s> 0)
            do
                int32_t eax_23
                eax_23.b = (*arg3 + eax_22)[*arg2]
                sub_405500(&var_38, 1, eax_23.b)
                eax_22 = var_80_1 + 1
                var_80_1 = eax_22
            while (eax_22 s< edi_2)
        
        *arg3 += ecx_2
        void* edi_9 = *arg3
        int32_t ecx_12 = *arg2
        uint32_t ecx_13
        
        if (arg2[1] - ecx_12 s>= edi_9 + 4)
            ecx_13 = ((zx.d(*(edi_9 + ecx_12 + 3)) << 8 | zx.d(*(edi_9 + *arg2 + 2))) << 8
                | zx.d(*(edi_9 + *arg2 + 1))) << 8 | zx.d(*(edi_9 + *arg2))
            *arg3 = edi_9 + 4
        else
            ecx_13 = 0
        
        eax_20[2] = ecx_13
        int32_t ecx_20 = *arg3
        void* edi_10 = *arg2
        uint32_t ecx_21
        
        if (arg2[1] - edi_10 s>= ecx_20 + 4)
            ecx_21 = ((zx.d(*(edi_10 + ecx_20 + 3)) << 8 | zx.d(*(edi_10 + *arg3 + 2))) << 8
                | zx.d(*(edi_10 + *arg3 + 1))) << 8 | zx.d(*(edi_10 + *arg3))
            *arg3 = ecx_20 + 4
        else
            ecx_21 = 0
        
        eax_20[3] = ecx_21
        int32_t ecx_28 = *arg3
        void* edi_11 = *arg2
        uint32_t ecx_29
        
        if (arg2[1] - edi_11 s>= ecx_28 + 4)
            ecx_29 = ((zx.d(*(edi_11 + ecx_28 + 3)) << 8 | zx.d(*(edi_11 + *arg3 + 2))) << 8
                | zx.d(*(edi_11 + *arg3 + 1))) << 8 | zx.d(*(edi_11 + *arg3))
            *arg3 = ecx_28 + 4
        else
            ecx_29 = 0
        
        *eax_20 = arg6 + ecx_29
        void* edi_12 = *arg2
        int32_t ebx_4 = *arg3
        uint32_t ecx_37
        
        if (arg2[1] - edi_12 s>= ebx_4 + 4)
            ecx_37 = ((zx.d(*(edi_12 + ebx_4 + 3)) << 8 | zx.d(*(edi_12 + ebx_4 + 2))) << 8
                | zx.d(*(edi_12 + ebx_4 + 1))) << 8 | zx.d(*(edi_12 + ebx_4))
            *arg3 = ebx_4 + 4
        else
            ecx_37 = 0
        
        eax_20[1] = ecx_37
        
        if (&eax_20[4] != arg4)
            sub_403590(&eax_20[4], arg4, 0, 0xffffffff)
        
        var_70_1.b = 1
        char var_50
        char var_20
        sub_430d00(&var_20, sub_430ec0(&var_50))
        var_70_1.b = 3
        int32_t var_3c
        
        if (var_3c u>= 0x10)
            sub_403160(var_50.d, var_3c + 1, 1)
        
        int32_t var_3c_1 = 0xf
        int32_t var_40_1 = 0
        var_50 = 0
        var_70_1.b = 4
        int32_t* eax_67
        void* ecx_49
        eax_67, ecx_49 = sub_432530(sub_4322f0(&var_90, &var_20, &var_6c, &var_90))
        int32_t* var_ac_4 = eax_67
        void* var_b0_2 = &eax_67[4]
        void** var_98
        sub_432580(arg1 + 0xc, &var_98, ecx_49)
        int32_t var_58
        
        if (var_58 u>= 0x10)
            sub_403160(var_6c, var_58 + 1, 1)
        
        int32_t var_c
        
        if (var_c u>= 0x10)
            sub_403160(var_20.d, var_c + 1, 1)
        
        int32_t var_c_1 = 0xf
        int32_t var_10_1 = 0
        var_20 = 0
        
        if (var_24_1 u>= 0x10)
            sub_403160(var_38.d, var_24_1 + 1, 1)
        
        result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_6c)
return result
