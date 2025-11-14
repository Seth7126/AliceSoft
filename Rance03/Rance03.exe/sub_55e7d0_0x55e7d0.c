// 函数: sub_55e7d0
// 地址: 0x55e7d0
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
sub_402110(&var_28, &(*U"===,===,,===,}=,=,=,[]")[6], 1)
int32_t var_4 = 0
char* eax_5 = &var_28

if (var_14 u>= 0x10)
    eax_5 = var_28.d

enum MESSAGEBOX_RESULT result

if (sub_59d180(arg2, eax_5).b != 0)
    result.b = 1
else
    char* eax_6 = &var_28
    
    if (var_14 u>= 0x10)
        eax_6 = var_28.d
    
    char* var_68_1 = eax_6
    int32_t var_6c_1 = 0x6e48cc
    void* var_70_1 = arg2
    sub_561610(arg1)
    result.b = 0

int32_t var_4_1 = 0xffffffff
result.b = result.b == 0
char var_49 = result.b

if (var_14 u>= 0x10)
    j__free(var_28.d)
    result.b = var_49

if (result.b == 0)
    *(arg3 + 0x20c) = *(arg3 + 0x208)
    int32_t var_48
    
    if (sub_59d350(&var_48).b != 0)
        while (true)
            int32_t eax_8 = *(arg3 + 0x20c)
            int32_t ecx_3
            
            if (&var_48 u< eax_8)
                ecx_3 = *(arg3 + 0x208)
            
            int32_t* ecx_6
            
            if (&var_48 u>= eax_8 || ecx_3 u> &var_48)
                if (eax_8 == *(arg3 + 0x210))
                    sub_415950(arg3 + 0x208, 1)
                
                ecx_6 = *(arg3 + 0x20c)
                
                if (ecx_6 != 0)
                    *ecx_6 = var_48
            else
                if (eax_8 == *(arg3 + 0x210))
                    sub_415950(arg3 + 0x208, 1)
                
                ecx_6 = *(arg3 + 0x20c)
                
                if (ecx_6 != 0)
                    *ecx_6 = *(*(arg3 + 0x208) + ((&var_48 - ecx_3) s>> 2 << 2))
            *(arg3 + 0x20c) += 4
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
                char* ecx_8 = &var_40
                char* ebp_1 = var_40.d
                int32_t eax_12 = 1
                
                if (var_2c_1 u>= 0x10)
                    ecx_8 = ebp_1
                
                if (var_30_1 u< 1)
                    eax_12 = var_30_1
                
                int32_t eax_13 = sub_405190(eax_12, &(*U"===,===,,===,}=,=,=,[]")[7], ecx_8, eax_12)
                bool cond:7_1 = eax_13 == 0
                
                if (eax_13 == 0)
                    if (var_30_1 u>= 1)
                        eax_13.b = var_30_1 != 1
                    else
                        eax_13 = 0xffffffff
                    
                    cond:7_1 = eax_13 == 0
                
                eax_13.b = cond:7_1
                eax_13.b = eax_13.b == 0
                
                if (eax_13.b != 0)
                    *(arg2 + 4) = *(arg2 + 8)
                    
                    if (var_2c_1 u>= 0x10)
                        j__free(ebp_1)
                        result.b = 1
                        goto label_55e9f4
                else
                    int32_t var_4_3 = 0xffffffff
                    
                    if (var_2c_1 u>= 0x10)
                        j__free(ebp_1)
                    
                    int32_t var_2c_2 = 0xf
                    int32_t var_30_2 = 0
                    var_40 = 0
                    
                    if (sub_59d350(&var_48).b == 0)
                        break
                    
                    continue
            
            result.b = 1
            goto label_55e9f4

result.b = 0
label_55e9f4:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
