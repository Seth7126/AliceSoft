// 函数: sub_489890
// 地址: 0x489890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_74 = 0xffffffff
int32_t (* var_78)(void* arg1) = sub_72f158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t ebx
int32_t var_9c = ebx
int32_t esi
int32_t var_a0 = esi
int32_t edi
int32_t var_a4 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x10))(eax_2)
bool cond:0 = *arg2 != 0
struct _EXCEPTION_REGISTRATION_RECORD** var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_38, arg2, ecx)
bool cond:1 = sub_67ed50(&arg1[2], &var_38) == 0
void* var_20

if (var_24 u>= 0x10)
    int32_t var_18_2 = 1
    var_20 = var_38.d
    sub_403160(var_20, var_24 + 1, var_18_2)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (cond:1 == 0)
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    char var_50 = 0
    int32_t var_18_3 = 4
    int32_t var_74_1 = 0
    int32_t* ebx_1
    
    if (sub_67f3c0(&arg1[2], &var_50).b == 0)
        ebx_1.b = 0
    else
        uint8_t var_98
        
        if (sub_407560(&var_50, "RIFF").b == 0)
            ebx_1.b = 0
        else if (sub_67f1b0(&arg1[2], &var_98).b == 0)
            ebx_1.b = 0
        else
            int32_t var_54_1 = 0xf
            int32_t var_58_1 = 0
            char var_68 = 0
            int32_t var_18_5 = 4
            var_74_1.b = 1
            
            if (sub_67f3c0(&arg1[2], &var_68) == 0)
            label_489ba1:
                ebx_1.b = 0
                sub_403320(&var_68)
            else
                if (sub_407560(&var_68, "WAVE") == 0)
                    goto label_489ba1
                
                while (true)
                    int32_t var_c = 0xf
                    int32_t var_10 = 0
                    var_20.b = 0
                    int32_t var_18_6 = 4
                    var_74_1.b = 2
                    
                    if (sub_67f3c0(&arg1[2], &var_20) != 0)
                        int32_t var_90
                        int32_t var_8c
                        int32_t var_88
                        int16_t var_84
                        int16_t var_80
                        int16_t var_6c
                        
                        if (sub_407560(&var_20, "fmt ") == 0)
                            if (sub_407560(&var_20, "data") != 0)
                                break
                            
                            int32_t var_94
                            
                            if (sub_67f1b0(&arg1[2], &var_94) != 0
                                    && sub_67f580(&arg1[2], var_94 + arg1[4]) != 0)
                                sub_403320(&var_20)
                                continue
                        else if (sub_67f1b0(&arg1[2], &var_88) != 0 && var_88 == 0x10
                                && sub_67f160(&arg1[2], &var_6c, 2) != 0
                                && sub_67f160(&arg1[2], &var_70, 2) != 0
                                && sub_67f160(&arg1[2], &var_8c, 4) != 0
                                && sub_67f160(&arg1[2], &var_90, 4) != 0
                                && sub_67f160(&arg1[2], &var_80, 2) != 0
                                && sub_67f160(&arg1[2], &var_84, 2) != 0)
                            (*(arg1[0xa] + 0x20))(zx.d(var_6c))
                            (*(arg1[0xa] + 0x24))(zx.d(var_70))
                            (*(arg1[0xa] + 0x28))(var_8c)
                            (*(arg1[0xa] + 0x2c))(var_90)
                            (*(arg1[0xa] + 0x30))(zx.d(var_80))
                            (*(arg1[0xa] + 0x34))(zx.d(var_84))
                            sub_403320(&var_20)
                            continue
                    
                    sub_403320(&var_20)
                    goto label_489ba1
                
                sub_403320(&var_20)
                
                if (sub_67f1b0(&arg1[2], &arg1[8]) == 0)
                    goto label_489ba1
                
                int32_t eax_30 = arg4
                int32_t ecx_31 = arg1[4]
                arg1[7] = arg3
                arg1[9] = ecx_31
                
                if (eax_30 == 0xffffffff)
                    eax_30 = arg1[5] - arg3
                
                arg1[0x12] = ecx_31
                arg1[6] = eax_30
                ebx_1.b = 1
                sub_403320(&var_68)
    
    if (var_3c_1 u>= 0x10)
        int32_t var_18_23 = 1
        var_20 = var_50.d
        sub_403160(var_20, var_3c_1 + 1, var_18_23)
    
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_70)
return result
