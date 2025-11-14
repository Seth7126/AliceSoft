// 函数: sub_4cc7a0
// 地址: 0x4cc7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bedf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (arg3 != 0)
    int32_t var_7c_1 = 7
    int32_t var_2c
    void** eax_5 = sub_4691f0(&var_2c, 0x6e1710)
    int32_t var_4 = 0
    var_4.b = 1
    void** var_5c
    sub_403110(arg2, sub_410930(eax_5, eax_5, &var_5c, "\r\n"), nullptr, 0xffffffff)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    int32_t var_7c_4 = 2
    int32_t var_44
    void** eax_7 = sub_4691f0(&var_44, 0x6e1760)
    int32_t var_4_2 = 2
    var_4_2.b = 3
    sub_403110(arg2, sub_410930(eax_7, eax_7, &var_2c, "\r\n"), nullptr, 0xffffffff)
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    int32_t var_4_3 = 0xffffffff
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    if (*(arg1 + 0x24) != 0)
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c.b = 0
        int32_t var_4_4 = 4
        int32_t* esi_1 = *(arg1 + 0x20)
        void* eax_9 = *esi_1
        void* var_60 = eax_9
        void** eax_11
        
        if (eax_9 == esi_1)
            eax_11 = &var_5c
        else
            do
                int32_t var_7c_7 = *(eax_9 + 0x10)
                var_4_4.b = 5
                sub_403110(&var_5c, sub_4691f0(&var_44, "%d, "), nullptr, 0xffffffff)
                var_4_4.b = 4
                
                if (var_30 u>= 0x10)
                    j__free(var_44)
                
                sub_418380(&var_60)
                eax_9 = var_60
            while (eax_9 != esi_1)
            
            eax_11 = var_5c
            
            if (var_48_1 u< 0x10)
                eax_11 = &var_5c
        
        void** var_7c_9 = eax_11
        void** eax_12 = sub_4691f0(&var_2c, 0x6e173c)
        var_4_4.b = 6
        var_4_4.b = 7
        sub_403110(arg2, sub_410930(eax_12, eax_12, &var_44, "\r\n"), nullptr, 0xffffffff)
        
        if (var_30 u>= 0x10)
            j__free(var_44)
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        int32_t var_4_5 = 0xffffffff
        
        if (var_48_1 u>= 0x10)
            j__free(var_5c)
    
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    var_5c.b = 0
    int32_t var_4_6 = 8
    var_4_6.b = 9
    sub_403110(arg2, sub_410930(sub_402110(&var_5c, 0x6e1750, 0xe), &var_5c, &var_44, "\r\n"), 
        nullptr, 0xffffffff)
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_4_7 = 0xffffffff
    
    if (var_48_2 u>= 0x10)
        j__free(var_5c)
    
    int32_t var_48_3 = 0xf
    int32_t var_4c_3 = 0
    var_5c.b = 0
    result = sub_4cb4c0(arg1, arg2, arg3) != 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
