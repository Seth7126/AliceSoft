// 函数: sub_4c9810
// 地址: 0x4c9810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    int32_t ebx_1 = *(arg2 + 0x30)
    int32_t var_50 = *(arg2 + 0x1c)
    int32_t var_4c_1 = *(arg2 + 0x20)
    int32_t* var_48_1 = *(arg2 + 0x2c)
    int32_t* eax_5
    eax_5.b = *(arg2 + 0xc4)
    
    if (eax_5.b != 0)
        bool cond:0_1 = *(arg1 + 0x16) == 0
        var_50 = 0
        var_4c_1 = 0
        
        if (cond:0_1)
            int32_t* ecx_1 = *(ecx + 0x118)
            
            if (ecx_1 != 0)
                var_48_1 = (*(*ecx_1 + 0x10))(eax_2)
            else
                var_48_1 = ecx_1
        else
            var_48_1 = arg1[0xb]
        
        void* ecx_2 = *arg1
        
        if (ecx_2 == 0)
            ebx_1 = 0
        else if (*(arg1 + 0x16) == 0)
            int32_t* ecx_3 = *(ecx_2 + 0x118)
            
            if (ecx_3 != 0)
                ebx_1 = (*(*ecx_3 + 0x14))(eax_2)
            else
                ebx_1 = 0
        else
            ebx_1 = arg1[0xc]
    
    int32_t edx_1 = *(arg2 + 0x3c)
    int32_t ecx_4 = *(arg2 + 0x38)
    int32_t eax_10 = *(arg2 + 0x34)
    int32_t var_70_1 = edx_1
    int32_t var_74_1 = ecx_4
    int32_t var_78_1 = eax_10
    int32_t var_7c_1 = ebx_1
    int32_t* var_80_1 = var_48_1
    int32_t var_84_1 = var_4c_1
    int32_t var_88_1 = var_50
    
    if (sub_54faa0(arg1).b != 0)
        result.b = 1
    else
        void* var_44
        sub_403360(&var_44, 0x763250)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_2c
        sub_45aae0(sub_4cb440(&var_50, &var_44, &var_2c, &var_50, var_4c_1, var_48_1, ebx_1, 
            eax_10, ecx_4, edx_1))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        struct _EXCEPTION_REGISTRATION_RECORD** var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
