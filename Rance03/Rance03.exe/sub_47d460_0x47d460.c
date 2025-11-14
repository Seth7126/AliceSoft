// 函数: sub_47d460
// 地址: 0x47d460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba1f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_70 = 0
enum MESSAGEBOX_RESULT result

if (*(arg1 + 0x24) != *(arg1 + 0x28) && *(arg1 + 0x18) != 0)
    void* edi_1 = arg1 + 8
    
    if (sub_605500(edi_1).b == 0)
        result.b = 1
    else
        int32_t var_4c = 0
        struct filesystem::CFile::VTable* var_48_1 = nullptr
        int32_t var_44_1 = 0
        int32_t var_4 = 0
        struct filesystem::CFile::VTable* const var_60 = &filesystem::CFile::`vftable'
        int32_t var_5c_1 = 0xffffffff
        int32_t var_58_1 = 0
        int32_t var_54_1 = 0
        var_4.b = 1
        var_70 = 1
        char eax_5 = sub_604a80(edi_1, &var_4c)
        int32_t ebp_1 = var_4c
        char var_71_1
        
        if (eax_5 != 0)
            var_71_1 = 0
        
        if (eax_5 == 0 || ebp_1 == var_48_1)
            var_71_1 = 1
        
        int32_t var_4_1 = 0
        sub_604940(&var_60)
        struct filesystem::CFile::VTable* const ebx_1
        
        if (var_71_1 == 0)
            struct fileimage::CFileImageAnalyser::VTable* const var_6c =
                &fileimage::CFileImageAnalyser::`vftable'
            int32_t var_68_1 = ebp_1
            void* var_64_1 = var_48_1
            int32_t var_14_1 = 0xf
            int32_t var_18_1 = 0
            char var_28 = 0
            var_4_1.b = 3
            
            if (sub_468d00(&var_6c, &var_28) == 0)
                ebx_1.b = 0
            else if (sub_40c250(&var_28, 0x6ddb18) == 0)
                ebx_1.b = 0
            else if (sub_468b20(&var_6c, &var_70) == 0 || var_70 != 0)
                ebx_1.b = 0
            else
                int32_t var_2c_1 = 0xf
                int32_t var_30_1 = 0
                char var_40 = 0
                var_4_1.b = 4
                
                if (sub_468d00(&var_6c, &var_40) == 0)
                    ebx_1.b = 0
                    sub_401fb0(&var_40)
                else
                    if (arg1 + 0x30 != &var_40)
                        sub_401ff0(arg1 + 0x30, &var_40, 0, 0xffffffff)
                    
                    uint32_t var_50
                    
                    if (sub_468b20(&var_6c, &var_50) == 0)
                        ebx_1.b = 0
                        sub_401fb0(&var_40)
                    else if (sub_468b70(&var_6c, &var_70) == 0)
                        ebx_1.b = 0
                        sub_401fb0(&var_40)
                    else
                        uint32_t eax_13 = var_70
                        
                        if (eax_13 == 0)
                            ebx_1.b = 0
                            sub_401fb0(&var_40)
                        else
                            sub_448e90(&var_60, eax_13)
                            ebx_1 = var_60
                            void* edi_3 = var_5c_1 - ebx_1
                            char eax_14 = sub_468dd0(&var_6c, ebx_1, edi_3)
                            void* eax_20
                            
                            if (eax_14 != 0)
                                _memset(*(arg1 + 0x24), 0, *(arg1 + 0x28) - *(arg1 + 0x24))
                                uint32_t ecx_11 = *(arg1 + 0x20)
                                
                                if (var_50 s< ecx_11)
                                    ecx_11 = var_50
                                
                                int32_t eax_18
                                int32_t edx_1
                                edx_1:eax_18 = sx.q(ecx_11 + 7)
                                eax_20 = (eax_18 + (edx_1 & 7)) s>> 3
                            
                            if (eax_14 == 0 || eax_20 u> *(arg1 + 0x28) - *(arg1 + 0x24)
                                    || eax_20 u< edi_3)
                                ebx_1.b = 0
                                sub_403510(&var_60)
                                sub_401fb0(&var_40)
                            else
                                sub_69d850(*(arg1 + 0x24), ebx_1, eax_20, eax_4)
                                ebx_1.b = 1
                                sub_403510(&var_60)
                                sub_401fb0(&var_40)
            
            sub_401fb0(&var_28)
        else
            if (*(edi_1 + 0x14) u>= 0x10)
                edi_1 = *edi_1
            
            void* var_90_2 = edi_1
            sub_64b530(0x6ddb5c)
            ebx_1.b = 0
        
        if (ebp_1 != 0)
            j__free(ebp_1)
        
        result.b = ebx_1.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
