// 函数: sub_514630
// 地址: 0x514630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738571
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_74 = 0
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
        sub_403360(&var_2c, 0x76684c)
        int32_t var_8_1 = 0
        ebx = 1
        int32_t* ecx_1 = *(arg5 + 4)
        int32_t var_74_1 = 1
        
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
    label_5148b9:
        result.b = 1
    else
        int32_t eax_5 = sub_510890(arg1, arg2)
        
        if (sub_512130(arg3, arg4, arg5, arg6, eax_5).b != 0)
            sub_4ee240(sub_51b320(arg6, eax_5), arg2)
            sub_403360(&var_2c, 0x76685c)
            int32_t var_8_3 = 1
            int32_t* ecx_7 = *(arg5 + 4)
            int32_t* ebx_2
            
            if (ecx_7 != 0)
                int32_t* edx_2 = &var_2c
                
                if (var_18 u>= 0x10)
                    edx_2 = var_2c
                
                ebx_2 = (*(*ecx_7 + 0x24))(edx_2)
            else
                ebx_2 = nullptr
            
            struct common::CEXTreeReader::VTable* const var_80_1 = &common::CEXTreeReader::`vftable'
            int32_t* var_7c_1 = ebx_2
            var_8_3.b = 3
            sub_403320(&var_2c)
            int32_t* var_5c
            sub_403360(&var_5c, 0x76683c)
            var_8_3.b = 4
            int32_t* ecx_10 = *(arg5 + 4)
            int32_t* esi_1
            
            if (ecx_10 != 0)
                int32_t* edx_3 = &var_5c
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    edx_3 = var_5c
                
                esi_1 = (*(*ecx_10 + 0x2c))(edx_3)
            else
                esi_1 = nullptr
            
            struct common::CEXArrayReader::VTable* const var_78 = &common::CEXArrayReader::`vftable'
            int32_t* var_74_2 = esi_1
            var_8_3.b = 6
            sub_403320(&var_5c)
            int32_t edi_2 = 0
            
            while (true)
                if (esi_1 != 0)
                    result = (*(*esi_1 + 8))(eax_2)
                else
                    result = nullptr
                
                if (edi_2 s>= result)
                    goto label_5148b9
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                var_2c.b = 0
                sub_403490(&var_2c, 0x75d2f3, nullptr)
                var_8_3.b = 7
                void** var_44
                sub_403230(&var_78, &var_44, edi_2, &var_2c)
                var_8_3.b = 9
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c.b = 0
                char* var_30
                int32_t eax_14
                
                if (ebx_2 != 0)
                    void** ecx_15 = &var_44
                    
                    if (var_30 u>= 0x10)
                        ecx_15 = var_44
                    
                    eax_14 = (*(*ebx_2 + 0x24))(ecx_15)
                else
                    eax_14 = 0
                
                struct common::CEXTreeReader::VTable* const var_6c =
                    &common::CEXTreeReader::`vftable'
                int32_t var_68_1 = eax_14
                var_8_3.b = 0xa
                char eax_16 = sub_514630(&var_44, arg3, arg4, &var_6c, arg6, arg7.d)
                var_6c = &common::CEXTreeReader::`vftable'
                
                if (eax_16 == 0)
                    if (var_30 u>= 0x10)
                        sub_403160(var_44, &var_30[1], 1)
                    
                    break
                
                var_8_3.b = 6
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, &var_30[1], 1)
                
                esi_1 = var_74_2
                edi_2 += 1
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
