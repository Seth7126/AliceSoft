// 函数: sub_44fcd0
// 地址: 0x44fcd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_75d4d4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(ebx + 0x14) != 0)
    int32_t* var_34 = nullptr
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_4 = 0
    int32_t var_38
    result = sub_44fec0(ebx, &var_34, &var_38)
    int32_t* edi_1 = var_34
    
    if (result.b != 0)
        struct fileimage::CFileImageMaker::VTable* const var_48 =
            &fileimage::CFileImageMaker::`vftable'
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
        int32_t* var_40_1 = nullptr
        int32_t var_3c_1 = 0
        var_4.b = 1
        int32_t var_28
        sub_401f60(&var_28, "CSD")
        var_4.b = 2
        sub_468f70(&var_48, &var_28)
        var_4.b = 1
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        char var_49 = 0
        sub_414b60(&result_1, &var_49)
        var_49 = 0
        sub_414b60(&result_1, &var_49)
        var_49 = 0
        sub_414b60(&result_1, &var_49)
        var_49 = 0
        sub_414b60(&result_1, &var_49)
        sub_468ec0(&var_48, var_38)
        void* ebp_2 = var_30_1 - edi_1
        sub_468ec0(&var_48, ebp_2)
        
        if (edi_1 != var_30_1 && edi_1 != 0 && ebp_2 s> 0)
            int32_t var_68_10 = var_38
            sub_468ff0(&result_1, var_40_1, edi_1, edi_1 + ebp_2)
        
        void* esi_1 = ebx + 4
        
        if (sub_604d10(esi_1, &result_1) != 0)
            ebx.b = 1
        else
            if (*(esi_1 + 0x14) u>= 0x10)
                esi_1 = *esi_1
            
            void* var_68_12 = esi_1
            sub_64b530(0x6db868)
            ebx.b = 0
        
        result = result_1
        
        if (result != 0)
            j__free(result)
    else
        ebx.b = 0
    
    if (edi_1 != 0)
        j__free(edi_1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
