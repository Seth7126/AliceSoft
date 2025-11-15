// 函数: sub_5632a0
// 地址: 0x5632a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bb48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x20) != 0)
    char* var_64 = nullptr
    int32_t var_60_1 = 0
    int32_t var_5c_1 = 0
    int32_t var_8_1 = 0
    void* var_48
    result = sub_563490(arg1, &var_64, &var_48)
    char* edi_1 = var_64
    void* ebx
    
    if (result != 0)
        struct fileimage::CFileImageMaker::VTable* const var_58 =
            &fileimage::CFileImageMaker::`vftable'
        void* var_54 = nullptr
        char* var_50_1 = nullptr
        int32_t var_4c_1 = 0
        var_8_1.b = 1
        void* var_2c
        sub_403360(&var_2c, "PSR")
        var_8_1.b = 2
        sub_6ca1a0(&var_58, &var_2c)
        var_8_1.b = 1
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        sub_6ca100(&var_58, 0)
        sub_6ca100(&var_58, var_48)
        void* eax_6 = var_60_1 - edi_1
        var_48 = eax_6
        sub_6ca100(&var_58, eax_6)
        
        if (edi_1 != var_60_1 && edi_1 != 0)
            void* eax_8 = var_48
            
            if (eax_8 s> 0)
                var_48.b = 0
                void* var_78_5 = var_48
                sub_6ca200(&var_54, var_50_1, edi_1, eax_8 + edi_1)
        
        void* esi_1 = arg1 + 8
        
        if ((*(**(arg1 + 4) + 8))(esi_1, &var_54) != 0)
            ebx.b = 1
        else
            if (*(esi_1 + 0x14) u>= 0x10)
                esi_1 = *esi_1
            
            var_48 = esi_1
            sub_403360(&var_2c, 0x767c0c)
            var_8_1.b = 3
            var_8_1.b = 4
            void var_44
            sub_6c52e0(sub_409240(&var_48, &var_2c, &var_44, &var_48))
            sub_403320(&var_44)
            sub_403320(&var_2c)
            ebx.b = 0
        
        void* ecx_13 = var_54
        var_58 = &fileimage::CFileImageMaker::`vftable'
        
        if (ecx_13 != 0)
            sub_403160(ecx_13, var_4c_1 - ecx_13, 1)
            var_54 = nullptr
            int32_t var_50_2 = 0
            int32_t var_4c_2 = 0
    else
        ebx.b = 0
    
    if (edi_1 != 0)
        sub_403160(edi_1, var_5c_1 - edi_1, 1)
    
    result = ebx.b
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
