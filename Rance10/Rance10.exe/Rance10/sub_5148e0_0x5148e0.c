// 函数: sub_5148e0
// 地址: 0x5148e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7385f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_64 = 0
char* result

if (arg6 == 0)
    result.b = 0
else
    char var_5d_1
    int32_t* var_2c
    char* var_18
    
    if (arg7 != 0)
        var_5d_1 = 0
    else
        sub_403360(&var_2c, 0x766820)
        int32_t var_8_1 = 0
        ebx = 1
        int32_t* ecx_1 = *(arg5 + 4)
        int32_t var_64_1 = 1
        
        if (ecx_1 == 0)
            var_5d_1 = 0
        else
            int32_t* edx_1 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_1 = var_2c
            
            var_5d_1 = 1
            
            if ((*(*ecx_1 + 8))(edx_1, 1) == 1)
                var_5d_1 = 0
    
    int32_t var_8_2 = 0xffffffff
    
    if ((ebx & 1) != 0 && var_18 u>= 0x10)
        sub_403160(var_2c, &var_18[1], 1)
    
    if (var_5d_1 != 0)
    label_514b3f:
        result.b = 1
    else
        sub_512230(arg6, sub_510890(arg1, arg2))
        sub_403360(&var_2c, 0x766830)
        int32_t var_8_3 = 1
        int32_t* ecx_4 = *(arg5 + 4)
        int32_t* ebx_1
        
        if (ecx_4 != 0)
            int32_t* edx_2 = &var_2c
            
            if (var_18 u>= 0x10)
                edx_2 = var_2c
            
            ebx_1 = (*(*ecx_4 + 0x24))(edx_2)
        else
            ebx_1 = nullptr
        
        struct common::CEXTreeReader::VTable* const var_80_1 = &common::CEXTreeReader::`vftable'
        int32_t* var_7c_1 = ebx_1
        var_8_3.b = 3
        sub_403320(&var_2c)
        int32_t* var_5c
        sub_403360(&var_5c, 0x7668d0)
        var_8_3.b = 4
        int32_t* ecx_7 = *(arg5 + 4)
        int32_t* esi_1
        
        if (ecx_7 != 0)
            int32_t* edx_3 = &var_5c
            int32_t var_48
            
            if (var_48 u>= 0x10)
                edx_3 = var_5c
            
            esi_1 = (*(*ecx_7 + 0x2c))(edx_3)
        else
            esi_1 = nullptr
        
        struct common::CEXArrayReader::VTable* const var_78 = &common::CEXArrayReader::`vftable'
        int32_t* var_74_1 = esi_1
        var_8_3.b = 6
        sub_403320(&var_5c)
        int32_t edi_1 = 0
        
        while (true)
            if (esi_1 != 0)
                result = (*(*esi_1 + 8))(eax_2)
            else
                result = nullptr
            
            if (edi_1 s>= result)
                goto label_514b3f
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c.b = 0
            sub_403490(&var_2c, 0x75d307, nullptr)
            var_8_3.b = 7
            void** var_44
            sub_403230(&var_78, &var_44, edi_1, &var_2c)
            var_8_3.b = 9
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c, var_18_1 + 1, 1)
            
            int32_t var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c.b = 0
            char* var_30
            int32_t eax_13
            
            if (ebx_1 != 0)
                void** ecx_12 = &var_44
                
                if (var_30 u>= 0x10)
                    ecx_12 = var_44
                
                eax_13 = (*(*ebx_1 + 0x24))(ecx_12)
            else
                eax_13 = 0
            
            struct common::CEXTreeReader::VTable* const var_68 = &common::CEXTreeReader::`vftable'
            int32_t var_64_2 = eax_13
            var_8_3.b = 0xa
            char eax_15 = sub_5148e0(&var_44, arg3, arg4, &var_68, arg6, arg7.d)
            var_68 = &common::CEXTreeReader::`vftable'
            
            if (eax_15 == 0)
                if (var_30 u>= 0x10)
                    sub_403160(var_44, &var_30[1], 1)
                
                break
            
            var_8_3.b = 6
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, &var_30[1], 1)
            
            esi_1 = var_74_1
            edi_1 += 1
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
