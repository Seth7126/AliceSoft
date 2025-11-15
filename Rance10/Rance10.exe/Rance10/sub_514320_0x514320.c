// 函数: sub_514320
// 地址: 0x514320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7384f4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char ebx = 0
int32_t var_68 = 0
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
        sub_403360(&var_2c, 0x766878)
        int32_t var_8_1 = 0
        ebx = 1
        int32_t* ecx_1 = arg5[1]
        int32_t var_68_1 = 1
        
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
    label_51460c:
        result.b = 1
    else
        int32_t eax_5 = sub_404080(&arg6[0x60])
        char* edi_1 = arg6
        
        if (sub_511ff0(arg1, arg5, edi_1, eax_5, arg2).b != 0)
            sub_403360(&var_2c, 0x766888)
            int32_t var_8_3 = 1
            int32_t* ecx_6 = arg5[1]
            int32_t* eax_6
            
            if (ecx_6 != 0)
                int32_t* edx_2 = &var_2c
                
                if (var_18 u>= 0x10)
                    edx_2 = var_2c
                
                eax_6 = (*(*ecx_6 + 0x24))(edx_2)
            else
                eax_6 = nullptr
            
            struct common::CEXTreeReader::VTable* const var_88_1 = &common::CEXTreeReader::`vftable'
            int32_t* var_84_1 = eax_6
            var_8_3.b = 3
            sub_403320(&var_2c)
            int32_t* var_5c
            sub_403360(&var_5c, 0x766868)
            var_8_3.b = 4
            int32_t* ecx_9 = arg5[1]
            int32_t* esi_1
            
            if (ecx_9 != 0)
                int32_t* edx_3 = &var_5c
                int32_t var_48
                
                if (var_48 u>= 0x10)
                    edx_3 = var_5c
                
                esi_1 = (*(*ecx_9 + 0x2c))(edx_3)
            else
                esi_1 = nullptr
            
            struct common::CEXArrayReader::VTable* const var_80 = &common::CEXArrayReader::`vftable'
            int32_t* var_7c_1 = esi_1
            var_8_3.b = 6
            sub_403320(&var_5c)
            int32_t ebx_1 = 0
            
            while (true)
                if (esi_1 != 0)
                    result = (*(*esi_1 + 8))(eax_2)
                else
                    result = nullptr
                
                if (ebx_1 s>= result)
                    goto label_51460c
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                var_2c.b = 0
                sub_403490(&var_2c, 0x75d2fb, nullptr)
                var_8_3.b = 7
                void** var_44
                sub_403230(&var_80, &var_44, ebx_1, &var_2c)
                var_8_3.b = 9
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c.b = 0
                char* var_30
                int32_t eax_13
                
                if (eax_6 != 0)
                    void** ecx_14 = &var_44
                    
                    if (var_30 u>= 0x10)
                        ecx_14 = var_44
                    
                    eax_13 = (*(*eax_6 + 0x24))(ecx_14)
                else
                    eax_13 = 0
                
                struct common::CEXTreeReader::VTable* const var_74 =
                    &common::CEXTreeReader::`vftable'
                int32_t var_70_1 = eax_13
                var_8_3.b = 0xa
                
                if (sub_514320(&var_44, arg3, arg4, &var_74, edi_1, arg7.d) == 0)
                    var_74 = &common::CEXTreeReader::`vftable'
                    
                    if (var_30 u>= 0x10)
                        sub_403160(var_44, &var_30[1], 1)
                    
                    break
                
                void** eax_16 = sub_432330(arg1, &var_44)
                void** edi_3 = *arg1
                void** esi_2 = eax_16
                char eax_18
                
                if (esi_2 != edi_3)
                    eax_18 = sub_412ca0(&var_44, &esi_2[4])
                
                if (esi_2 == edi_3 || eax_18 != 0)
                    esi_2 = edi_3
                
                void* esi_3
                
                if (esi_2 != edi_3)
                    esi_3 = esi_2[0xa]
                else
                    esi_3 = nullptr
                
                edi_1 = arg6
                
                if (sub_51b020(edi_1, esi_3) != 0)
                    void* edi_4 = &sub_51b320(edi_1, eax_5)[0x19]
                    
                    if (sub_4f2400(edi_4, esi_3) != 0)
                        sub_504200(*(edi_4 + 0xc), esi_3)
                    
                    edi_1 = arg6
                
                var_8_3.b = 6
                var_74 = &common::CEXTreeReader::`vftable'
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, &var_30[1], 1)
                
                esi_1 = var_7c_1
                ebx_1 += 1
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
