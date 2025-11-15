// 函数: sub_5a3240
// 地址: 0x5a3240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ea88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_60 = arg2
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, 0x769a84, 0x11)
int32_t var_8_1 = 0
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_78 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx, var_1c + esi)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* ecx_2 = var_60
int32_t eax_7 = *(ecx_2 + 0x340)
int32_t result
void* var_80_4
int32_t var_7c_4

if (eax_7 == 0)
    sub_403360(&var_2c, 0x769af8)
    int32_t var_8_5 = 1
    char* esi_2 = &var_2c
    char* edx_3 = &var_2c
    
    if (var_18 u>= 0x10)
        esi_2 = var_2c.d
    
    if (var_18 u>= 0x10)
        edx_3 = var_2c.d
    
    var_60.b = 0
    void* var_78_4 = var_60
    sub_6ca200(arg1 + 4, *(arg1 + 8), edx_3, var_1c + esi_2)
    int32_t var_8_6 = 0xffffffff
    
    if (var_18 u< 0x10)
        goto label_5a340a
    
    int32_t var_78_5 = 1
    var_7c_4 = var_18 + 1
    var_80_4 = var_2c.d
label_5a33f8:
    sub_403160(var_80_4, var_7c_4, 1)
label_5a340a:
    int32_t var_30_1 = 0xf
    void* const var_34_1 = nullptr
    char var_44 = 0
    sub_403490(&var_44, "\r\n", 2)
    int32_t var_8_7 = 4
    char* esi_3 = &var_44
    char* edx_4 = &var_44
    
    if (var_30_1 u>= 0x10)
        esi_3 = var_44.d
    
    if (var_30_1 u>= 0x10)
        edx_4 = var_44.d
    
    var_60.b = 0
    void* var_78_6 = var_60
    sub_6ca200(arg1 + 4, *(arg1 + 8), edx_4, var_34_1 + esi_3)
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    result.b = 1
else
    if (eax_7 == 1)
        var_60 = *(ecx_2 + 0x344)
        void* var_5c
        sub_403360(&var_5c, 0x769ae4)
        int32_t var_8_3 = 2
        void** ecx_5 = sub_409350(&var_60, &var_5c, &var_2c, &var_60)
        var_8_3.b = 3
        int32_t edx_2 = ecx_5[5]
        int32_t esi_1 = ecx_5[4]
        void** eax_12
        
        if (edx_2 u< 0x10)
            eax_12 = ecx_5
        else
            eax_12 = *ecx_5
        
        if (edx_2 u>= 0x10)
            ecx_5 = *ecx_5
        
        int32_t var_78_2 = 0.d
        sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_5, eax_12 + esi_1)
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_8_4 = 0xffffffff
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u< 0x10)
            goto label_5a340a
        
        int32_t var_78_3 = 1
        var_7c_4 = var_48 + 1
        var_80_4 = var_5c
        goto label_5a33f8
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
