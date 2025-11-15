// 函数: sub_452ae0
// 地址: 0x452ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b44e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_7fcb54
void* var_64 = ebx
void* esi = ebx + 8
void* result

if ((*(**(ebx + 4) + 0x10))(esi).b != 0)
    void* result_1 = nullptr
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0
    int32_t var_8_1 = 0
    char eax_7 = (*(**(ebx + 4) + 0xc))(esi, &result_1)
    void* eax_8
    
    if (eax_7 != 0)
        eax_8.b = result_1 == var_6c_1
    
    if (eax_7 == 0 || eax_8.b != 0)
        if (*(esi + 0x14) u>= 0x10)
            esi = *esi
        
        var_64 = esi
        void* var_2c
        sub_403360(&var_2c, 0x75defc)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_44
        sub_6c52e0(sub_409240(&var_64, &var_2c, &var_44, &var_64))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        ebx.b = 0
    else
        struct commonsystemdata::CZlibDecompressor::VTable* const var_7c =
            &commonsystemdata::CZlibDecompressor::`vftable'
        int32_t* var_78_1 = nullptr
        var_8_1.b = 3
        
        if (sub_454990(&var_7c) != 0)
            void* result_2 = result_1
            void* eax_10 = var_6c_1
            struct fileimage::CFileImageAnalyser::VTable* const var_20 =
                &fileimage::CFileImageAnalyser::`vftable'
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            char var_5c = 0
            var_8_1.b = 5
            
            if (sub_61ed80(&var_20, &var_5c) == 0)
                ebx.b = 0
            else
                uint32_t var_60
                
                if (sub_407560(&var_5c, 0x75df7c) == 0)
                    ebx.b = 0
                else if (sub_61ec90(&var_20, &var_60) == 0 || var_60 != 0)
                    ebx.b = 0
                else
                    uint32_t var_74
                    
                    if (sub_6c92b0(&var_20, &var_60) == 0)
                        ebx.b = 0
                    else if (sub_6c92b0(&var_20, &var_74) == 0)
                        ebx.b = 0
                    else
                        uint32_t ecx_10 = var_60
                        
                        if (ecx_10 == 0)
                            ebx.b = 1
                        else
                            uint32_t edi_1 = var_74
                            
                            if (edi_1 == 0)
                                ebx.b = 1
                            else if (result_2 u>= eax_10 || result_2 == 0
                                    || result_2 + edi_1 u> eax_10)
                                ebx.b = 0
                            else
                                int32_t var_38
                                sub_431b80(&var_38, ecx_10)
                                var_8_1.b = 6
                                
                                if (var_78_1 == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else if ((*(*var_78_1 + 8))(var_38, var_60, result_2, edi_1) == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else if (sub_6c9230(&var_20, edi_1) == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else if (___std_fs_change_permissions@12(var_64, &var_38) == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else
                                    sub_4059a0(&var_38)
                                    ebx.b = 1
            
            sub_403320(&var_5c)
        else
            ebx.b = 0
        
        var_8_1.b = 7
        
        if (var_78_1 != 0)
            (*(*var_78_1 + 4))(eax_2)
    
    result = result_1
    
    if (result != 0)
        sub_403160(result, var_68_1 - result, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
