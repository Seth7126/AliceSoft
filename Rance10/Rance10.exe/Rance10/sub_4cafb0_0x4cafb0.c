// 函数: sub_4cafb0
// 地址: 0x4cafb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733a33
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*arg1 != 0)
    int32_t ebx_1 = *(arg2 + 0x20)
    int32_t var_60 = *(arg2 + 0x1c)
    void* var_d4
    sub_54d5a0(&var_d4)
    int32_t var_8_1 = 0
    char var_2c
    sub_4c59c0(&var_2c, arg2 + 0xac)
    var_8_1.b = 1
    int32_t* ecx_2 = &var_d4
    char* var_e8_3 = &var_2c
    char eax_5
    
    if (sub_4c5910(arg2 + 0xac) == 0)
        eax_5 = sub_54d7d0(ecx_2, var_e8_3)
    else
        eax_5 = sub_54d950(ecx_2, var_e8_3)
    
    void* var_5c
    char var_44
    
    if (eax_5 != 0)
        void* eax_12 = var_d4
        int32_t* ecx_7
        int32_t esi_2
        
        if (eax_12 != 0)
            char var_be
            char ecx_3 = var_be
            int32_t var_a4
            
            if (ecx_3 == 0)
                int32_t* edx_2 = *(eax_12 + 0x118)
                
                if (edx_2 != 0)
                    ecx_3 = var_be
                    esi_2 = (*(*edx_2 + 0x14))(eax_2)
                    eax_12 = var_d4
                else
                    esi_2 = 0
            else
                esi_2 = var_a4
            
            if (eax_12 != 0)
                int32_t* var_a8
                
                if (ecx_3 == 0)
                    ecx_7 = *(eax_12 + 0x118)
                    
                    if (ecx_7 != 0)
                        ecx_7 = (*(*ecx_7 + 0x10))(eax_2)
                        eax_12 = var_d4
                else
                    ecx_7 = var_a8
                
                if (eax_12 != 0)
                    eax_12 = *(eax_12 + 0x118)
            else
                ecx_7 = nullptr
        else
            esi_2 = 0
            ecx_7 = nullptr
        
        int32_t var_e8_5 = esi_2
        int32_t* var_ec_5 = ecx_7
        void* var_f8_1 = eax_12
        int32_t var_fc_1 = ebx_1
        
        if (sub_54f690(arg1, var_60) != 0)
            ebx_1.b = 1
        else
            sub_403360(&var_5c, 0x764560)
            var_8_1.b = 4
            var_8_1.b = 5
            sub_45aae0(sub_417810(&var_60, &var_5c, &var_44, &var_60, ebx_1))
            sub_403320(&var_44)
            sub_403320(&var_5c)
            ebx_1.b = 0
    else
        sub_403360(&var_5c, 0x764478)
        var_8_1.b = 2
        var_8_1.b = 3
        sub_45aae0(sub_417810(&var_60, &var_5c, &var_44, &var_60, ebx_1))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_48
        
        if (var_48 u< 0x10)
            ebx_1.b = 0
        else
            sub_403160(var_5c, var_48 + 1, 1)
            ebx_1.b = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_d4)
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
