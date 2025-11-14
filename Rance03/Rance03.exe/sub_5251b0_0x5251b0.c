// 函数: sub_5251b0
// 地址: 0x5251b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c31f7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_108
int32_t eax_2 = __security_cookie ^ &var_108
int32_t ebx
int32_t var_10c = ebx
int32_t __saved_edi
int32_t var_118 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5255b0(arg1)
struct IDecompressor::nutria::CZlibDecompressor::VTable** result = sub_69adc6(8)

if (result == 0)
    result = nullptr
else
    *result = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
    result[1] = 1

*(arg1 + 0xc) = result

if (result != 0)
    struct filesystem::CFile::VTable* const var_104 = &filesystem::CFile::`vftable'
    struct IDecompressor::nutria::CZlibDecompressor::VTable** hObject = 0xffffffff
    int32_t var_fc_1 = 0
    int32_t var_f8_1 = 0
    int32_t var_4 = 0
    
    if (sub_6049e0(&var_104, arg2) != 0)
        int32_t var_c8_1 = 0xf
        int32_t var_cc_1 = 0
        char var_dc = 0
        var_4.b = 1
        
        if (sub_604f30(&var_104, &var_dc) == 0)
            ebx.b = 0
        else if (sub_40c250(&var_dc, 0x6e33b0) == 0)
            ebx.b = 0
        else
            int32_t var_f4
            
            if (sub_604ee0(&var_104, &var_108) == 0 || var_108 u> 2)
                ebx.b = 0
            else if (sub_604ee0(&var_104, &var_f4) == 0)
                ebx.b = 0
            else
                ebx = 0
                
                if (var_f4 s<= 0)
                label_5254c3:
                    
                    if (sub_604a50(&var_104) == 0)
                        ebx.b = 0
                    else
                        if (arg1 + 0x10 != arg2)
                            sub_401ff0(arg1 + 0x10, arg2, 0, 0xffffffff)
                        
                        ebx.b = 1
                else
                    while (true)
                        int32_t var_b0_1 = 0xf
                        int32_t var_b4_1 = 0
                        char var_c4 = 0
                        int32_t var_98_1 = 0xf
                        int32_t var_9c_1 = 0
                        char var_ac = 0
                        var_4.b = 3
                        int32_t var_f0
                        int32_t var_ec
                        int32_t var_e8
                        
                        if (sub_604ee0(&var_104, &var_f0) != 0 && sub_604ee0(&var_104, &var_ec) != 0
                                && sub_604ee0(&var_104, &var_e8) != 0
                                && sub_604f30(&var_104, &var_c4) != 0)
                            int32_t eax_14 = var_108
                            void var_94
                            
                            if (eax_14 s>= 1)
                                sub_408340(&var_c4, sub_525ee0(&var_94, &var_c4))
                                sub_401fb0(&var_94)
                                eax_14 = var_108
                            
                            if (eax_14 s< 2)
                                goto label_525410
                            
                            if (sub_604f30(&var_104, &var_ac) != 0)
                                sub_408340(&var_ac, sub_525ee0(&var_94, &var_ac))
                                sub_401fb0(&var_94)
                            label_525410:
                                void var_6c
                                sub_402d30(&var_6c, &var_c4)
                                var_4.b = 4
                                var_4.b = 5
                                void var_54
                                char* eax_19 = sub_5263f0(&var_54, &var_6c, 
                                    sub_524f90(&var_94, var_f0, var_ec, var_e8, &var_ac))
                                var_4.b = 6
                                uint32_t ecx_17 = zx.d(data_75dd2c)
                                uint32_t var_11c_16 = ecx_17
                                char* var_120_5 = eax_19
                                void* var_e4
                                sub_5264a0(arg1 + 0x28, &var_e4, ecx_17)
                                sub_525560(&var_54)
                                sub_524fe0(&var_94)
                                sub_401fb0(&var_6c)
                                sub_401fb0(&var_ac)
                                var_4.b = 1
                                sub_401fb0(&var_c4)
                                ebx += 1
                                
                                if (ebx s>= var_f4)
                                    goto label_5254c3
                                
                                continue
                        
                        sub_401fb0(&var_ac)
                        sub_401fb0(&var_c4)
                        break
                    
                    ebx.b = 0
        
        if (var_c8_1 u>= 0x10)
            j__free(var_dc.d)
        
        int32_t var_c8_2 = 0xf
        int32_t var_cc_2 = 0
        var_dc = 0
    else
        ebx.b = 0
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_108)
return result
