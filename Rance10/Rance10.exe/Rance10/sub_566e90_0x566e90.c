// 函数: sub_566e90
// 地址: 0x566e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_d8 = 0xffffffff
int32_t (* var_dc)(void* arg1) = sub_73c00c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFilePath::VTable* var_d4
int32_t eax_2 = __security_cookie ^ &var_d4
int32_t var_108 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_e4 = arg3
char var_f0 = 0
void* edi = sub_566690(arg1, arg2, arg3)
void* result

if (edi != 0)
    result = sub_566690(arg1, arg2, arg5)
    int32_t* result_1 = result
    
    if (result == 0)
        result.b = 0
    else
        int32_t* ebx_1 = sub_5667f0(arg2, var_e4, arg4)
        int32_t* var_e8_1 = ebx_1
        
        if (ebx_1 == 0)
            result.b = 0
        else
            result = sub_59f3c0(result_1, arg6)
            
            if (result == 0)
                result.b = 0
            else
                void var_6c
                sub_4033b0(&var_6c, result + 8)
                int32_t var_d8_1 = 0
                void* var_20
                
                if (sub_59f440(edi, &var_6c) != 0xffffffff)
                    var_e4 = 1
                    int32_t var_40_1 = 0xf
                    int32_t var_44_1 = 0
                    char var_54 = 0
                    var_d8_1.b = 1
                    char* eax_5 = *(result + 0x18)
                    
                    if (eax_5 u< 4)
                        ebx_1.b = 0
                    else
                        void* ecx_9
                        
                        if (*(result + 0x1c) u< 0x10)
                            ecx_9 = result + 8
                        else
                            ecx_9 = *(result + 8)
                        
                        if (*(ecx_9 + eax_5 - 4) != 0x5f)
                            ebx_1.b = 0
                        else
                            var_f0 = 1
                            eax_5 = sub_6ca340(sub_405480(result + 8, &var_20, &eax_5[0xfffffffd], 
                                0xffffffff))
                            
                            if (eax_5.b == 0)
                                ebx_1.b = 0
                            else
                                ebx_1.b = 1
                    
                    if ((var_f0 & 1) != 0)
                        eax_5 = sub_403320(&var_20)
                    
                    char* eax_10
                    
                    if (ebx_1.b == 0)
                        var_e4 = 1
                        eax_10 = sub_4175e0(eax_5, result + 8, &var_20, U"_")
                    else
                        eax_10 = sub_405480(result + 8, &var_20, 0, *(result + 0x18) - 3)
                    
                    sub_409670(&var_54, eax_10)
                    sub_403320(&var_20)
                    int32_t i
                    
                    do
                        var_e4 += 1
                        sub_403360(&var_20, "%03d")
                        var_d8_1.b = 2
                        char var_9c
                        char* eax_12 = sub_409350(&var_e4, &var_20, &var_9c, &var_e4)
                        var_d8_1.b = 3
                        char var_84
                        sub_409670(&var_6c, sub_407820(eax_12, &var_54, &var_84, eax_12))
                        int32_t var_70
                        
                        if (var_70 u>= 0x10)
                            sub_403160(var_84.d, var_70 + 1, 1)
                        
                        var_70 = 0xf
                        int32_t var_74_1 = 0
                        var_84 = 0
                        int32_t var_88
                        
                        if (var_88 u>= 0x10)
                            sub_403160(var_9c.d, var_88 + 1, 1)
                        
                        var_d8_1.b = 1
                        var_88 = 0xf
                        int32_t var_8c_1 = 0
                        var_9c = 0
                        int32_t var_c
                        
                        if (var_c u>= 0x10)
                            sub_403160(var_20, var_c + 1, 1)
                        
                        i = sub_59f440(edi, &var_6c)
                    while (i != 0xffffffff)
                    var_d8_1.b = 0
                    sub_403320(&var_54)
                    ebx_1 = var_e8_1
                
                int32_t esi_2 = *ebx_1
                ebx_1.b = *(ebx_1 + 0x34a)
                sub_5672c0(var_e8_1, result)
                *var_e8_1 = esi_2
                *(var_e8_1 + 0x34a) = ebx_1.b
                
                if (&var_e8_1[2] != &var_6c)
                    sub_403590(&var_e8_1[2], &var_6c, 0, 0xffffffff)
                
                if (sub_4076d0(&result_1[8], edi + 0x20) == 0)
                    struct filesystem::CFilePath::VTable* var_3c = &filesystem::CFilePath::`vftable'
                    int32_t var_24_1 = 0xf
                    int32_t var_28_1 = 0
                    char var_38 = 0
                    var_d8_1.b = 4
                    sub_67e790(&var_3c)
                    sub_403360(&var_20, "3D")
                    var_d8_1.b = 5
                    sub_67eaf0(&var_3c)
                    sub_4055a0(&var_38, &var_20, 0, 0xffffffff)
                    var_d8_1.b = 4
                    sub_403320(&var_20)
                    sub_5678b0(&var_d4, &var_3c)
                    var_d8_1.b = 6
                    sub_67e9d0(&var_d4, &result_1[8])
                    struct filesystem::CFilePath::VTable* var_b8
                    sub_5678b0(&var_b8, &var_3c)
                    var_d8_1.b = 7
                    sub_67e9d0(&var_b8, edi + 0x20)
                    int32_t eax_22 = *(result + 4)
                    
                    if (eax_22 == 0)
                        if (sub_567a90(result + 0x210, &var_d4, &var_b8, result + 0x210) != 0)
                            ebx_1.b = 1
                        else
                            ebx_1.b = 0
                    else
                        if (eax_22 == 1)
                            sub_567950(result + 0x22c, &var_d4, &var_b8, result + 0x22c)
                        
                        ebx_1.b = 1
                    
                    sub_67e530(&var_b8)
                    sub_67e530(&var_d4)
                    sub_67e530(&var_3c)
                else
                    ebx_1.b = 1
                
                sub_403320(&var_6c)
                result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_d4)
return result
