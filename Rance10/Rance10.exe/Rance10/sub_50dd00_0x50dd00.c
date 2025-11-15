// 函数: sub_50dd00
// 地址: 0x50dd00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737bfc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_2c
sub_4079d0(arg1, arg1 + 0xcc, &var_2c, arg1 + 0xe4)
int32_t var_8_1 = 0
int32_t eax_4 = sub_50e5e0(&var_2c)
int32_t arg_4
int32_t esi = arg_4
int32_t arg_8
int32_t edx_1 = arg_8
void* var_44
int32_t var_30
int32_t result_1

if (esi != edx_1 && edx_1 s<= eax_4)
    *(arg1 + 0xdc) = 0
    int32_t* eax_5 = &arg_8
    
    if (edx_1 s>= esi)
        eax_5 = &arg_4
    
    int32_t i_2 = *eax_5
    int32_t* eax_6 = &arg_8
    
    if (esi s>= edx_1)
        eax_6 = &arg_4
    
    int32_t eax_7 = *eax_6
    char* eax_8
    
    if (*(arg1 + 0xe0) u< 0x10)
        eax_8 = arg1 + 0xcc
    else
        eax_8 = *(arg1 + 0xcc)
    
    *eax_8 = 0
    bool cond:4_1 = *(arg1 + 0xf8) u< 0x10
    *(arg1 + 0xf4) = 0
    char* eax_9
    
    if (cond:4_1)
        eax_9 = arg1 + 0xe4
    else
        eax_9 = *(arg1 + 0xe4)
    
    *eax_9 = 0
    void* esi_1 = nullptr
    int32_t i_4 = 0
    
    if (i_2 s> 0)
        i_4 = i_2
        int32_t i
        
        do
            int32_t* eax_10 = &var_2c
            
            if (result_1 u>= 0x10)
                eax_10 = var_2c
            
            eax_10.b = *(eax_10 + esi_1)
            
            if (eax_10.b u< 0x81 || eax_10.b u> 0x9f)
                eax_10.b += 0x20
                
                if (eax_10.b u<= 0xf)
                    esi_1 += 1
            else
                esi_1 += 1
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    char* ecx_2 = sub_405480(&var_2c, &var_44, 0, esi_1)
    
    if (arg1 + 0xcc != ecx_2)
        int32_t eax_12 = *(arg1 + 0xe0)
        
        if (eax_12 u>= 0x10)
            sub_403160(*(arg1 + 0xcc), eax_12 + 1, 1)
        
        *(arg1 + 0xe0) = 0xf
        bool cond:6_1 = *(arg1 + 0xe0) u< 0x10
        *(arg1 + 0xdc) = 0
        int32_t* eax_14
        
        if (cond:6_1)
            eax_14 = arg1 + 0xcc
        else
            eax_14 = *(arg1 + 0xcc)
        
        *eax_14 = 0
        sub_4056a0(arg1 + 0xcc, ecx_2)
    
    var_8_1.b = 0
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    if (i_4 s< eax_7)
        int32_t i_3 = eax_7 - i_4
        int32_t i_1
        
        do
            int32_t* eax_18 = &var_2c
            
            if (result_1 u>= 0x10)
                eax_18 = var_2c
            
            eax_18.b = *(eax_18 + esi_1)
            
            if (eax_18.b u< 0x81 || eax_18.b u> 0x9f)
                eax_18.b += 0x20
                
                if (eax_18.b u<= 0xf)
                    esi_1 += 1
            else
                esi_1 += 1
            
            esi_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t var_1c
    char* eax_21 = sub_405480(&var_2c, &var_44, esi_1, var_1c - esi_1)
    
    if (arg1 + 0xe4 != eax_21)
        int32_t eax_22 = *(arg1 + 0xf8)
        
        if (eax_22 u>= 0x10)
            sub_403160(*(arg1 + 0xe4), eax_22 + 1, 1)
        
        *(arg1 + 0xf8) = 0xf
        bool cond:8_1 = *(arg1 + 0xf8) u< 0x10
        *(arg1 + 0xf4) = 0
        char* eax_24
        
        if (cond:8_1)
            eax_24 = arg1 + 0xe4
        else
            eax_24 = *(arg1 + 0xe4)
        
        *eax_24 = 0
        sub_4056a0(arg1 + 0xe4, eax_21)
    
    var_8_1.b = 0
    eax_4 = var_30
    
    if (eax_4 u>= 0x10)
        eax_4 = sub_403160(var_44, eax_4 + 1, 1)

int32_t* eax_26 = sub_4079d0(eax_4, arg1 + 0xcc, &var_44, arg1 + 0xe4)
var_8_1.b = 3
int32_t* edx_5

if (eax_26[5] u< 0x10)
    edx_5 = eax_26
else
    edx_5 = *eax_26

char* var_48_1

if (*(arg1 + 0x16c) u< 0x10)
    var_48_1 = arg1 + 0x158
else
    var_48_1 = *(arg1 + 0x158)

int32_t ebx_1 = eax_26[4]
int32_t eax_28 = ebx_1

if (*(arg1 + 0x168) u< ebx_1)
    eax_28 = *(arg1 + 0x168)

int32_t eax_29 = sub_406ac0(eax_28, edx_5, var_48_1, eax_28)
int32_t eax_30

if (eax_29 == 0)
    eax_30 = *(arg1 + 0x168)

void* ebx_2

if (eax_29 != 0 || eax_30 u< ebx_1 || eax_30 u> ebx_1)
    if (arg1 + 0x158 != eax_26)
        sub_403590(arg1 + 0x158, eax_26, 0, 0xffffffff)
    
    ebx_2 = arg1
    sub_508fe0(arg1 + 0x158, *(ebx_2 + 0x170))
    *(ebx_2 + 0x228) = 1
else
    ebx_2 = arg1

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

int32_t result = result_1
*(ebx_2 + 0xbc) = 0xffffffff
*(ebx_2 + 0xc0) = 0xffffffff

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
