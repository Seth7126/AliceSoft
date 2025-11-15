// 函数: sub_46ca60
// 地址: 0x46ca60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d3b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
int32_t i = *(arg1 + 0xc)
int32_t* var_68 = arg2
int32_t var_6c = 0
char* var_64 = ecx

if (i u> ecx)
    char* edx_1
    
    do
        edx_1 = *(arg1 + 4)
        ecx.b = *edx_1
        
        if (ecx.b u>= 0x81 && ecx.b u<= 0x9f)
            break
        
        if (ecx.b + 0x20 u<= 0xf)
            break
        
        if (ecx.b == 0xd)
            break
        
        if (ecx.b == 0xa)
            break
        
        char eax_3 = ecx.b
        
        if (eax_3 - 0x30 s< 0 || eax_3 - 0x30 s> 9)
            eax_3 = ecx.b
            
            if (eax_3 - 0x61 s< 0 || eax_3 - 0x61 s> 5)
                ecx.b -= 0x41
                
                if (ecx.b u> 5)
                    break
        
        *(arg1 + 4) = &edx_1[1]
    while (i u> &edx_1[1])
    ecx = var_64

int32_t eax_5 = *(arg1 + 4)
char var_30

if (ecx != eax_5)
    int32_t var_4c_1 = 0xf
    int32_t var_50_1 = 0
    char var_60 = 0
    sub_403490(&var_60, ecx, eax_5 - ecx)
    int32_t var_8_2 = 2
    var_64 = nullptr
    void* var_48
    int32_t* eax_9 = sub_419600(&var_60, "0x", &var_48, &var_60)
    
    if (eax_9[5] u>= 0x10)
        eax_9 = *eax_9
    
    int32_t* var_84_4 = &var_64
    i.b = sub_6ca310(eax_9, 0x7942d8) == 1
    int32_t var_34
    
    if (var_34 u>= 0x10)
        sub_403160(var_48, var_34 + 1, 1)
    
    if (i.b != 0)
        void** eax_21
        int32_t ecx_15
        eax_21, ecx_15 = sub_6ca3a0(&var_48, var_64)
        int32_t var_84_6 = ecx_15
        var_8_2.b = 6
        sub_471d90(arg2, eax_21, 0x11)
        
        if (var_34 u>= 0x10)
            sub_403160(var_48, var_34 + 1, 1)
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48.b = 0
    else
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = i.b
        int32_t* eax_13 = sub_403490(&var_30, 0x75f750, 0x46)
        var_8_2.b = 3
        var_8_2.b = 4
        sub_4055a0(*(arg1 + 0x2c), sub_4175e0(eax_13, &var_30, &var_48, U"\n"), 0, 0xffffffff)
        
        if (var_34 u>= 0x10)
            sub_403160(var_48, var_34 + 1, 1)
        
        var_8_2.b = 2
        
        if (var_1c_2 u>= 0x10)
            sub_403160(var_30.d, var_1c_2 + 1, 1)
        
        int32_t var_1c_3 = 0xf
        int32_t var_20_3 = 0
        var_30 = 0
        int32_t var_84_5 = sub_403490(&var_30, 0x75ce3f, nullptr)
        var_8_2.b = 5
        sub_471d90(arg2, &var_30, 0)
        
        if (var_1c_3 u>= 0x10)
            sub_403160(var_30.d, var_1c_3 + 1, 1)
        
        int32_t var_1c_4 = 0xf
        int32_t var_20_4 = 0
        var_30 = 0
    
    if (var_4c_1 u>= 0x10)
        int32_t var_84_7 = 1
        sub_403160(var_60.d, var_4c_1 + 1, 1)
else
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    sub_403490(&var_30, U"0", 1)
    int32_t var_8_1 = 0
    arg2[4] = 0
    arg2[5] = 0
    arg2[5] = 0xf
    bool cond:0_1 = arg2[5] u< 0x10
    arg2[4] = 0
    char* eax_6
    
    if (cond:0_1)
        eax_6 = arg2
    else
        eax_6 = *arg2
    
    *eax_6 = 0
    sub_403590(arg2, &var_30, 0, 0xffffffff)
    var_8_1.b = 1
    arg2[0xb] = 0xf
    arg2[0xa] = 0
    arg2[6].b = 0
    sub_403590(&arg2[6], &var_30, 0, 0xffffffff)
    arg2[0xc] = 0x11
    arg2[0xd] = 0
    
    if (var_1c_1 u>= 0x10)
        int32_t var_84_1 = 1
        sub_403160(var_30.d, var_1c_1 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
