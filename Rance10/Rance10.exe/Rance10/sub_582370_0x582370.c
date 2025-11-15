// 函数: sub_582370
// 地址: 0x582370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d3ec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_54
int32_t* eax_4 = sub_5cff00(*(arg1 + 0x24c), &var_54, arg1 + 4)
int32_t edx = *eax_4
int32_t ecx_1 = eax_4[1]
*eax_4 = 0
eax_4[1] = 0
int32_t* edi = *(arg1 + 0x224)
*(arg1 + 0x224) = ecx_1
*(arg1 + 0x220) = edx
int32_t var_8_1 = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (**edi)(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 4))()

int32_t var_8_2 = 1
int32_t* var_50

if (var_50 != 0)
    bool cond:1_1 = var_50[1] != 1
    var_50[1]
    var_50[1] -= 1
    
    if (not(cond:1_1))
        (**var_50)(eax_2)
        int32_t ebx_1 = var_50[2]
        var_50[2] -= 1
        
        if (ebx_1 == 1)
            (*(*var_50 + 4))()

int32_t var_8_3 = 0xffffffff
void* result

if (*(arg1 + 0x220) != 0)
    sub_582530(arg1)
    int32_t eax_18 = *(arg1 + 0x22c)
    
    if (eax_18 == 1 || eax_18 == 2)
        *(arg1 + 0x174) = eax_18
        *(arg1 + 0x22c) = 0
    
    int32_t ecx_10
    ecx_10.b = 0
    char temp0_5 = *(arg1 + 0x228)
    *(arg1 + 0x228) = 0
    ecx_10.b = temp0_5
    result.b = 1
else
    void* eax_12 = arg1 + 4
    
    if (*(eax_12 + 0x14) u>= 0x10)
        eax_12 = *eax_12
    
    void* var_4c = eax_12
    void* var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76801c, 0x37)
    int32_t var_8_4 = 2
    var_8_4.b = 3
    char var_44
    sub_5e01e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
