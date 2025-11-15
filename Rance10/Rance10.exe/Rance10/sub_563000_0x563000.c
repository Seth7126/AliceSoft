// 函数: sub_563000
// 地址: 0x563000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73baee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1 + 8
int64_t* result

if ((*(**(arg1 + 4) + 0x10))(esi).b != 0)
    void* var_6c = nullptr
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    int32_t var_8_1 = 0
    void* edx_2
    void* ebx
    uint32_t var_60
    
    if ((*(**(arg1 + 4) + 0xc))(esi, &var_6c).b != 0)
        edx_2 = var_6c
        result.b = edx_2 == var_68_1
        
        if (result.b == 0)
            struct passregister::CZlibDecompressor::VTable* const var_7c =
                &passregister::CZlibDecompressor::`vftable'
            int32_t* var_78_1 = nullptr
            var_8_1.b = 3
            
            if (sub_454990(&var_7c).b != 0)
                void* eax_12 = var_6c
                void* eax_13 = var_68_1
                struct fileimage::CFileImageAnalyser::VTable* const var_20 =
                    &fileimage::CFileImageAnalyser::`vftable'
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = 0
                char var_5c = 0
                var_8_1.b = 5
                
                if (sub_61ed80(&var_20, &var_5c) == 0)
                    ebx.b = 0
                else if (sub_407560(&var_5c, 0x767c04) == 0)
                    ebx.b = 0
                else if (sub_61ec90(&var_20, &var_60) == 0 || var_60 != 0)
                    ebx.b = 0
                else
                    uint32_t var_70
                    
                    if (sub_6c92b0(&var_20, &var_60) == 0)
                        ebx.b = 0
                    else if (sub_6c92b0(&var_20, &var_70) == 0)
                        ebx.b = 0
                    else
                        uint32_t ecx_13 = var_60
                        
                        if (ecx_13 == 0)
                            ebx.b = 1
                        else
                            uint32_t edi_1 = var_70
                            
                            if (edi_1 == 0)
                                ebx.b = 1
                            else if (eax_12 u>= eax_13 || eax_12 == 0 || eax_12 + edi_1 u> eax_13)
                                ebx.b = 0
                            else
                                int32_t var_38
                                sub_431b80(&var_38, ecx_13)
                                var_8_1.b = 6
                                
                                if (var_78_1 == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else if ((*(*var_78_1 + 8))(var_38, var_60, eax_12, edi_1) == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else if (sub_6c9230(&var_20, edi_1) == 0)
                                    sub_4059a0(&var_38)
                                    ebx.b = 0
                                else if (sub_563650(arg1, &var_38) == 0)
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
            
            edx_2 = var_6c
        else
            ebx.b = 1
    else
        if (*(esi + 0x14) u>= 0x10)
            esi = *esi
        
        var_60 = esi
        void* var_2c
        sub_403360(&var_2c, 0x767bd4)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_44
        sub_6c52e0(sub_409240(&var_60, &var_2c, &var_44, &var_60))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int64_t* var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        ebx.b = 0
        edx_2 = var_6c
    
    if (edx_2 != 0)
        sub_403160(edx_2, var_64_1 - edx_2, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
