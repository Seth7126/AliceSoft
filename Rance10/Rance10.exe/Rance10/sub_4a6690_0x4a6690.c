// 函数: sub_4a6690
// 地址: 0x4a6690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e6e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1 + 0x2c
void* result

if ((*(**(arg1 + 4) + 0x10))(edi).b != 0)
    void* result_1 = nullptr
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    int32_t var_8_1 = 0
    bool eax_7 = (*(**(arg1 + 4) + 0xc))(edi, &result_1)
    void* result_2
    
    if (eax_7 != 0)
        result_2 = result_1
    
    int32_t ebx
    uint32_t var_60
    
    if (eax_7 == 0 || result_2 == var_68_1)
        if (*(edi + 0x14) u>= 0x10)
            edi = *edi
        
        var_60 = edi
        void* var_5c
        sub_403360(&var_5c, 0x761504)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_2c
        sub_6c52e0(sub_409240(&var_60, &var_5c, &var_2c, &var_60))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        ebx.b = 0
    else
        struct fileimage::CFileImageAnalyser::VTable* const var_20 =
            &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        var_8_1.b = 4
        
        if (sub_61ed80(&var_20, &var_44) == 0)
            ebx.b = 0
            sub_403320(&var_44)
        else if (sub_407560(&var_44, 0x761500) == 0)
            ebx.b = 0
            sub_403320(&var_44)
        else if (sub_61ec90(&var_20, &var_60) == 0)
            ebx.b = 0
            sub_403320(&var_44)
        else
            uint32_t edi_1 = var_60
            
            if (edi_1 u> 5)
                ebx.b = 0
                sub_403320(&var_44)
            else if (sub_61ec90(&var_20, &var_60) == 0)
                ebx.b = 0
                sub_403320(&var_44)
            else
                *(arg1 + 8) = var_60 != 0
                
                if (sub_61ec90(&var_20, arg1 + 0xc) == 0)
                    ebx.b = 0
                    sub_403320(&var_44)
                else if (edi_1 s< 1)
                    *(arg1 + 0x10) = 0
                label_4a67e4:
                    
                    if (edi_1 s< 2)
                        *(arg1 + 0x11) = 0
                    label_4a6809:
                        
                        if (edi_1 s< 3)
                            *(arg1 + 0x12) = 1
                        label_4a682e:
                            
                            if (edi_1 s< 4)
                                *(arg1 + 0x13) = 0x101
                            label_4a686f:
                                
                                if (sub_61ec90(&var_20, &var_60) == 0)
                                    ebx.b = 0
                                    sub_403320(&var_44)
                                else
                                    *(arg1 + 0x15) = var_60 != 0
                                    
                                    if (result_2 + 0x10 u> var_68_1)
                                        ebx.b = 0
                                        sub_403320(&var_44)
                                    else
                                        *(arg1 + 0x18) = sub_6c94f0(&var_20)
                                        *(arg1 + 0x1c) = sub_6c94f0(&var_20)
                                        *(arg1 + 0x20) = sub_6c94f0(&var_20)
                                        *(arg1 + 0x24) = sub_6c94f0(&var_20)
                                        *(arg1 + 0x28) = 0x3f800000
                                        char eax_29
                                        
                                        if (edi_1 s>= 5)
                                            eax_29 = sub_6c9300(&var_20, arg1 + 0x28)
                                        
                                        if (edi_1 s>= 5 && eax_29 == 0)
                                            ebx.b = 0
                                            sub_403320(&var_44)
                                        else
                                            ebx.b = 1
                                            sub_403320(&var_44)
                            else if (sub_6c9280(&var_20, arg1 + 0x13) == 0)
                                ebx.b = 0
                                sub_403320(&var_44)
                            else
                                if (sub_6c9280(&var_20, arg1 + 0x14) != 0)
                                    goto label_4a686f
                                
                                ebx.b = 0
                                sub_403320(&var_44)
                        else
                            if (sub_61ec90(&var_20, &var_60) != 0)
                                *(arg1 + 0x12) = var_60 != 0
                                goto label_4a682e
                            
                            ebx.b = 0
                            sub_403320(&var_44)
                    else
                        if (sub_61ec90(&var_20, &var_60) != 0)
                            *(arg1 + 0x11) = var_60 != 0
                            goto label_4a6809
                        
                        ebx.b = 0
                        sub_403320(&var_44)
                else
                    if (sub_61ec90(&var_20, &var_60) != 0)
                        *(arg1 + 0x10) = var_60 != 0
                        goto label_4a67e4
                    
                    ebx.b = 0
                    sub_403320(&var_44)
    result = result_1
    
    if (result != 0)
        sub_403160(result, var_64_1 - result, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
