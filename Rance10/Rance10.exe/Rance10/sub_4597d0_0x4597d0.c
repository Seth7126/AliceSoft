// 函数: sub_4597d0
// 地址: 0x4597d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bb21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 s> 4)
    goto label_459825

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg2 + 4) + 4

if (result u> *(arg2 + 8))
    result.b = 0
else
    *(arg2 + 4) = result
label_459825:
    
    if (sub_61ed80(arg2, arg1 + 4).b == 0)
        result.b = 0
    else if (arg3 s< 5)
        struct IDebugFileObjType::debugfile::CObjectType::VTable* const var_40 =
            &debugfile::CObjectType::`vftable'{for `IDebugFileObjType'}
        int32_t var_3c_1 = 0xffffffff
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        char var_38_1 = 0
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xffffffff
        int32_t ebx
        ebx.b = sub_459b70(&var_40, arg3, arg2) == 0
        sub_4591c0(&var_40)
        
        if (ebx.b != 0)
            result.b = 0
        else
            uint32_t var_c4
            result = sub_61ec90(arg2, &var_c4)
            
            if (result.b == 0)
                result.b = 0
            else
                void var_88
                sub_409670(arg1 + 0x1c, sub_4175e0(result, arg1 + 4, &var_88, U"("))
                sub_403320(&var_88)
                int32_t edi_1 = 0
                
                if (var_c4 s<= 0)
                label_459ad4:
                    sub_407430(arg1 + 0x1c, U")%", 1)
                label_459adf:
                    
                    if (sub_61ed80(arg2, arg1 + 0x34).b == 0)
                        result.b = 0
                    else
                        result.b = sub_61ec90(arg2, arg1 + 0x4c).b != 0
                else
                    while (true)
                        if (edi_1 s> 0)
                            sub_4073f0(", ")
                        
                        var_40 = &debugfile::CObjectType::`vftable'{for `IDebugFileObjType'}
                        int32_t var_3c_2 = 0xffffffff
                        int32_t var_24_2 = 0xf
                        int32_t var_28_2 = 0
                        char var_38_2 = 0
                        int32_t var_20_2 = 0
                        int32_t var_1c_2 = 0
                        int32_t var_18_2 = 0
                        int32_t var_8_3 = 1
                        
                        if (sub_459b70(&var_40, arg3, arg2) != 0)
                            int32_t var_5c_1 = 0xf
                            int32_t var_60_1 = 0
                            char var_70 = 0
                            var_8_3.b = 2
                            
                            if (sub_61ed80(arg2, &var_70) != 0)
                                void var_b8
                                int32_t* eax_11 = sub_459d50(&var_40, &var_b8)
                                var_8_3.b = 3
                                void var_a0
                                int32_t* eax_12 = sub_4176f0(eax_11.b, eax_11, &var_a0, U" )%")
                                var_8_3.b = 4
                                var_8_3.b = 5
                                sub_4055a0(arg1 + 0x1c, 
                                    sub_417750(eax_12, eax_12, &var_88, &var_70), 0, 0xffffffff)
                                sub_403320(&var_88)
                                sub_403320(&var_a0)
                                var_8_3.b = 2
                                sub_403320(&var_b8)
                                uint32_t var_c0 = 0
                                
                                if (sub_61ec90(arg2, &var_c0) != 0)
                                    if (var_c0 != 1)
                                        goto label_459aa3
                                    
                                    int32_t var_44_1 = 0xf
                                    int32_t var_48_1 = 0
                                    char var_58 = 0
                                    var_8_3.b = 6
                                    
                                    if (sub_6c9230(arg2, 4) == 0)
                                        sub_403320(&var_58)
                                    else if (sub_6c9230(arg2, 4) == 0)
                                        sub_403320(&var_58)
                                    else if (sub_61ed80(arg2, &var_58) == 0)
                                        sub_403320(&var_58)
                                    else if (sub_61ed80(arg2, &var_58) == 0)
                                        sub_403320(&var_58)
                                    else if (sub_61ed80(arg2, &var_58) == 0)
                                        sub_403320(&var_58)
                                    else
                                        sub_403320(&var_58)
                                    label_459aa3:
                                        sub_403320(&var_70)
                                        int32_t var_8_4 = 0xffffffff
                                        sub_4591c0(&var_40)
                                        edi_1 += 1
                                        
                                        if (edi_1 s>= var_c4)
                                            goto label_459ad4
                                        
                                        continue
                            
                            sub_403320(&var_70)
                        
                        sub_4591c0(&var_40)
                        result.b = 0
                        break
    else
        if (sub_61ed80(arg2, arg1 + 0x1c).b != 0)
            goto label_459adf
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
