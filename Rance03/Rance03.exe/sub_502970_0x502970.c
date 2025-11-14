// 函数: sub_502970
// 地址: 0x502970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c10b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_16c
int32_t eax_2 = __security_cookie ^ &var_16c
int32_t __saved_edi
int32_t var_17c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg1 + 0x30)

for (int32_t* i = *(arg1 + 0x2c); i != edi; i = &i[0x30])
    (**i)(0)

int32_t eax_8 = *(arg1 + 0x2c)
*(arg1 + 0x30) = eax_8
int32_t var_c_1 = 0
int32_t var_158
void* var_128
int32_t* ecx_3 = sub_410930(sub_410930(eax_8, arg3, &var_128, U"."), &var_128, &var_158, 0x6e22fc)
int32_t* eax_11 = arg2
var_c_1.b = 1
int32_t* edx_2 = eax_11[1]
int32_t* edi_2

if (edx_2 != 0)
    if (ecx_3[5] u>= 0x10)
        ecx_3 = *ecx_3
    
    eax_11 = (*(*edx_2 + 0x94))(ecx_3)
    edi_2 = eax_11
else
    edi_2 = nullptr

var_c_1.b = 0
int32_t var_144

if (var_144 u>= 0x10)
    eax_11 = j__free(var_158)

int32_t esi = 0
int32_t result
int32_t* ebx
int32_t var_140
int32_t var_12c

if (edi_2 s<= 0)
label_502b40:
    int32_t var_f8
    int32_t* eax_16 = sub_410930(sub_503c60(arg1), &var_128, &var_f8, 0x6e22d4)
    int32_t* esi_1 = eax_16
    var_c_1.b = 6
    int32_t* eax_17 = sub_410930(eax_16, &var_128, &var_158, 0x6e22c0)
    int32_t* edi_3 = eax_17
    var_c_1.b = 7
    char var_110
    int32_t* eax_18 = sub_410930(eax_17, &var_128, &var_110, 0x6e231c)
    var_c_1.b = 8
    int32_t* eax_19 = sub_410930(eax_18, &var_128, &var_140, 0x6e2308)
    var_c_1.b = 9
    int32_t* ecx_15 = arg2[1]
    int32_t* var_168_1
    
    if (ecx_15 != 0)
        if (esi_1[5] u>= 0x10)
            esi_1 = *esi_1
        
        var_168_1 = (*(*ecx_15 + 0x50))(esi_1, 3)
    else
        var_168_1 = ecx_15
    
    int32_t* ecx_17 = arg2[1]
    int32_t edi_4
    
    if (ecx_17 != 0)
        if (edi_3[5] u>= 0x10)
            edi_3 = *edi_3
        
        edi_4 = (*(*ecx_17 + 0x50))(edi_3, 2)
    else
        edi_4 = 0
    
    int32_t* ecx_18 = arg2[1]
    int32_t esi_2
    
    if (ecx_18 != 0)
        int32_t* edx_8 = eax_18
        
        if (edx_8[5] u>= 0x10)
            edx_8 = *edx_8
        
        esi_2 = (*(*ecx_18 + 0x50))(edx_8, 1)
    else
        esi_2 = 0
    
    int32_t* ecx_19 = arg2[1]
    
    if (ecx_19 != 0)
        int32_t* edx_9 = eax_19
        
        if (edx_9[5] u>= 0x10)
            edx_9 = *edx_9
        
        result = (*(*ecx_19 + 0x50))(edx_9, 0)
    else
        result = 0
    
    if (edi_4 s>= 0 && var_168_1 s>= 0 && result s>= 0 && esi_2 s>= 0)
        *(arg1 + 0x3c) = result
        *(arg1 + 0x40) = esi_2
        *(arg1 + 0x44) = edi_4
        *(arg1 + 0x48) = var_168_1
        *(arg1 + 0x4c) = 1
    
    if (var_12c u>= 0x10)
        j__free(var_140)
    
    int32_t var_12c_1 = 0xf
    int32_t var_130_1 = 0
    var_140.b = 0
    int32_t var_fc
    
    if (var_fc u>= 0x10)
        j__free(var_110.d)
    
    int32_t var_fc_1 = 0xf
    int32_t var_100_1 = 0
    var_110 = 0
    
    if (var_144 u>= 0x10)
        j__free(var_158)
    
    int32_t var_144_1 = 0xf
    int32_t var_148_1 = 0
    var_158.b = 0
    int32_t var_e4
    
    if (var_e4 u>= 0x10)
        j__free(var_f8)
    
    ebx.b = 1
else
    while (true)
        int32_t* eax_13 = sub_410930(eax_11, &var_128, &var_158, 0x6e22e8)
        var_c_1.b = 2
        
        if (eax_13[5] u>= 0x10)
            eax_13 = *eax_13
        
        esi += 1
        int32_t var_180_3 = esi
        sub_4691f0(&var_140, eax_13)
        
        if (var_144 u>= 0x10)
            j__free(var_158)
        
        struct partsengine::CConstructionProcess::VTable* var_e0
        sub_47f050(&var_e0)
        var_c_1.b = 5
        
        if (sub_480380(&var_e0, arg2, &var_140) == 0)
            sub_47f160(&var_e0)
            
            if (var_12c u>= 0x10)
                j__free(var_140)
            
            ebx.b = 0
            break
        
        sub_481250(arg1 + 0x2c, &var_e0)
        eax_11 = sub_47f160(&var_e0)
        var_c_1.b = 0
        
        if (var_12c u>= 0x10)
            eax_11 = j__free(var_140)
        
        if (esi s>= edi_2)
            goto label_502b40
int32_t var_114

if (var_114 u>= 0x10)
    j__free(var_128)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_16c)
return result
