// 函数: sub_416650
// 地址: 0x416650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72828e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_5c = arg3
int32_t var_7c = 0
int32_t i_2 = (arg2[1] - *arg2) s/ 0x7c
char* result

if (i_2 s> 0)
    void* var_68 = nullptr
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    int32_t var_8_1 = 0
    sub_416ab0(&var_68, i_2)
    void* edi_1 = var_68
    int32_t var_48 = 0
    void* var_44
    int32_t var_30
    
    if (i_2 s> 0)
        int32_t* esi_1 = edi_1 + 0x14
        int32_t edx_4 = arg5 + 1
        int32_t i_1 = i_2
        int32_t eax_5 = 0
        int32_t var_5c_1 = edx_4
        int32_t var_50_1 = 0
        int32_t edi_2 = 0
        int32_t i
        
        do
            char* eax_6 = sub_415e60(*arg2 + eax_5, &var_44, arg4, edx_4)
            
            if (&esi_1[-5] != eax_6)
                int32_t eax_7 = *esi_1
                
                if (eax_7 u>= 0x10)
                    sub_403160(esi_1[-5], eax_7 + 1, 1)
                
                *esi_1 = 0xf
                bool cond:2_1 = *esi_1 u< 0x10
                esi_1[-1] = 0
                char* eax_9
                
                if (cond:2_1)
                    eax_9 = &esi_1[-5]
                else
                    eax_9 = esi_1[-5]
                
                *eax_9 = 0
                sub_4056a0(&esi_1[-5], eax_6)
            
            var_8_1.b = 0
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            int32_t eax_12 = esi_1[-1]
            int32_t var_74 = eax_12
            int32_t* ecx_11 = &var_74
            
            if (edi_2 s>= eax_12)
                ecx_11 = &var_48
            
            edx_4 = var_5c_1
            eax_5 = var_50_1 + 0x7c
            esi_1 = &esi_1[6]
            i = i_1
            i_1 -= 1
            var_50_1 = eax_5
            edi_2 = *ecx_11
            var_48 = edi_2
        while (i != 1)
        edi_1 = var_68
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "{\n", 2)
    var_8_1.b = 2
    int32_t* eax_14 = sub_405500(&var_2c, (arg5 << 2) + 4, 0x20)
    int32_t esi_2 = 0
    
    if (i_2 s> 0)
        do
            var_8_1.b = 3
            sub_4055a0(&var_2c, sub_4175e0(eax_14, edi_1, &var_44, U",\n\n}"), 0, 0xffffffff)
            var_8_1.b = 2
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            sub_405500(&var_2c, var_48 - *(edi_1 + 0x10) + 1, 0x20)
            eax_14 = esi_2 u% 0xa
            
            if (eax_14 == 9)
                sub_407430(&var_2c, &(*U",\n\n}")[1], 1)
                eax_14 = sub_405500(&var_2c, (arg5 << 2) + 4, 0x20)
            
            esi_2 += 1
            edi_1 += 0x18
        while (esi_2 s< i_2)
    
    sub_407430(&var_2c, &(*U",\n\n}")[2], 1)
    sub_405500(&var_2c, arg5 << 2, 0x20)
    sub_407430(&var_2c, &(*U",\n\n}")[3], 1)
    *(arg3 + 0x14) = 0xf
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_4056a0(arg3, &var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_417070(&var_68)
    result = arg3
else
    sub_403360(arg3, "{ }")
    result = arg3

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
