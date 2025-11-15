// 函数: sub_4551d0
// 地址: 0x4551d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b6f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_6c = nullptr
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_8_1 = 0
var_8_1.b = 1
var_8_1.b = 0
void* var_30
uint32_t ebx
ebx.b = sub_67edf0(sub_5f20c0(&var_30, arg3), &var_6c).b
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

void* esi = var_6c
BOOL result

if (ebx.b != 0)
    result.b = esi == var_68

if (ebx.b == 0 || result.b != 0)
    ebx.b = 0
else
    struct fileimage::CFileImageAnalyser::VTable* const var_54 =
        &fileimage::CFileImageAnalyser::`vftable'
    BOOL var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    var_8_1.b = 3
    
    if (sub_6c9360(&var_54, &var_48, 4) == 0)
        ebx.b = 0
    else if (sub_407560(&var_48, "JDBG") == 0)
        ebx.b = 0
    else if (sub_61ec90(&var_54, arg1) == 0)
        ebx.b = 0
    else
        int32_t eax_9 = *arg1
        
        if (eax_9 s< 3)
            ebx.b = 0
        else
            if (eax_9 s> 4)
                goto label_455343
            
            int32_t var_1c_1 = 0xf
            int32_t var_20_1 = 0
            var_30.b = 0
            var_8_1.b = 4
            char eax_10 = sub_6c9360(&var_54, &var_30, 4)
            char eax_11
            
            if (eax_10 != 0)
                eax_11 = sub_407560(&var_30, "KEYC")
            
            if (eax_10 == 0 || eax_11 == 0 || esi + 4 u> var_68)
                sub_403320(&var_30)
                ebx.b = 0
            else
                void* var_50_2 = esi + 4
                var_8_1.b = 3
                sub_403320(&var_30)
            label_455343:
                uint32_t var_70
                uint32_t var_58
                
                if (sub_61ec90(&var_54, &var_70) == 0)
                    ebx.b = 0
                else if (sub_61ec90(&var_54, &var_58) == 0)
                    ebx.b = 0
                else
                    void* edi_1 = var_70
                    
                    if (edi_1 s<= 0)
                        ebx.b = 0
                    else
                        ebx = var_58
                        
                        if (ebx s<= 0)
                            ebx.b = 0
                        else
                            char* var_24
                            sub_431b80(&var_24, edi_1)
                            var_8_1.b = 5
                            
                            if (sub_6c9430(&var_54, var_24, edi_1) != 0)
                                sub_405950(arg2, ebx)
                                struct commonsystemdata::CZlibDecompressor::VTable* var_5c =
                                    &commonsystemdata::CZlibDecompressor::`vftable'
                                var_58 = 0
                                var_8_1.b = 6
                                
                                if (sub_454990(&var_5c) == 0)
                                    ebx.b = 0
                                else
                                    uint32_t ecx_20 = var_58
                                    ebx = *arg2
                                    
                                    if (ecx_20 == 0)
                                        ebx.b = 0
                                    else if ((*(*ecx_20 + 8))(ebx, arg2[1] - ebx, var_24, edi_1)
                                            == 0)
                                        ebx.b = 0
                                    else
                                        ebx.b = 1
                                
                                std::basic_filebuf<char,struct std::char_traits<char> >::~basic_filebuf<char,struct std::char_traits<char> >(
                                    &var_5c)
                                sub_4059a0(&var_24)
                            else
                                ebx.b = 0
                                sub_4059a0(&var_24)
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, var_34_1 + 1, 1)
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0

if (esi != 0)
    sub_403160(esi, var_64 - esi, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
