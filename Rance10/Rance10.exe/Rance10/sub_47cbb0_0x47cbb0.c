// 函数: sub_47cbb0
// 地址: 0x47cbb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e57e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_4c = arg1
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (not(cond:0))
    arg1 = *arg1

*arg1 = nullptr
int32_t result = arg2[4]

if (result == 0)
    result.b = 1
else if ((result.b & 1) == 0)
    char* edi_1 = nullptr
    char* esi_1 = nullptr
    char* var_40 = nullptr
    char* var_3c_1 = nullptr
    int32_t var_34_1 = 0
    int32_t var_38_1 = 0
    uint32_t eax_3 = result u>> 1
    int32_t var_8_1 = 0
    
    if (eax_3 != 0)
        sub_405a80(&var_40, eax_3)
        esi_1 = var_3c_1
        edi_1 = var_40
        var_34_1 = var_38_1
    
    int32_t i_1 = 0
    
    if (arg2[4] u> 0)
        int32_t i
        
        do
            int32_t edx = arg2[5]
            int32_t* eax_4
            
            if (edx u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
            
            eax_4.b = *(eax_4 + i_1)
            int32_t* edx_1
            
            if (edx u< 0x10)
                edx_1 = arg2
            else
                edx_1 = *arg2
            
            void* eax_6
            eax_6.b = eax_4.b * 0x1a + 0x25
            eax_6.b += *(edx_1 + i_1 + 1)
            char var_2d = eax_6.b
            
            if (&var_2d u>= esi_1 || edi_1 u> &var_2d)
                if (esi_1 == var_34_1)
                    sub_405a20(&var_40, 1)
                    esi_1 = var_3c_1
                    edi_1 = var_40
                    var_34_1 = var_38_1
                
                if (esi_1 != 0)
                    *esi_1 = eax_6.b
            else
                eax_6 = &var_2d - edi_1
                
                if (esi_1 == var_34_1)
                    sub_405a20(&var_40, 1)
                    esi_1 = var_3c_1
                    edi_1 = var_40
                    var_34_1 = var_38_1
                
                if (esi_1 != 0)
                    eax_6.b = *(edi_1 + eax_6)
                    *esi_1 = eax_6.b
            
            esi_1 = &esi_1[1]
            i = i_1 + 2
            var_3c_1 = esi_1
            i_1 = i
        while (i u< arg2[4])
    
    int32_t var_18_1 = 0xf
    void* eax_9 = esi_1 - edi_1
    int32_t var_1c_1 = 0
    char var_2c = 0
    
    if (eax_9 != 0xf && sub_4036c0(&var_2c, eax_9, 1) != 0)
        char* eax_11 = &var_2c
        int32_t var_1c_2 = 0
        
        if (var_18_1 u>= 0x10)
            eax_11 = var_2c.d
        
        *eax_11 = 0
    
    void** var_60_2 = var_4c
    sub_47ce40(&var_2c, edi_1, esi_1)
    
    if (var_4c != &var_2c)
        int32_t eax_12 = var_4c[5]
        
        if (eax_12 u>= 0x10)
            sub_403160(*var_4c, eax_12 + 1, 1)
        
        var_4c[5] = 0xf
        bool cond:4_1 = var_4c[5] u< 0x10
        var_4c[4] = 0
        char* eax_14
        
        if (cond:4_1)
            eax_14 = var_4c
        else
            eax_14 = *var_4c
        
        *eax_14 = 0
        sub_4056a0(var_4c, &var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    if (edi_1 != 0)
        sub_403160(edi_1, var_34_1 - edi_1, 1)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
