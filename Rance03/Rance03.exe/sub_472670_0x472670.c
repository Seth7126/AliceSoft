// 函数: sub_472670
// 地址: 0x472670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b9a0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (*(arg1 + 0x914) != 0 && *(arg1 + 0x918) != 0)
    struct fileimage::CFileImageMaker::VTable* const var_8c_1 =
        &fileimage::CFileImageMaker::`vftable'
    int32_t var_88 = 0
    int32_t var_84_1 = 0
    int32_t var_80_1 = 0
    int32_t var_c_1 = 0
    bool var_90 = false
    sub_414b60(&var_88, &var_90)
    var_90 = *(arg1 + 0x904)
    sub_414b60(&var_88, &var_90)
    int32_t i = 0
    
    if (*(arg1 + 0x904) s> 0)
        void* edi_1 = arg1 + 0xc
        
        do
            var_90 = *(edi_1 - 8)
            sub_414b60(&var_88, &var_90)
            var_90 = *edi_1 != 0
            sub_414b60(&var_88, &var_90)
            var_90 = false
            sub_414b60(&var_88, &var_90)
            i += 1
            edi_1 += 0x24
        while (i s< *(arg1 + 0x904))
    
    char* edx_1 = (*(**(arg1 + 0x918) + 0x18))(eax_4)
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    char var_7c = 0
    void* ecx_6
    
    if (*edx_1 != 0)
        char* ecx_7 = edx_1
        char* eax_8
        
        do
            eax_8.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (eax_8.b != 0)
        ecx_6 = ecx_7 - &ecx_7[1]
    else
        ecx_6 = nullptr
    
    sub_402110(&var_7c, edx_1, ecx_6)
    var_c_1.b = 1
    void* eax_10 = (*(**(arg1 + 0x914) + 8))(&var_7c)
    char var_4c
    sub_421670(eax_10.b, eax_10, &var_4c)
    var_c_1.b = 3
    
    if (var_68_1 u>= 0x10)
        j__free(var_7c.d)
    
    int32_t var_68_2 = 0xf
    int32_t var_6c_2 = 0
    var_7c = 0
    sub_607ce0(&var_4c)
    char var_34[0x10]
    char* eax_11 = sub_4028a0(&var_34, &var_4c)
    var_c_1.b = 4
    void** var_64
    sub_410ad0(eax_11, eax_11, &var_64, &data_74f5cc)
    var_c_1.b = 6
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34[0].d)
    
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34[0] = 0
    int32_t var_50
    
    if (sub_604d10(&var_64, &var_88) != 0)
        i.b = 1
    else
        void** eax_12 = &var_64
        
        if (var_50 u>= 0x10)
            eax_12 = var_64
        
        void** var_a8_11 = eax_12
        sub_64b530(0x6dd4dc)
        i.b = 0
    
    if (var_50 u>= 0x10)
        j__free(var_64)
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64.b = 0
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    int32_t ecx_14 = var_88
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    
    if (ecx_14 != 0)
        j__free(ecx_14)
    
    result = i.b
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
