// 函数: sub_45a210
// 地址: 0x45a210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b80f3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_80 = arg4
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
var_94 = 0
uint32_t var_90 = 0
int32_t* result_1
__builtin_memset(&result_1, 0, 0x18)
var_4.b = 2
void* ebx
char var_5c

if (*(arg2 + 4) + 8 u<= *(arg2 + 8))
    if (sub_468c20(arg2, &var_2c, 4) == 0)
        ebx.b = 0
    else if (sub_468b20(arg2, &var_94) == 0)
        ebx.b = 0
    else if (sub_468b20(arg2, &var_90) == 0)
        ebx.b = 0
    else
        void* edi_1 = var_94
        
        if (*(arg2 + 4) + edi_1 u<= *(arg2 + 8))
            sub_403540(&result_1, edi_1)
            
            if (sub_468dd0(arg2, result_1, edi_1) == 0)
                ebx.b = 0
            else
                sub_45a6a0(&result_1)
                uint32_t esi_1 = var_90
                int32_t var_70
                sub_403540(&var_70, esi_1)
                struct exfile::CZlibDecompressor::VTable* const var_64 =
                    &exfile::CZlibDecompressor::`vftable'
                int32_t* var_60_1 = nullptr
                var_4.b = 5
                sub_451e10(&var_64)
                int32_t* ebp_1 = var_60_1
                
                if (ebp_1 != 0)
                    (*(*ebp_1 + 8))(var_70, esi_1, result_1, edi_1)
                    (*(*ebp_1 + 4))(eax_4)
                    ebp_1 = nullptr
                    int32_t var_60_2 = 0
                
                int32_t ecx_18 = var_70
                struct fileimage::CFileImageAnalyser::VTable* const var_8c =
                    &fileimage::CFileImageAnalyser::`vftable'
                int32_t var_6c
                int32_t edx_2 = var_6c
                int32_t var_88_1 = ecx_18
                int32_t var_84_1 = edx_2
                int32_t esi_2 = 0
                var_4.b = 6
                
                if (arg3 s<= 0)
                label_45a659:
                    ebx.b = 1
                else
                    uint32_t edi_2 = var_80
                    
                    while (true)
                        void var_44
                        
                        if (ecx_18 + 8 u> edx_2)
                            sub_401f60(&var_44, 0x6dbb20)
                            var_4.b = 7
                            sub_456a00(*(arg1 + 4), &var_44)
                            sub_401fb0(&var_44)
                        else if (sub_468b20(&var_8c, &var_94) != 0
                                && sub_468b20(&var_8c, &var_80) != 0)
                            uint32_t ecx_21 = var_80
                            
                            if (ecx_21 != 0)
                                if (var_88_1 + ecx_21 u<= var_84_1)
                                    int32_t var_48_2 = 0xf
                                    int32_t var_4c_2 = 0
                                    var_5c = 0
                                    var_4.b = 9
                                    
                                    if (sub_468b20(&var_8c, &var_90) != 0
                                            && sub_468c20(&var_8c, &var_5c, var_90) != 0)
                                        int32_t* eax_29
                                        
                                        if (sub_4612f0(edi_2, &var_5c) != 0)
                                            sub_401f60(&var_44, 0x6dbb88)
                                            var_4.b = 0xa
                                            eax_29 = &var_44
                                        else
                                            void* eax_26 = sub_460bd0(edi_2, &var_5c)
                                            
                                            if (sub_45a740(arg1, var_94, &var_8c, eax_26) == 0)
                                                char* eax_28 = &var_5c
                                                
                                                if (var_48_2 u>= 0x10)
                                                    eax_28 = var_5c.d
                                                
                                                char* var_ac_20 = eax_28
                                                eax_29 = sub_4691f0(&var_44, 0x6dbc78)
                                                var_4.b = 0xb
                                            else
                                                var_4.b = 6
                                                sub_401fb0(&var_5c)
                                                esi_2 += 1
                                                
                                                if (esi_2 s>= arg3)
                                                    goto label_45a659
                                                
                                                edx_2 = var_84_1
                                                ecx_18 = var_88_1
                                                continue
                                        
                                        sub_456a00(*(arg1 + 4), eax_29)
                                        sub_401fb0(&var_44)
                                    
                                    sub_401fb0(&var_5c)
                                    ebx.b = 0
                                    break
                                
                                sub_401f60(&var_44, 0x6dbba0)
                                var_4.b = 8
                                sub_456a00(*(arg1 + 4), &var_44)
                                sub_401fb0(&var_44)
                        ebx.b = 0
                        break
                
                var_8c = &fileimage::CFileImageAnalyser::`vftable'
                var_4.b = 2
                
                if (ebp_1 != 0)
                    (*(*ebp_1 + 4))(eax_4)
                
                int32_t ecx_37 = var_70
                
                if (ecx_37 != 0)
                    j__free(ecx_37)
        else
            sub_401f60(&var_5c, 0x6dbb54)
            var_4.b = 4
            sub_456a00(*(arg1 + 4), &var_5c)
            sub_401fb0(&var_5c)
            ebx.b = 0
else
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    sub_402110(&var_5c, 0x6dbc3c, 0x31)
    var_4.b = 3
    sub_456a00(*(arg1 + 4), &var_5c)
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c.d)
    
    ebx.b = 0
int32_t* result = result_1

if (result != 0)
    j__free(result)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
