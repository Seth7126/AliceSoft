// 函数: sub_4642c0
// 地址: 0x4642c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72c552
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0xf
int32_t var_50 = 0
char var_60 = 0
int32_t var_8_1 = 0
uint32_t var_80 = 0
uint32_t var_7c = 0
char* var_b4
__builtin_memset(&var_b4, 0, 0x18)
var_8_1.b = 2
void* ebx
void* var_48
char var_30

if (*(arg2 + 4) + 8 u<= *(arg2 + 8))
    if (sub_6c9360(arg2, &var_60, 4).b == 0)
        ebx.b = 0
    else if (sub_61ec90(arg2, &var_80).b == 0)
        ebx.b = 0
    else if (sub_61ec90(arg2, &var_7c).b == 0)
        ebx.b = 0
    else
        uint32_t edi_1 = var_80
        
        if (*(arg2 + 4) + edi_1 u<= *(arg2 + 8))
            sub_405950(&var_b4, edi_1)
            
            if (sub_6c9430(arg2, var_b4, edi_1).b == 0)
                ebx.b = 0
            else
                sub_464790(&var_b4)
                void* var_a8
                sub_405950(&var_a8, var_7c)
                struct exfile::CZlibDecompressor::VTable* const var_9c =
                    &exfile::CZlibDecompressor::`vftable'
                int32_t* var_98_1 = nullptr
                var_8_1.b = 6
                sub_454990(&var_9c)
                int32_t* edi_2
                
                if (var_98_1 == 0)
                    edi_2 = var_98_1
                else
                    (*(*var_98_1 + 8))(var_a8, var_7c, var_b4, edi_1)
                    (*(*var_98_1 + 4))(eax_2)
                    edi_2 = nullptr
                    int32_t var_98_2 = 0
                
                void* ecx_22 = var_a8
                struct fileimage::CFileImageAnalyser::VTable* const var_8c =
                    &fileimage::CFileImageAnalyser::`vftable'
                int32_t var_a4
                void* edx_3 = var_a4
                void* var_88_1 = ecx_22
                void* var_84_1 = edx_3
                int32_t esi_3 = 0
                var_8_1.b = 7
                
                if (arg3 s<= 0)
                label_46473f:
                    ebx.b = 1
                else
                    while (true)
                        uint32_t var_90
                        
                        if (ecx_22 + 8 u> edx_3)
                            sub_403360(&var_48, 0x75e3c4)
                            var_8_1.b = 8
                            sub_45eb40(*(arg1 + 4), &var_48)
                            sub_403320(&var_48)
                        else if (sub_61ec90(&var_8c, &var_90).b != 0
                                && sub_61ec90(&var_8c, &var_80).b != 0)
                            uint32_t ecx_25 = var_80
                            
                            if (ecx_25 != 0)
                                if (var_88_1 + ecx_25 u<= var_84_1)
                                    int32_t var_1c_2 = 0xf
                                    int32_t var_20_2 = 0
                                    var_30 = 0
                                    var_8_1.b = 0xa
                                    
                                    if (sub_61ec90(&var_8c, &var_7c) != 0
                                            && sub_6c9360(&var_8c, &var_30, var_7c) != 0)
                                        if (sub_46ec40(arg4, &var_30) != 0)
                                            sub_403360(&var_48, 0x75e4d4)
                                            var_8_1.b = 0xb
                                            sub_45eb40(*(arg1 + 4), &var_48)
                                        else
                                            struct exfile::CDefineData::VTable** eax_24 =
                                                sub_46e950(arg4, &var_30, 0xffffffff)
                                            
                                            if (sub_464810(var_90, &var_8c, eax_24) == 0)
                                                char* eax_26 = &var_30
                                                
                                                if (var_1c_2 u>= 0x10)
                                                    eax_26 = var_30.d
                                                
                                                var_90 = eax_26
                                                sub_403360(&var_48, 0x75e520)
                                                var_8_1.b = 0xc
                                                void var_78
                                                char* eax_28 =
                                                    sub_409240(&var_90, &var_48, &var_78, &var_90)
                                                var_8_1.b = 0xd
                                                sub_45eb40(*(arg1 + 4), eax_28)
                                                sub_403320(&var_78)
                                            else
                                                var_8_1.b = 7
                                                sub_403320(&var_30)
                                                esi_3 += 1
                                                
                                                if (esi_3 s>= arg3)
                                                    goto label_46473f
                                                
                                                edx_3 = var_84_1
                                                ecx_22 = var_88_1
                                                continue
                                        
                                        sub_403320(&var_48)
                                    
                                    sub_403320(&var_30)
                                    ebx.b = 0
                                    break
                                
                                sub_403360(&var_48, 0x75e4ec)
                                var_8_1.b = 9
                                sub_45eb40(*(arg1 + 4), &var_48)
                                sub_403320(&var_48)
                        ebx.b = 0
                        break
                
                var_8c = &fileimage::CFileImageAnalyser::`vftable'
                var_8_1.b = 0xe
                
                if (edi_2 != 0)
                    (*(*edi_2 + 4))(eax_2)
                
                void* ecx_45 = var_a8
                int32_t var_a0
                
                if (ecx_45 != 0)
                    sub_403160(ecx_45, var_a0 - ecx_45, 1)
        else
            sub_403360(&var_48, 0x75e3f8)
            var_8_1.b = 5
            sub_45eb40(*(arg1 + 4), &var_48)
            sub_403320(&var_48)
            ebx.b = 0
else
    char* var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t* eax_6 = sub_403490(&var_30, 0x75e388, 0x31)
    var_8_1.b = 3
    var_8_1.b = 4
    sub_4055a0(*(arg1 + 4), sub_4175e0(eax_6, &var_30, &var_48, U"\n"), 0, 0xffffffff)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, &var_1c_1[1], 1)
    
    ebx.b = 0
char* ecx_3 = var_b4
int32_t var_ac

if (ecx_3 != 0)
    sub_403160(ecx_3, var_ac - ecx_3, 1)

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

char* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
