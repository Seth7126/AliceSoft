// 函数: sub_5671e0
// 地址: 0x5671e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c53b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, &(*U",==,}{,")[2], 1)
int32_t var_4 = 0
char* eax_5 = &var_28

if (var_14 u>= 0x10)
    eax_5 = var_28.d

enum MESSAGEBOX_RESULT result
int32_t ecx_2
result, ecx_2 = sub_59d180(arg2, eax_5)

if (result.b != 0)
    result.b = 1
else
    char* eax_6 = &var_28
    
    if (var_14 u>= 0x10)
        eax_6 = var_28.d
    
    char* var_68_1 = eax_6
    int32_t var_6c_1 = 0x6e48cc
    void* var_70_1 = arg2
    result, ecx_2 = sub_561610(arg1)
    result.b = 0

int32_t var_4_1 = 0xffffffff
result.b = result.b == 0
char var_4d = result.b

if (var_14 u>= 0x10)
    result, ecx_2 = j__free(var_28.d)
    result.b = var_4d

if (result.b == 0)
    int32_t var_68_3 = ecx_2
    
    if (sub_567f70(arg1, arg2, arg3).b != 0)
        while (true)
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            char var_40 = 0
            int32_t var_4_2 = 1
            void var_44
            
            if (sub_59ce30(&var_40, &var_44) == 0)
                *(arg2 + 4) = *(arg2 + 8)
                
                if (var_2c_1 u>= 0x10)
                    j__free(var_40.d)
            else
                char* ecx_5 = &var_40
                char* ebx_1 = var_40.d
                int32_t eax_8 = 1
                
                if (var_2c_1 u>= 0x10)
                    ecx_5 = ebx_1
                
                if (var_30_1 u< 1)
                    eax_8 = var_30_1
                
                int32_t eax_9
                int32_t ecx_6
                eax_9, ecx_6 = sub_405190(eax_8, U",==,}{,", ecx_5, eax_8)
                bool cond:6_1 = eax_9 == 0
                
                if (eax_9 == 0)
                    if (var_30_1 u>= 1)
                        eax_9.b = var_30_1 != 1
                    else
                        eax_9 = 0xffffffff
                    
                    cond:6_1 = eax_9 == 0
                
                eax_9.b = cond:6_1
                eax_9.b = eax_9.b == 0
                
                if (eax_9.b != 0)
                    *(arg2 + 4) = *(arg2 + 8)
                    
                    if (var_2c_1 u>= 0x10)
                        j__free(ebx_1)
                        result.b = 1
                        goto label_5673b1
                else
                    int32_t var_4_3 = 0xffffffff
                    
                    if (var_2c_1 u>= 0x10)
                        ecx_6 = j__free(ebx_1)
                    
                    int32_t var_68_7 = ecx_6
                    int32_t var_2c_2 = 0xf
                    int32_t var_30_2 = 0
                    var_40 = 0
                    
                    if (sub_567f70(arg1, arg2, arg3).b == 0)
                        break
                    
                    continue
            
            result.b = 1
            goto label_5673b1

result.b = 0
label_5673b1:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
