// 函数: sub_50ea70
// 地址: 0x50ea70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737d56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg1 + 0xe4
int32_t* var_2c
sub_4079d0(&ExceptionList, arg1 + 0xcc, &var_2c, edi)
int32_t var_8_1 = 0
void* ecx_1 = *(arg1 + 0xdc)
int32_t var_18
int32_t edx_1 = var_18
int32_t* ebx_1 = var_2c
void* eax_4 = ecx_1 - 1

if (eax_4 s>= 0)
    void* edi_1 = ecx_1 - 1
    void* temp0_1
    
    do
        int32_t* eax_5 = &var_2c
        
        if (edx_1 u>= 0x10)
            eax_5 = ebx_1
        
        if (*(eax_5 + edi_1) == 0xa)
            break
        
        temp0_1 = edi_1
        edi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    eax_4 = edi_1

void* var_48_3 = ecx_1 - eax_4
int32_t result_2
int32_t result = result_2
bool cond:0 = ecx_1 == result

if (ecx_1 s< result)
    do
        int32_t* eax_6 = &var_2c
        
        if (edx_1 u>= 0x10)
            eax_6 = ebx_1
        
        result = result_2
        
        if (*(eax_6 + ecx_1) == 0xa)
            break
        
        ecx_1 += 1
    while (ecx_1 s< result)
    
    cond:0 = ecx_1 == result

if (not(cond:0))
    void* ecx_2 = ecx_1 + 1
    
    if (ecx_2 s< result)
        do
            int32_t* eax_7 = &var_2c
            
            if (edx_1 u>= 0x10)
                eax_7 = ebx_1
            
            if (*(eax_7 + ecx_2) == 0xa)
                break
            
            ecx_2 += 1
        while (ecx_2 s< result_2)
    
    void* var_44
    int32_t result_1
    char* esi_1
    
    if (ecx_2 - ecx_1 s<= var_48_3)
        char* eax_10 = sub_405480(&var_2c, &var_44, 0, ecx_2)
        
        if (arg1 + 0xcc != eax_10)
            int32_t eax_11 = *(arg1 + 0xe0)
            
            if (eax_11 u>= 0x10)
                sub_403160(*(arg1 + 0xcc), eax_11 + 1, 1)
            
            *(arg1 + 0xe0) = 0xf
            bool cond:6_1 = *(arg1 + 0xe0) u< 0x10
            *(arg1 + 0xdc) = 0
            char* eax_13
            
            if (cond:6_1)
                eax_13 = arg1 + 0xcc
            else
                eax_13 = *(arg1 + 0xcc)
            
            *eax_13 = 0
            sub_4056a0(arg1 + 0xcc, eax_10)
        
        var_8_1.b = 0
        
        if (result_1 u>= 0x10)
            sub_403160(var_44, result_1 + 1, 1)
        
        esi_1 = sub_405480(&var_2c, &var_44, *(arg1 + 0xdc), result_2 - *(arg1 + 0xdc))
        goto label_50ed80
    
    char* eax_20 = sub_405480(&var_2c, &var_44, 0, ecx_1 + var_48_3)
    
    if (arg1 + 0xcc != eax_20)
        int32_t eax_21 = *(arg1 + 0xe0)
        
        if (eax_21 u>= 0x10)
            sub_403160(*(arg1 + 0xcc), eax_21 + 1, 1)
        
        *(arg1 + 0xe0) = 0xf
        bool cond:5_1 = *(arg1 + 0xe0) u< 0x10
        *(arg1 + 0xdc) = 0
        char* eax_23
        
        if (cond:5_1)
            eax_23 = arg1 + 0xcc
        else
            eax_23 = *(arg1 + 0xcc)
        
        *eax_23 = 0
        sub_4056a0(arg1 + 0xcc, eax_20)
    
    var_8_1.b = 0
    
    if (result_1 u>= 0x10)
        sub_403160(var_44, result_1 + 1, 1)
    
    char* eax_28 = sub_405480(&var_2c, &var_44, *(arg1 + 0xdc), result_2 - *(arg1 + 0xdc))
    
    if (edi != eax_28)
        int32_t eax_29 = edi[5]
        
        if (eax_29 u>= 0x10)
            sub_403160(*edi, eax_29 + 1, 1)
        
        edi[5] = 0xf
        bool cond:7_1 = edi[5] u< 0x10
        edi[4] = 0
        char* eax_31
        
        if (cond:7_1)
            eax_31 = edi
        else
            eax_31 = *edi
        
        *eax_31 = 0
        sub_4056a0(edi, eax_28)
    
    var_8_1.b = 0
    
    if (result_1 u>= 0x10)
        sub_403160(var_44, result_1 + 1, 1)
    
    int32_t edx_4 = *(arg1 + 0xdc)
    int32_t result_3 = edx_4 - 1
    
    if (result_3 s>= 0)
        int32_t result_4
        
        do
            char* eax_34
            
            if (*(arg1 + 0xe0) u< 0x10)
                eax_34 = arg1 + 0xcc
            else
                eax_34 = *(arg1 + 0xcc)
            
            if (eax_34[result_3] == 0xa)
                break
            
            result_4 = result_3
            result_3 -= 1
        while (result_4 - 1 s>= 0)
    
    result = 0
    
    if (result_3 s>= 0)
        result = result_3
    
    if (result s< edx_4)
        while (true)
            char* ecx_12
            
            if (*(arg1 + 0xe0) u< 0x10)
                ecx_12 = arg1 + 0xcc
            else
                ecx_12 = *(arg1 + 0xcc)
            
            ecx_12.b = ecx_12[result]
            
            if (ecx_12.b u< 0x81 || ecx_12.b u> 0x9f)
                ecx_12.b += 0x20
                
                if (ecx_12.b u<= 0xf)
                    goto label_50ed38
            else
            label_50ed38:
                result += 1
                
                if (edx_4 s<= result)
                    char* eax_35
                    
                    if (edi[5] u< 0x10)
                        eax_35 = edi
                    else
                        eax_35 = *edi
                    
                    eax_35.b = *eax_35
                    void* var_4c_1
                    var_4c_1.b = eax_35.b
                    sub_405500(arg1 + 0xcc, 1, var_4c_1.b)
                    esi_1 = sub_405480(edi, &var_44, 1, *(arg1 + 0xf4) - 1)
                    break
            
            result += 1
            
            if (result s>= edx_4)
                goto label_50edd4
        
    label_50ed80:
        
        if (edi != esi_1)
            int32_t eax_40 = edi[5]
            
            if (eax_40 u>= 0x10)
                sub_403160(*edi, eax_40 + 1, 1)
            
            edi[5] = 0xf
            edi[4] = 0
            char* eax_42
            
            if (edi[5] u< 0x10)
                eax_42 = edi
            else
                eax_42 = *edi
            
            *eax_42 = 0
            sub_4056a0(edi, esi_1)
        
        result = result_1
        
        if (result u>= 0x10)
            result = sub_403160(var_44, result + 1, 1)
    
label_50edd4:
    edx_1 = var_18
    ebx_1 = var_2c

if (edx_1 u>= 0x10)
    result = sub_403160(ebx_1, edx_1 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
