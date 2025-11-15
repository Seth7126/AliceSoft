// 函数: sub_50e630
// 地址: 0x50e630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737d06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *(arg1 + 0xdc)
void* edi = result - 1

if (edi s>= 0)
    void* temp1_1
    
    do
        void* eax_3
        
        if (*(arg1 + 0xe0) u< 0x10)
            eax_3 = arg1 + 0xcc
        else
            eax_3 = *(arg1 + 0xcc)
        
        if (*(eax_3 + edi) == 0xa)
            break
        
        temp1_1 = edi
        edi -= 1
    while (temp1_1 - 1 s>= 0)

if (edi != 0xffffffff)
    void* eax_4 = result - edi
    void* edi_1 = edi - 1
    
    if (edi - 1 s>= 0)
        void* temp2_1
        
        do
            void* eax_5
            
            if (*(arg1 + 0xe0) u< 0x10)
                eax_5 = arg1 + 0xcc
            else
                eax_5 = *(arg1 + 0xcc)
            
            if (*(eax_5 + edi_1) == 0xa)
                break
            
            temp2_1 = edi_1
            edi_1 -= 1
        while (temp2_1 - 1 s>= 0)
    
    void* result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403590(&var_44, arg1 + 0xcc, 0, 0xffffffff)
    int32_t var_8_1 = 0
    void* var_5c
    void* var_2c
    int32_t var_18
    
    if (edi - edi_1 s<= eax_4)
        char* eax_8 = sub_405480(&var_44, &var_2c, 0, edi)
        
        if (arg1 + 0xcc != eax_8)
            int32_t eax_9 = *(arg1 + 0xe0)
            
            if (eax_9 u>= 0x10)
                sub_403160(*(arg1 + 0xcc), eax_9 + 1, 1)
            
            *(arg1 + 0xe0) = 0xf
            bool cond:2_1 = *(arg1 + 0xe0) u< 0x10
            *(arg1 + 0xdc) = 0
            char* eax_11
            
            if (cond:2_1)
                eax_11 = arg1 + 0xcc
            else
                eax_11 = *(arg1 + 0xcc)
            
            *eax_11 = 0
            sub_4056a0(arg1 + 0xcc, eax_8)
        
        var_8_1.b = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        char* eax_16 = sub_405480(&var_44, &var_5c, edi, var_34_1 - edi)
        var_8_1.b = 2
        char* eax_17 = sub_417750(eax_16, eax_16, &var_2c, arg1 + 0xe4)
        
        if (arg1 + 0xe4 != eax_17)
            int32_t eax_18 = *(arg1 + 0xf8)
            
            if (eax_18 u>= 0x10)
                sub_403160(*(arg1 + 0xe4), eax_18 + 1, 1)
            
            *(arg1 + 0xf8) = 0xf
            bool cond:4_1 = *(arg1 + 0xf8) u< 0x10
            *(arg1 + 0xf4) = 0
            char* eax_20
            
            if (cond:4_1)
                eax_20 = arg1 + 0xe4
            else
                eax_20 = *(arg1 + 0xe4)
            
            *eax_20 = 0
            sub_4056a0(arg1 + 0xe4, eax_17)
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c.b = 0
        goto label_50ea20
    
    char* eax_24 = sub_405480(&var_44, &var_5c, 0, eax_4 + edi_1)
    
    if (arg1 + 0xcc != eax_24)
        int32_t eax_25 = *(arg1 + 0xe0)
        
        if (eax_25 u>= 0x10)
            sub_403160(*(arg1 + 0xcc), eax_25 + 1, 1)
        
        *(arg1 + 0xe0) = 0xf
        bool cond:1_1 = *(arg1 + 0xe0) u< 0x10
        *(arg1 + 0xdc) = 0
        char* eax_27
        
        if (cond:1_1)
            eax_27 = arg1 + 0xcc
        else
            eax_27 = *(arg1 + 0xcc)
        
        *eax_27 = 0
        sub_4056a0(arg1 + 0xcc, eax_24)
    
    var_8_1.b = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t* eax_32 = sub_405480(&var_44, &var_5c, *(arg1 + 0xdc), var_34_1 - *(arg1 + 0xdc))
    var_8_1.b = 5
    int32_t* eax_33 = sub_417750(eax_32, eax_32, &var_2c, arg1 + 0xe4)
    
    if (arg1 + 0xe4 != eax_33)
        int32_t eax_34 = *(arg1 + 0xf8)
        
        if (eax_34 u>= 0x10)
            sub_403160(*(arg1 + 0xe4), eax_34 + 1, 1)
        
        *(arg1 + 0xf8) = 0xf
        bool cond:3_1 = *(arg1 + 0xf8) u< 0x10
        *(arg1 + 0xf4) = 0
        void* eax_36
        
        if (cond:3_1)
            eax_36 = arg1 + 0xe4
        else
            eax_36 = *(arg1 + 0xe4)
        
        *eax_36 = 0
        sub_4056a0(arg1 + 0xe4, eax_33)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    var_8_1.b = 0
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c.b = 0
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c, var_48 + 1, 1)
    
    int32_t edx_6 = *(arg1 + 0xdc)
    int32_t ecx_12 = edx_6 - 1
    
    if (ecx_12 s>= 0)
        int32_t temp3_1
        
        do
            void* eax_41
            
            if (*(arg1 + 0xe0) u< 0x10)
                eax_41 = arg1 + 0xcc
            else
                eax_41 = *(arg1 + 0xcc)
            
            if (*(eax_41 + ecx_12) == 0xa)
                break
            
            temp3_1 = ecx_12
            ecx_12 -= 1
        while (temp3_1 - 1 s>= 0)
    
    int32_t eax_42 = 0
    
    if (ecx_12 s>= 0)
        eax_42 = ecx_12
    
    if (eax_42 s< edx_6)
        while (true)
            void* ecx_13
            
            if (*(arg1 + 0xe0) u< 0x10)
                ecx_13 = arg1 + 0xcc
            else
                ecx_13 = *(arg1 + 0xcc)
            
            ecx_13.b = *(ecx_13 + eax_42)
            
            if (ecx_13.b u< 0x81 || ecx_13.b u> 0x9f)
                ecx_13.b += 0x20
                
                if (ecx_13.b u<= 0xf)
                    goto label_50e998
            else
            label_50e998:
                eax_42 += 1
                
                if (edx_6 s<= eax_42)
                    void* eax_43
                    
                    if (*(arg1 + 0xf8) u< 0x10)
                        eax_43 = arg1 + 0xe4
                    else
                        eax_43 = *(arg1 + 0xe4)
                    
                    eax_43.b = *eax_43
                    void* var_60_1
                    var_60_1.b = eax_43.b
                    sub_405500(arg1 + 0xcc, 1, var_60_1.b)
                    int32_t* eax_47 = sub_405480(arg1 + 0xe4, &var_5c, 1, *(arg1 + 0xf4) - 1)
                    
                    if (arg1 + 0xe4 != eax_47)
                        int32_t eax_48 = *(arg1 + 0xf8)
                        
                        if (eax_48 u>= 0x10)
                            sub_403160(*(arg1 + 0xe4), eax_48 + 1, 1)
                        
                        *(arg1 + 0xf8) = 0xf
                        bool cond:5_1 = *(arg1 + 0xf8) u< 0x10
                        *(arg1 + 0xf4) = 0
                        void* eax_50
                        
                        if (cond:5_1)
                            eax_50 = arg1 + 0xe4
                        else
                            eax_50 = *(arg1 + 0xe4)
                        
                        *eax_50 = 0
                        sub_4056a0(arg1 + 0xe4, eax_47)
                    
                    break
            
            eax_42 += 1
            
            if (eax_42 s>= edx_6)
                goto label_50ea34
        
    label_50ea20:
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
    
label_50ea34:
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
