// 函数: sub_50dff0
// 地址: 0x50dff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737c57
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* var_58 = arg2
int32_t var_50 = 0
int32_t* var_30
sub_4079d0(arg1 + 0xe4, arg1 + 0xcc, &var_30, arg1 + 0xe4)
int32_t var_8_2 = 1
int32_t eax_4 = sub_50e5e0(&var_30)
arg2[4] = 0
arg2[5] = 0
arg2[5] = 0xf
bool cond:0 = arg2[5] u< 0x10
arg2[4] = 0
char* eax_5

if (cond:0)
    eax_5 = arg2
else
    eax_5 = *arg2

*eax_5 = 0
sub_403490(arg2, 0x75d2cf, nullptr)
int32_t arg_8
int32_t edi = arg_8
int32_t arg_c
int32_t ecx_2 = arg_c
int32_t var_50_1 = 1
int32_t var_1c

if (edi != ecx_2 && ecx_2 s<= eax_4)
    int32_t* eax_6 = &arg_c
    
    if (ecx_2 s>= edi)
        eax_6 = &arg_8
    
    int32_t i_2 = *eax_6
    int32_t* eax_7 = &arg_c
    
    if (edi s>= ecx_2)
        eax_7 = &arg_8
    
    int32_t i_4 = 0
    int32_t edi_1 = *eax_7
    int32_t eax_8 = 0
    
    if (i_2 s> 0)
        i_4 = i_2
        int32_t i
        
        do
            int32_t* ecx_3 = &var_30
            
            if (var_1c u>= 0x10)
                ecx_3 = var_30
            
            ecx_3.b = *(ecx_3 + eax_8)
            
            if (ecx_3.b u< 0x81 || ecx_3.b u> 0x9f)
                ecx_3.b += 0x20
                
                if (ecx_3.b u<= 0xf)
                    eax_8 += 1
            else
                eax_8 += 1
            
            eax_8 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t edx_1 = eax_8
    
    if (i_4 s< edi_1)
        int32_t i_3 = edi_1 - i_4
        int32_t i_1
        
        do
            int32_t** ecx_5 = &var_30
            
            if (var_1c u>= 0x10)
                ecx_5 = var_30
            
            ecx_5.b = *(ecx_5 + eax_8)
            
            if (ecx_5.b u< 0x81 || ecx_5.b u> 0x9f)
                ecx_5.b += 0x20
                
                if (ecx_5.b u<= 0xf)
                    eax_8 += 1
            else
                eax_8 += 1
            
            eax_8 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void* var_48
    char* eax_10 = sub_405480(&var_30, &var_48, edx_1, eax_8 - edx_1)
    
    if (arg2 != eax_10)
        int32_t eax_11 = arg2[5]
        
        if (eax_11 u>= 0x10)
            sub_403160(*arg2, eax_11 + 1, 1)
        
        arg2[5] = 0xf
        bool cond:3_1 = arg2[5] u< 0x10
        arg2[4] = 0
        int32_t* eax_13
        
        if (cond:3_1)
            eax_13 = arg2
        else
            eax_13 = *arg2
        
        *eax_13 = 0
        sub_4056a0(arg2, eax_10)
    
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
