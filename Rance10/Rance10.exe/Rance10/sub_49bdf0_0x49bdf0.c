// 函数: sub_49bdf0
// 地址: 0x49bdf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e6e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xc) = *(arg1 + 8)
void* esi = arg1 + 0x14
void* result

if ((*(**(arg1 + 4) + 0x10))(esi).b != 0)
    void* result_1 = nullptr
    int32_t var_68_1 = 0
    int32_t var_64_1 = 0
    int32_t var_8_1 = 0
    bool eax_8 = (*(**(arg1 + 4) + 0xc))(esi, &result_1)
    void* result_2
    
    if (eax_8 != 0)
        result_2 = result_1
    
    void* ebx
    void* var_60
    
    if (eax_8 == 0 || result_2 == var_68_1)
        if (*(esi + 0x14) u>= 0x10)
            esi = *esi
        
        var_60 = esi
        void* var_5c
        sub_403360(&var_5c, 0x760d10)
        var_8_1.b = 1
        var_8_1.b = 2
        char var_2c
        sub_6c52e0(sub_409240(&var_60, &var_5c, &var_2c, &var_60))
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        ebx.b = 0
    else
        struct fileimage::CFileImageAnalyser::VTable* const var_20 =
            &fileimage::CFileImageAnalyser::`vftable'
        void* result_3 = result_2
        void* var_18_1 = var_68_1
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        var_8_1.b = 4
        
        if (sub_61ed80(&var_20, &var_44) == 0)
        label_49bf39:
            ebx.b = 0
            sub_403320(&var_44)
        else
            if (sub_407560(&var_44, 0x760d40) == 0)
                goto label_49bf39
            
            if (sub_61ec90(&var_20, &var_60) == 0 || var_60 != 1)
                goto label_49bf39
            
            if (sub_61ec90(&var_20, &var_60) == 0)
                goto label_49bf39
            
            void* edi_1 = var_60
            int32_t esi_1 = 0
            
            if (edi_1 s> 0)
                do
                    var_60 = nullptr
                    
                    if (sub_61ec90(&var_20, &var_60) == 0)
                        goto label_49bf39
                    
                    sub_404370(arg1 + 8, &var_60)
                    esi_1 += 1
                while (esi_1 s< edi_1)
            
            ebx.b = 1
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
