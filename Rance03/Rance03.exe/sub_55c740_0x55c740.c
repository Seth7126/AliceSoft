// 函数: sub_55c740
// 地址: 0x55c740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_17 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5430
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[8], 1)
int32_t var_4 = 0
char* eax_5 = &var_28

if (var_14 u>= 0x10)
    eax_5 = var_28.d

char result

if (sub_59d180(arg2, eax_5) != 0)
    result = 1
else
    char* eax_6 = &var_28
    
    if (var_14 u>= 0x10)
        eax_6 = var_28.d
    
    char* var_80_1 = eax_6
    int32_t var_84_1 = 0x6e48cc
    void* var_88_1 = arg2
    sub_561610(arg1)
    result = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t var_50

if (ebx.b == 0)
    if (sub_59d350(&var_50) == 0)
        result = 0
    else
        sub_401f60(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[9])
        int32_t var_4_2 = 1
        int32_t var_4_3 = 0xffffffff
        ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        if (ebx.b != 0)
            result = 0
        else
            int32_t var_5c = 0
            int32_t var_58 = 0
            int32_t var_54 = 0
            
            if (sub_59d240(&var_5c) == 0)
                result = 0
            else
                sub_401f60(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[6])
                int32_t var_4_4 = 2
                int32_t var_4_5 = 0xffffffff
                ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
                sub_401fb0(&var_28)
                
                if (ebx.b != 0)
                    result = 0
                else if (sub_59d240(&var_58) == 0)
                    result = 0
                else
                    sub_401f60(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[7])
                    int32_t var_4_6 = 3
                    int32_t var_4_7 = 0xffffffff
                    ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
                    sub_401fb0(&var_28)
                    
                    if (ebx.b != 0)
                        result = 0
                    else if (sub_59d240(&var_54) == 0)
                        result = 0
                    else
                        int32_t ebx_1 = 1
                        var_68 = 0
                        int32_t var_60 = 1
                        int32_t var_64 = 0
                        
                        if (sub_59d180(arg2, &(*,}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[4])
                                != 0)
                            goto label_55cad5
                        
                        sub_401f60(&var_28, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[5])
                        int32_t var_4_8 = 4
                        int32_t var_4_9 = 0xffffffff
                        ebx_1.b = sub_5615c0(arg1, arg2, &var_28) == 0
                        sub_401fb0(&var_28)
                        
                        if (ebx_1.b != 0)
                            result = 0
                        else if (sub_55cb50(arg1, arg2, &var_60) == 0)
                            result = 0
                        else if (sub_59d180(arg2, 
                            &(*,}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[2]) != 0)
                        label_55cac7:
                            ebx_1 = var_60
                        label_55cad5:
                            int64_t var_24_1 = var_5c.q
                            int32_t var_18_1 = var_68
                            var_28.d = &sealengine::CEmitterPos::`vftable'
                            int32_t var_1c_1 = var_54
                            int32_t var_14_1 = var_64
                            int32_t var_4_16 = 8
                            var_4_16.b = 9
                            void var_4c
                            sub_565f30(arg3 + 0x19c, sub_565ec0(&var_4c, var_50, ebx_1, &var_28))
                            result = 1
                        else
                            sub_401f60(&var_28, &(*,}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[
                                3])
                            int32_t var_4_10 = 5
                            int32_t var_4_11 = 0xffffffff
                            ebx_1.b = sub_5615c0(arg1, arg2, &var_28) == 0
                            sub_401fb0(&var_28)
                            
                            if (ebx_1.b != 0)
                                result = 0
                            else if (sub_59d240(&var_68) == 0)
                                result = 0
                            else
                                sub_401f60(&var_28, ,}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")
                                int32_t var_4_12 = 6
                                int32_t var_4_13 = 0xffffffff
                                ebx_1.b = sub_5615c0(arg1, arg2, &var_28) == 0
                                sub_401fb0(&var_28)
                                
                                if (ebx_1.b != 0)
                                    result = 0
                                else if (sub_59d240(&var_64) == 0)
                                    result = 0
                                else
                                    sub_401f60(&var_28, 
                                        &(*,}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[1])
                                    int32_t var_4_14 = 7
                                    int32_t var_4_15 = 0xffffffff
                                    ebx_1.b = sub_5615c0(arg1, arg2, &var_28) == 0
                                    sub_401fb0(&var_28)
                                    
                                    if (ebx_1.b == 0)
                                        goto label_55cac7
                                    
                                    result = 0
else
    result = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
