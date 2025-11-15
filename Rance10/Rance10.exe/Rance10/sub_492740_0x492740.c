// 函数: sub_492740
// 地址: 0x492740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_78 = 0xffffffff
int32_t (* var_7c)(void* arg1) = sub_72fa40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t ebx
int32_t var_9c = ebx
int32_t esi
int32_t var_a0 = esi
int32_t edi
int32_t var_a4 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (**arg1)(0x76067c, eax_2)

if (result != 0)
    int32_t* eax_5 = (**arg1)(0x76068c)
    ebx.b = 0
    
    if (eax_5 != 0)
        ebx.b = (**eax_5)()
    
    char* var_98
    sub_403360(&var_98, (*(*result + 0xc))())
    int32_t var_78_1 = 0
    struct filesystem::CFilePath::VTable* const var_40 = &filesystem::CFilePath::`vftable'
    int32_t* var_28_1 = 0xf
    int32_t var_2c_1 = 0
    char var_3c = 0
    void* var_18_3 = 0xffffffff
    int32_t var_1c_1 = 0
    char* var_20 = &data_7fd490
    var_78_1.b = 1
    sub_403590(&var_3c, var_20, var_1c_1, var_18_3)
    sub_67eb70(&var_40)
    char* eax_10 = sub_405070(&var_74, &var_98)
    var_78_1.b = 2
    char* eax_11 = sub_4176f0(eax_10.b, eax_10, &var_20, "EX.ex")
    var_78_1.b = 3
    sub_67eaf0(&var_40)
    void* var_18_5 = 0xffffffff
    int32_t var_1c_2 = 0
    var_20 = eax_11
    sub_4055a0(&var_3c, var_20, var_1c_2, var_18_5)
    int32_t var_c
    
    if (var_c u>= 0x10)
        int32_t var_18_6 = 1
        var_20 = var_20
        sub_403160(var_20, var_c + 1, var_18_6)
    
    var_78_1.b = 1
    var_c = 0xf
    int32_t var_10 = 0
    var_20.b = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        int32_t var_18_7 = 1
        var_20 = var_74
        sub_403160(var_20, var_60 + 1, var_18_7)
    
    char* ecx_10 = &var_3c
    
    if (var_28_1 u>= 0x10)
        ecx_10 = var_3c.d
    
    void* esi_3 = *data_7fcb70
    struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** eax_17 =
        sub_46d320(ecx_10)
    data_7fcb70
    
    if ((*(esi_3 + 0x18))(eax_17) == 0)
        ebx.b = 0
    else if (ebx.b == 0)
        sub_492a50(nullptr, data_7fcb70)
        ebx.b = 1
    else
        struct filesystem::CFilePath::VTable* var_5c = &filesystem::CFilePath::`vftable'
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        char var_58 = 0
        var_78_1.b = 4
        sub_67e790(&var_5c)
        sub_403360(&var_74, "EX")
        var_78_1.b = 5
        sub_67eaf0(&var_5c)
        void* var_18_10 = 0xffffffff
        int32_t var_1c_5 = 0
        var_20 = &var_74
        sub_4055a0(&var_58, var_20, var_1c_5, var_18_10)
        var_78_1.b = 4
        sub_403320(&var_74)
        char* ecx_17 = &var_58
        
        if (var_44_1 u>= 0x10)
            ecx_17 = var_58.d
        
        void* esi_4 = *data_7fcb70
        struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** eax_21 =
            sub_46d450(ecx_17)
        data_7fcb70
        
        if ((*(esi_4 + 0x14))(eax_21) == 0)
            sub_67e530(&var_5c)
            ebx.b = 0
        else
            struct filesystem::CFilePath::VTable* var_24 = &filesystem::CFilePath::`vftable'
            var_c = 0xf
            var_10 = 0
            var_20.b = 0
            var_78_1.b = 6
            sub_67e8b0(&var_24)
            sub_403360(&var_74, "EX")
            var_78_1.b = 7
            sub_67eaf0(&var_24)
            void* var_18_13 = 0xffffffff
            int32_t var_1c_6 = 0
            var_20 = &var_74
            sub_4055a0(&var_20, var_20, var_1c_6, var_18_13)
            var_78_1.b = 6
            sub_403320(&var_74)
            char* ecx_24 = &var_20
            
            if (var_c u>= 0x10)
                ecx_24 = var_20
            
            void* esi_5 = *data_7fcb70
            struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** eax_25 =
                sub_46d450(ecx_24)
            data_7fcb70
            struct filesystem::CFilePath::VTable** ecx_26 = &var_24
            
            if ((*(esi_5 + 0x18))(eax_25) != 0)
                sub_67e530(ecx_26)
                var_78_1.b = 1
                sub_67e530(&var_5c)
                sub_492a50(nullptr, data_7fcb70)
                ebx.b = 1
            else
                sub_67e530(ecx_26)
                sub_67e530(&var_5c)
                ebx.b = 0
    
    var_40 = &filesystem::CFilePath::`vftable'
    
    if (var_28_1 u>= 0x10)
        int32_t var_18_15 = 1
        var_20 = var_3c.d
        sub_403160(var_20, var_28_1 + 1, var_18_15)
    
    int32_t var_28_2 = 0xf
    int32_t var_2c_2 = 0
    var_3c = 0
    int32_t var_84
    
    if (var_84 u>= 0x10)
        int32_t var_18_16 = 1
        var_20 = var_98
        sub_403160(var_20, var_84 + 1, var_18_16)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_74)
return result
