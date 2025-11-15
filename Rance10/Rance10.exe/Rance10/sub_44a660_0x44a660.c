// 函数: sub_44a660
// 地址: 0x44a660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_74 = 0xffffffff
int32_t (* var_78)(void* arg1) = sub_72a978
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_70
int32_t eax_2 = __security_cookie ^ &var_70
fsbase->NtTib.ExceptionList = &ExceptionList
var_70 = arg1
int32_t* result

if (arg4 != 0 && arg3 != 0)
    int32_t eax_5 = (*(*arg3 + 0x18))(eax_2)
    int32_t eax_6 = (*(*arg3 + 0x14))()
    int32_t eax_7 = (*(*arg3 + 0x18))()
    struct fileimage::CFileImageAnalyser::VTable* const var_88 =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_84_1 = eax_7
    int32_t var_80_1 = eax_5 + eax_6
    int32_t var_74_1 = 0
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    var_74_1.b = 1
    int32_t* result_1
    
    if (sub_6c9360(&var_88, &var_38, 4) == 0)
        result_1 = nullptr
    else
        uint32_t var_6c
        
        if (sub_407560(&var_38, "dcf ") == 0)
            result_1 = nullptr
        else if (sub_61ec90(&var_88, &var_6c) == 0)
            result_1 = nullptr
        else
            uint32_t esi_3 = var_6c
            
            if (esi_3 s<= 0)
                result_1 = nullptr
            else
                char* var_b0
                sub_431b80(&var_b0, esi_3)
                var_74_1.b = 2
                
                if (sub_6c9430(&var_88, var_b0, esi_3) != 0)
                    int32_t var_c_1 = 0xf
                    int32_t var_10_1 = 0
                    char var_20 = 0
                    var_74_1.b = 3
                    void var_bc
                    uint32_t var_b8
                    uint32_t var_b4
                    
                    if (sub_44aa30(&var_b8, &var_bc, &var_b0, &var_b8, &var_b4, &var_6c, &var_20)
                            != 0)
                        int32_t var_54_1 = 0xf
                        int32_t var_58_1 = 0
                        char var_68 = 0
                        var_74_1.b = 4
                        
                        if (sub_6c9360(&var_88, &var_68, 4) == 0)
                            result_1 = nullptr
                        else if (sub_407560(&var_68, "dfdl") == 0)
                            result_1 = nullptr
                        else if (sub_61ec90(&var_88, &var_6c) == 0)
                            result_1 = nullptr
                        else
                            uint32_t esi_4 = var_6c
                            
                            if (esi_4 s<= 0)
                                result_1 = nullptr
                            else
                                char* var_a4
                                sub_431b80(&var_a4, esi_4)
                                var_74_1.b = 5
                                
                                if (sub_6c9430(&var_88, var_a4, esi_4) != 0)
                                    int32_t var_98 = 0
                                    int32_t var_94_1 = 0
                                    int32_t var_90_1 = 0
                                    var_74_1.b = 6
                                    int32_t* var_dc_8 = &var_98
                                    
                                    if (sub_44ac10(var_70, &var_a4) != 0)
                                        int32_t var_3c_1 = 0xf
                                        int32_t var_40_1 = 0
                                        char var_50 = 0
                                        var_74_1.b = 7
                                        
                                        if (sub_6c9360(&var_88, &var_50, 4) == 0)
                                            result_1 = nullptr
                                        else if (sub_407560(&var_50, "dcgd") == 0)
                                            result_1 = nullptr
                                        else if (sub_61ec90(&var_88, &var_70) == 0)
                                            result_1 = nullptr
                                        else
                                            void* esi_5 = var_70
                                            
                                            if (esi_5 s<= 0)
                                                result_1 = nullptr
                                            else
                                                char* var_c8
                                                sub_431b80(&var_c8, esi_5)
                                                var_74_1.b = 8
                                                char* edi_1 = var_c8
                                                
                                                if (sub_6c9430(&var_88, edi_1, esi_5) == 0)
                                                    result_1 = nullptr
                                                    sub_4059a0(&var_c8)
                                                else
                                                    result_1 = (*(*arg4 + 8))(edi_1, esi_5)
                                                    
                                                    if (result_1 == 0)
                                                        result_1 = nullptr
                                                        sub_4059a0(&var_c8)
                                                    else
                                                        char* eax_25 = &var_20
                                                        
                                                        if (var_c_1 u>= 0x10)
                                                            eax_25 = var_20.d
                                                        
                                                        int32_t* eax_26 = sub_44bec0(arg2, eax_25)
                                                        
                                                        if (eax_26 == 0)
                                                            goto label_44a92c
                                                        
                                                        bool cond:1_1 = sub_44ad50(&var_98, 
                                                            result_1, eax_26, &var_98) != 0
                                                        int32_t eax_29 = *eax_26
                                                        
                                                        if (cond:1_1)
                                                            (*(eax_29 + 4))()
                                                            sub_4059a0(&var_c8)
                                                        else
                                                            (*(eax_29 + 4))()
                                                        label_44a92c:
                                                            (*(*result_1 + 4))()
                                                            result_1 = nullptr
                                                            sub_4059a0(&var_c8)
                                        
                                        sub_403320(&var_50)
                                    else
                                        result_1 = nullptr
                                    
                                    sub_4059a0(&var_98)
                                    sub_4059a0(&var_a4)
                                else
                                    result_1 = nullptr
                                    sub_4059a0(&var_a4)
                        
                        sub_403320(&var_68)
                    else
                        result_1 = nullptr
                    
                    sub_403320(&var_20)
                    sub_4059a0(&var_b0)
                else
                    result_1 = nullptr
                    sub_4059a0(&var_b0)
    
    if (var_24_1 u>= 0x10)
        sub_403160(var_38.d, var_24_1 + 1, 1)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_70)
return result
