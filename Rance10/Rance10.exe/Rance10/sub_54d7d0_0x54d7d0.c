// 函数: sub_54d7d0
// 地址: 0x54d7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = &data_7fd34c

if (data_7fd360 u>= 0x10)
    edx = data_7fd34c

int32_t* var_4c

if (arg2[5] u< 0x10)
    var_4c = arg2
else
    var_4c = *arg2

int32_t ebx = arg2[4]
int32_t eax_4 = data_7fd35c

if (ebx u< eax_4)
    eax_4 = ebx

int32_t eax_5 = sub_406ac0(eax_4, edx, var_4c, eax_4)
int32_t result

if (eax_5 == 0)
    result = data_7fd35c

if (eax_5 != 0 || ebx u< result || ebx u> result)
    int32_t* eax_8
    
    if (arg2[5] u< 0x10)
        eax_8 = arg2
    else
        eax_8 = *arg2
    
    int32_t* eax_9 = sub_44bec0(data_7fcb48, eax_8)
    
    if (eax_9 != 0)
        sub_54d770(arg1)
        
        if (*arg1 == 0)
            sub_54d770(arg1)
        
        sub_450940(*arg1, eax_9)
        *(arg1 + 0x16) = 0
        (*(*eax_9 + 4))(eax_2)
        result.b = 1
    else
        void* var_48
        int32_t* eax_10 = sub_419600(eax_9, 0x767138, &var_48, arg2)
        int32_t* var_8_1 = eax_9
        var_8_1.b = 1
        char var_30[0x10]
        sub_45ab60(sub_4176f0(eax_10.b, eax_10, &var_30, 0x767158))
        int32_t var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30[0].d, var_1c + 1, 1)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        var_30[0] = 0
        int32_t var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48, var_34 + 1, 1)
        
        result.b = 0
else
    int32_t* ecx_1 = *arg1
    
    if (ecx_1 != 0)
        int32_t esi_1 = ecx_1[1]
        ecx_1[1] -= 1
        (**ecx_1)(esi_1 - 1)
        *arg1 = 0
        arg1[5].b = 1
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
