// 函数: sub_55eca0
// 地址: 0x55eca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5638
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_54 = ebp
void* esi = arg3
void* var_58 = esi
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_402110(&var_44, &(*U"===,===,,===,}=,=,=,[]")[2], 1)
int32_t var_4 = 0
char* eax_6 = &var_44

if (var_30 u>= 0x10)
    eax_6 = var_44.d

enum MESSAGEBOX_RESULT result

if (sub_59d180(arg2, eax_6).b != 0)
    result.b = 1
else
    char* eax_7 = &var_44
    
    if (var_30 u>= 0x10)
        eax_7 = var_44.d
    
    char* var_74_1 = eax_7
    int32_t var_78_1 = 0x6e48cc
    void* var_7c_1 = arg2
    sub_561610(ebp)
    result.b = 0

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result.b == 0

if (var_30 u>= 0x10)
    j__free(var_44.d)

if (ebx.b != 0)
label_55eee9:
    result.b = 0
else
    int32_t ebx_1 = 0
    
    while (true)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_4_2 = 1
        void var_4c
        
        if (sub_59ce30(&var_2c, &var_4c).b == 0)
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            goto label_55eee9
        
        if (ebx_1 == 0)
            sub_537120(esi, &var_2c, ebp + 0x2c, arg4)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        var_4_2.b = 2
        void var_48
        
        if (sub_59ce30(&var_44, &var_48) == 0)
            *(arg2 + 4) = *(arg2 + 8)
            
            if (var_30_1 u>= 0x10)
                j__free(var_44.d)
        else
            char* ecx_5 = &var_44
            char* ebp_1 = var_44.d
            int32_t eax_10 = 1
            
            if (var_30_1 u>= 0x10)
                ecx_5 = ebp_1
            
            if (var_34_1 u< 1)
                eax_10 = var_34_1
            
            int32_t eax_11 = sub_405190(eax_10, &(*U"===,===,,===,}=,=,=,[]")[3], ecx_5, eax_10)
            bool cond:6_1 = eax_11 == 0
            
            if (eax_11 == 0)
                if (var_34_1 u>= 1)
                    eax_11.b = var_34_1 != 1
                else
                    eax_11 = 0xffffffff
                
                cond:6_1 = eax_11 == 0
            
            eax_11.b = cond:6_1
            eax_11.b = eax_11.b == 0
            
            if (eax_11.b != 0)
                *(arg2 + 4) = *(arg2 + 8)
                
                if (var_30_1 u>= 0x10)
                    j__free(ebp_1)
            else
                if (var_30_1 u>= 0x10)
                    j__free(ebp_1)
                
                ebp = var_54
                ebx_1 += 1
                esi = var_58
                
                if (var_18_1 u< 0x10)
                    continue
                else
                    j__free(var_2c.d)
                    continue
        
        if (var_18_1 u>= 0x10)
            j__free(var_2c.d)
        
        result.b = 1
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
