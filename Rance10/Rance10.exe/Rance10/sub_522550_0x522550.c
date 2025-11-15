// 函数: sub_522550
// 地址: 0x522550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7393c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = *(arg1 + 0x228)

if (ebx s> 0)
    void* eax_3 = sub_4efcc0(*(arg1 + 0xb0))
    int32_t var_8_1 = 0
    char var_78
    void** var_60
    sub_5227c0(&var_60, sub_4f82b0(arg1 + 0xcc, &var_78), arg2)
    var_8_1.b = 2
    int32_t var_64
    
    if (var_64 u>= 0x10)
        sub_403160(var_78.d, var_64 + 1, 1)
    
    int32_t var_64_1 = 0xf
    int32_t var_68_1 = 0
    var_78 = 0
    var_8_1.b = 3
    char var_48
    char var_30
    sub_5227c0(&var_48, sub_4f8a80(arg1 + 0xcc, &var_30), arg2)
    var_8_1.b = 5
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    void* eax_10 = *(arg1 + 0x2ec)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    void* ecx_3 = *(eax_10 + 8)
    char eax_11
    
    if (ecx_3 != 0)
        eax_11 = sub_4d62f0(ecx_3, &var_48)
    
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    
    if (ecx_3 == 0 || eax_11 == 0)
        void** eax_12 = &var_60
        
        if (result_1 u>= 0x10)
            eax_12 = var_60
        
        if (sub_44c4e0(eax_12) == 0)
            var_30.d = &
                partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
            char var_2c_1 = 0
            int32_t var_28_1 = 0
            var_8_1.b = 6
            int32_t var_24_1 = 0x96
            int32_t var_20_2 = 0x96
            int32_t var_1c_2 = 0x96
            sub_522840(&var_30, arg2)
            char ecx_6 = *(arg1 + 0xc)
            int32_t var_80_1
            
            if (ecx_6 == 0)
                var_80_1 = ebx
            else
                var_80_1 = *(arg1 + 0x104)
            
            if (ecx_6 == 0)
                ebx = *(arg1 + 0x104)
            
            void* esi_6 = *(eax_3 + 0x44)
            sub_555e00(esi_6, 0x18, arg2)
            sub_54b7a0(*(esi_6 + (arg2 << 2) + 0x7c))
            
            if (var_80_1 s> 0 && ebx s> 0)
                sub_518190(eax_3, var_80_1, ebx, arg2)
                sub_518340(eax_3, &var_30, var_80_1, ebx, arg2)
            
            void* esi_7 = *(eax_3 + 0x44)
            sub_555e00(esi_7, 0x18, arg2)
            sub_54c110(*(esi_7 + (arg2 << 2) + 0x7c))
        else
            void* esi_4 = *(eax_3 + 0x44)
            sub_555e00(esi_4, 0x11, arg2)
            sub_547af0(*(esi_4 + (arg2 << 2) + 0x7c), &var_60, nullptr)
    else
        void* esi_2 = *(eax_3 + 0x44)
        sub_555e00(esi_2, 0x1a, arg2)
        sub_4dbf90(*(esi_2 + (arg2 << 2) + 0x7c), &var_48)
    
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48.d, var_34 + 1, 1)
    
    result = result_1
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (result u>= 0x10)
        result = sub_403160(var_60, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
