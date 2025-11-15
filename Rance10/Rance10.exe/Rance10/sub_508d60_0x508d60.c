// 函数: sub_508d60
// 地址: 0x508d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7376fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t* var_80

if (*(arg1 + 0xb0) u< 0x10)
    var_80 = arg1 + 0x9c
else
    var_80 = *(arg1 + 0x9c)

int32_t ebx = arg2[4]
int32_t eax_4 = ebx

if (*(arg1 + 0xac) u< ebx)
    eax_4 = *(arg1 + 0xac)

int32_t* result = sub_406ac0(eax_4, edx, var_80, eax_4)

if (result != 0)
label_508de5:
    
    if (arg1 + 0x9c != arg2)
        result = sub_403590(arg1 + 0x9c, arg2, 0, 0xffffffff)
    
    void* var_60
    char var_30
    char* eax_5
    int32_t ebx_1
    
    if (arg2[4] != 0)
        eax_5 = sub_4175e0(result, arg2, &var_30, 0x7663e4)
        ebx_1 = 2
    else
        eax_5 = sub_403360(&var_60, 0x75d276)
        ebx_1 = 1
    
    int32_t var_7c_1 = ebx_1
    int32_t* eax_6 = sub_409670(arg1 + 0xb4, eax_5)
    int32_t* var_1c
    
    if ((ebx_1.b & 2) != 0)
        eax_6 = var_1c
        ebx_1 &= 0xfffffffd
        int32_t var_7c_2 = ebx_1
        
        if (eax_6 u>= 0x10)
            eax_6 = sub_403160(var_30.d, eax_6 + 1, 1)
        
        var_1c = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
    
    int32_t var_8_1 = 0xffffffff
    int32_t* var_4c
    
    if ((ebx_1.b & 1) != 0)
        eax_6 = var_4c
        ebx_1 &= 0xfffffffe
        int32_t var_7c_3 = ebx_1
        
        if (eax_6 u>= 0x10)
            eax_6 = sub_403160(var_60, eax_6 + 1, 1)
    
    char* eax_9
    int32_t ebx_2
    
    if (arg2[4] != 0)
        eax_9 = sub_4175e0(eax_6, arg2, &var_30, 0x7663d4)
        ebx_2 = ebx_1 | 8
    else
        eax_9 = sub_403360(&var_60, 0x75d26f)
        ebx_2 = ebx_1 | 4
    
    int32_t var_7c_4 = ebx_2
    int32_t* eax_10 = sub_409670(arg1 + 0xcc, eax_9)
    
    if ((ebx_2.b & 8) != 0)
        eax_10 = var_1c
        ebx_2 &= 0xfffffff7
        int32_t var_7c_5 = ebx_2
        
        if (eax_10 u>= 0x10)
            eax_10 = sub_403160(var_30.d, eax_10 + 1, 1)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
    
    int32_t var_8_2 = 0xffffffff
    
    if ((ebx_2.b & 4) != 0)
        eax_10 = var_4c
        ebx_2 &= 0xfffffffb
        int32_t var_7c_6 = ebx_2
        
        if (eax_10 u>= 0x10)
            eax_10 = sub_403160(var_60, eax_10 + 1, 1)
    
    void* var_78
    char var_48
    int32_t* eax_13
    int32_t ebx_3
    
    if (arg2[4] != 0)
        eax_13 = sub_4175e0(eax_10, arg2, &var_48, 0x766538)
        ebx_3 = ebx_2 | 0x20
    else
        eax_13 = sub_403360(&var_78, 0x75d26e)
        ebx_3 = ebx_2 | 0x10
    
    result = sub_409670(arg1 + 0xe4, eax_13)
    
    if ((ebx_3.b & 0x20) != 0)
        int32_t* result_2
        result = result_2
        ebx_3 &= 0xffffffdf
        
        if (result u>= 0x10)
            result = sub_403160(var_48.d, result + 1, 1)
        
        int32_t var_34 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
    
    if ((ebx_3.b & 0x10) != 0)
        int32_t* result_1
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_78, result + 1, 1)
    
    *(arg1 + 0x114) = 1
else
    result = *(arg1 + 0xac)
    
    if (result u< ebx || result u> ebx)
        goto label_508de5

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
