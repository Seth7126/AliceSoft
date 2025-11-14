// 函数: sub_563ed0
// 地址: 0x563ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = 0xf
void* var_48 = nullptr
char var_58 = 0
sub_402110(&var_58, 0x6e4d00, 0xf)
int32_t var_4 = 0
char* esi = &var_58
char* edx = &var_58
int32_t var_5c
int32_t var_78 = var_5c

if (var_44 u>= 0x10)
    esi = var_58.d

if (var_44 u>= 0x10)
    edx = var_58.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx, var_48 + esi)
int32_t var_4_1 = 0xffffffff

if (var_44 u>= 0x10)
    j__free(var_58.d)

int32_t i = 0
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x178) - *(arg2 + 0x174))
int32_t edx_2 = edx_1 s>> 2

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t edx_6
    
    do
        if (i s> 0)
            var_44 = 0xf
            void* var_48_1 = nullptr
            var_58 = 0
            sub_402110(&var_58, 0x6e4d10, 3)
            int32_t var_4_2 = 1
            char* esi_1 = &var_58
            char* edx_3 = &var_58
            int32_t var_78_2 = var_5c
            
            if (var_44 u>= 0x10)
                esi_1 = var_58.d
            
            if (var_44 u>= 0x10)
                edx_3 = var_58.d
            
            sub_468ff0(arg1 + 4, *(arg1 + 8), edx_3, var_48_1 + esi_1)
            int32_t var_4_3 = 0xffffffff
            
            if (var_44 u>= 0x10)
                j__free(var_58.d)
        
        int32_t var_28
        char* eax_13 = sub_5375b0(arg2, &var_28, i)
        int32_t var_4_4 = 2
        
        if (*(eax_13 + 0x14) u>= 0x10)
            eax_13 = *eax_13
        
        char* var_78_5 = eax_13
        int32_t* ecx_7 = sub_4691f0(&var_58, "\t\t"%s"")
        var_4_4.b = 3
        int32_t edx_4 = ecx_7[5]
        int32_t esi_2 = ecx_7[4]
        int32_t* eax_15
        
        if (edx_4 u< 0x10)
            eax_15 = ecx_7
        else
            eax_15 = *ecx_7
        
        if (edx_4 u>= 0x10)
            ecx_7 = *ecx_7
        
        int32_t var_78_6 = var_5c
        sub_468ff0(arg1 + 4, *(arg1 + 8), ecx_7, eax_15 + esi_2)
        
        if (var_44 u>= 0x10)
            j__free(var_58.d)
        
        int32_t var_4_5 = 0xffffffff
        var_44 = 0xf
        int32_t var_48_2 = 0
        var_58 = 0
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        i += 1
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x178) - *(arg2 + 0x174))
        edx_6 = edx_5 s>> 2
    while (i s< (edx_6 u>> 0x1f) + edx_6)

int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
sub_402110(&var_40, 0x6e4cfc, 2)
int32_t var_4_6 = 4
char* esi_3 = &var_40
int32_t* edx_7 = &var_40
int32_t var_78_9 = var_5c

if (var_2c u>= 0x10)
    esi_3 = var_40.d

if (var_2c u>= 0x10)
    edx_7 = var_40.d

sub_468ff0(arg1 + 4, *(arg1 + 8), edx_7, &esi_3[var_30])

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
