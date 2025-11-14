// 函数: sub_5203f0
// 地址: 0x5203f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2d60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*(arg1 + 0x1c) != 0)
    int32_t* var_40
    sub_520ed0(arg1, &var_40)
    int32_t var_4 = 0
    int32_t var_30
    int32_t var_2c
    void* ebx
    
    if (var_30 != 0)
        int32_t* var_50 = nullptr
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        var_4.b = 1
        int32_t var_44
        result = sub_5205f0(arg1, &var_50, &var_44)
        int32_t* edi_1 = var_50
        
        if (result != 0)
            struct fileimage::CFileImageMaker::VTable* var_60 =
                &fileimage::CFileImageMaker::`vftable'
            int32_t var_5c = 0
            int32_t var_58_1 = 0
            int32_t var_54_1 = 0
            var_4.b = 2
            int32_t var_28
            sub_401f60(&var_28, &data_6e31ac)
            var_4.b = 3
            sub_468f70(&var_60, &var_28)
            var_4.b = 2
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            char var_61 = 0
            sub_414b60(&var_5c, &var_61)
            var_61 = 0
            sub_414b60(&var_5c, &var_61)
            var_61 = 0
            sub_414b60(&var_5c, &var_61)
            var_61 = 0
            sub_414b60(&var_5c, &var_61)
            sub_468ec0(&var_60, var_44)
            ebx = var_4c_1 - edi_1
            sub_468ec0(&var_60, ebx)
            
            if (edi_1 != var_4c_1)
                sub_468fc0(&var_60, edi_1, ebx)
            
            if (sub_604d10(&var_40, &var_5c) != 0)
                ebx.b = 1
            else
                int32_t* eax_6 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_6 = var_40
                
                int32_t* var_78_13 = eax_6
                sub_64b530(0x6e31b0)
                ebx.b = 0
            
            sub_468e60(&var_60)
        else
            ebx.b = 0
        
        if (edi_1 != 0)
            j__free(edi_1)
    else
        ebx.b = 0
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    result = ebx.b
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
