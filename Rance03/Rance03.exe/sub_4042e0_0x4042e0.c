// 函数: sub_4042e0
// 地址: 0x4042e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (sub_4041e0(arg1, *(arg1 + 0x18)) != 0)
    if (sub_418860(arg1 + 0x1c, arg2, *(arg1 + 0x18)) == 0)
    labelid_1:
        result = 0xffffffff
    else if (sub_418860(arg1 + 0x48, *(arg1 + 0x28), *(arg1 + 0x18)) == 0)
    labelid_1:
        result = 0xffffffff
    else
        int32_t var_78_3 = *(arg1 + 0x18)
        int32_t var_7c_3 = *(arg1 + 0x28)
        *(arg1 + 0x3c) = *(arg1 + 0x54)
        
        if (sub_4190a0(arg1 + 0x74, var_7c_3, var_78_3) == 0)
        labelid_1:
            result = 0xffffffff
        else if (sub_41c300(arg1 + 0x384, *(arg1 + 0x80), *(arg1 + 0x18), 0x9c75) == 0)
        labelid_1:
            result = 0xffffffff
        else
            SendMessageA(*(arg1 + 0x39c), 0x1109, 0, *(arg1 + 0x4ec))
            
            if (sub_41c300(arg1 + 0x3b4, *(arg1 + 0x80), *(arg1 + 0x18), 0x9c7a) == 0)
            labelid_1:
                result = 0xffffffff
            else
                SendMessageA(*(arg1 + 0x3cc), 0x1109, 0, *(arg1 + 0x4ec))
                
                if (sub_41c300(arg1 + 0x3e4, *(arg1 + 0x80), *(arg1 + 0x18), 0x9c7b) == 0)
                labelid_1:
                    result = 0xffffffff
                else
                    SendMessageA(*(arg1 + 0x3fc), 0x1109, 0, *(arg1 + 0x4ec))
                    int32_t eax_13 = *(arg1 + 0x80)
                    int32_t edi_1 = *(arg1 + 0x18)
                    (*(*(arg1 + 0x1a4) + 0x8c))(eax_4)
                    
                    if (sub_41a950(arg1 + 0x1a4, eax_13, edi_1) == 0)
                    labelid_1:
                        result = 0xffffffff
                    else if (sub_416e50(arg1 + 0x224, *(arg1 + 0x54), *(arg1 + 0x18)) == 0)
                    labelid_1:
                        result = 0xffffffff
                    else if (sub_4130c0(arg1 + 0x2e0, *(arg1 + 0x54), *(arg1 + 0x18)) == 0)
                    labelid_1:
                        result = 0xffffffff
                    else if (sub_41b790(arg1 + 0x364, arg2, *(arg1 + 0x18)) == 0)
                    labelid_1:
                        result = 0xffffffff
                    else
                        HWND eax_19 = CreateStatusWindowA(0x50000103, 0x6da04f, arg2, 0x9c9d)
                        *(arg1 + 0x380) = eax_19
                        
                        if (eax_19 == 0)
                        label_40432c:
                            result = 0xffffffff
                        else
                            int32_t eax_21 = (*(**(arg1 + 0x4fc) + 0x20))()
                            char eax_22
                            int32_t ecx_13
                            eax_22, ecx_13 = sub_420bd0(eax_21)
                            
                            if (eax_22 != 0)
                                int32_t edi_2 = 0
                                void var_4c
                                int32_t ebx_1
                                
                                if (eax_21 s> 0)
                                    do
                                        sub_401f60(&var_4c, (*(**(arg1 + 0x4fc) + 0x24))(edi_2))
                                        int32_t var_c_1 = 0
                                        sub_420c30(edi_2, &var_4c)
                                        int32_t var_c_2 = 0xffffffff
                                        sub_401fb0(&var_4c)
                                        sub_401f60(&var_4c, (*(**(arg1 + 0x4fc) + 0x24))(edi_2))
                                        int32_t var_c_3 = 1
                                        int32_t var_c_4 = 0xffffffff
                                        ebx_1.b = sub_416e90(arg1 + 0x224, &var_4c, 
                                            (*(**(arg1 + 0x4fc) + 0x28))(edi_2)) == 0
                                        ecx_13 = sub_401fb0(&var_4c)
                                        
                                        if (ebx_1.b != 0)
                                            goto label_40432c_1
                                        
                                        edi_2 += 1
                                    while (edi_2 s< eax_21)
                                
                                int32_t var_78_17 = ecx_13
                                int32_t var_78_18 =
                                    sub_41a020(arg1 + 0x74, *(arg1 + 0x390), 0x6da07c)
                                int32_t var_78_19 =
                                    sub_41a020(arg1 + 0x74, *(arg1 + 0x3c0), 0x6da084)
                                int32_t var_78_20 =
                                    sub_41a020(arg1 + 0x74, *(arg1 + 0x3f0), 0x6da08c)
                                sub_41a020(arg1 + 0x74, *(arg1 + 0x1b0), 0x6da094)
                                *(arg1 + 0x38) = *(arg1 + 0x80)
                                *(arg1 + 0x64) = *(arg1 + 0x230)
                                *(arg1 + 0x68) = *(arg1 + 0x2ec)
                                int32_t eax_33
                                eax_33.b = data_75d4b4 != 0
                                sub_404e00(arg1, eax_33)
                                SetFocus(*(arg1 + 0x230))
                                CheckMenuRadioItem(*(*(arg1 + 8) + 0x80), 0x9c77, 0x9c79, 0x9c78, 0)
                                int32_t var_58 = 0x10
                                struct win32only::CRegistry::VTable* var_54 =
                                    &win32only::CRegistry::`vftable'
                                int32_t var_50_1 = 0
                                int32_t var_c_5 = 2
                                sub_401f60(&var_4c, "Software\Alicesoft\Sys42IDE\DPAnalysis")
                                ebx_1.b = sub_698340(&var_54, 0x80000001, &var_4c)
                                sub_401fb0(&var_4c)
                                
                                if (ebx_1.b != 0)
                                    void var_34
                                    sub_401f60(&var_34, "FontSize")
                                    sub_698380(&var_54, &var_34, &var_58)
                                    sub_401fb0(&var_34)
                                
                                sub_404c20(arg1, var_58)
                                int32_t* ecx_38 = *(arg1 + 0x14)
                                
                                if (ecx_38 != 0)
                                    (*(*ecx_38 + 4))(arg2, 1)
                                
                                sub_698820(arg1 + 0x4f0, arg2, 0x1f4)
                                sub_698320(&var_54)
                            
                            result = 0
else
label_40432c_1:
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
