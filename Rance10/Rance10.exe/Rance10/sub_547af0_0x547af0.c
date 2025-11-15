// 函数: sub_547af0
// 地址: 0x547af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
int32_t* edx

if (edi[5] u< 0x10)
    edx = edi
else
    edx = *edi

int32_t* var_48

if (*(arg1 + 0x1c) u< 0x10)
    var_48 = arg1 + 8
else
    var_48 = *(arg1 + 8)

void** ecx_1 = *(arg1 + 0x18)
void** esi = edi[4]
void** eax_4 = esi
void** var_4c = ecx_1

if (ecx_1 u< esi)
    eax_4 = ecx_1

int32_t eax_5 = sub_406ac0(eax_4, edx, var_48, eax_4)
void** eax_6

if (eax_5 == 0)
    eax_6 = var_4c

int32_t* result

if (eax_5 != 0 || eax_6 u< esi || eax_6 u> esi || *(arg1 + 0x20) != arg3)
    int32_t* edx_1 = &data_7fd2bc
    
    if (data_7fd2d0 u>= 0x10)
        edx_1 = data_7fd2bc
    
    int32_t* var_48_1
    
    if (edi[5] u< 0x10)
        var_48_1 = edi
    else
        var_48_1 = *edi
    
    void** eax_8 = data_7fd2cc
    
    if (esi u< eax_8)
        eax_8 = esi
    
    int32_t eax_9 = sub_406ac0(eax_8, edx_1, var_48_1, eax_8)
    
    if (eax_9 == 0)
        result = data_7fd2cc
    
    int32_t* esi_2
    
    if (eax_9 == 0 && esi u>= result && esi u<= result)
        int32_t* ecx_4 = *(arg1 + 0x24)
        
        if (ecx_4 != 0)
            int32_t esi_1 = ecx_4[1]
            ecx_4[1] -= 1
            (**ecx_4)(esi_1 - 1)
            *(arg1 + 0x24) = 0
            *(arg1 + 0x38) = 1
        
        esi_2 = arg3
        goto label_547be8
    
    if (sub_5485f0(edi) == 0)
        char* eax_13
        
        if (edi[5] u< 0x10)
            eax_13 = edi
        else
            eax_13 = *edi
        
        if (sub_44c4e0(eax_13) != 0)
            esi_2 = arg3
            result = sub_54ddb0(arg1 + 0x24, edi, esi_2)
            
            if (result.b != 0)
                goto label_547be8
        else
            if (edi[5] u>= 0x10)
                edi = *edi
            
            var_4c = edi
            void var_2c
            sub_403360(&var_2c, 0x766fdc)
            int32_t var_8_1 = 0
            var_8_1.b = 1
            void var_44
            sub_45aae0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result.b = 0
    else
        esi_2 = arg3
        result = sub_5486a0(arg1, edi, esi_2)
        
        if (result.b != 0)
        label_547be8:
            
            if (arg1 + 8 != edi)
                sub_403590(arg1 + 8, edi, 0, 0xffffffff)
            
            *(arg1 + 0x20) = esi_2
            *(arg1 + 0xac) = 1
            result.b = 1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
