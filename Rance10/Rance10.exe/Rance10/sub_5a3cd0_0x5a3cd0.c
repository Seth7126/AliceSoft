// 函数: sub_5a3cd0
// 地址: 0x5a3cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73eb68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, 0x769c74, 0xd)
int32_t var_8_1 = 0
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_7c = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx, var_1c + esi)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t i = 0

if ((*(arg2 + 0x338) - *(arg2 + 0x334)) s>> 2 s> 0)
    do
        if (i s> 0)
            int32_t var_18_1 = 0xf
            void* var_1c_1 = nullptr
            var_2c = 0
            sub_403490(&var_2c, ",\r\n", 3)
            int32_t var_8_3 = 1
            char* esi_1 = &var_2c
            char* edx_1 = &var_2c
            
            if (var_18_1 u>= 0x10)
                esi_1 = var_2c.d
            
            if (var_18_1 u>= 0x10)
                edx_1 = var_2c.d
            
            int32_t var_7c_1 = 0.d
            sub_6ca200(arg1 + 4, *(arg1 + 8), edx_1, var_1c_1 + esi_1)
            int32_t var_8_4 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_403490(&var_2c, "\t\t%d", 4)
        int32_t var_8_5 = 2
        int32_t eax_16 = *(arg2 + 0x334) + (i << 2)
        char var_5c
        void** ecx_6 = sub_409350(eax_16, &var_2c, &var_5c, eax_16)
        var_8_5.b = 3
        int32_t edx_3 = ecx_6[5]
        int32_t esi_2 = ecx_6[4]
        void** eax_18
        
        if (edx_3 u< 0x10)
            eax_18 = ecx_6
        else
            eax_18 = *ecx_6
        
        if (edx_3 u>= 0x10)
            ecx_6 = *ecx_6
        
        int32_t var_7c_3 = 0.d
        sub_6ca200(arg1 + 4, *(arg1 + 8), ecx_6, eax_18 + esi_2)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c.d, var_48 + 1, 1)
        
        int32_t var_8_6 = 0xffffffff
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_18_2 u>= 0x10)
            sub_403160(var_2c.d, var_18_2 + 1, 1)
        
        i += 1
    while (i s< (*(arg2 + 0x338) - *(arg2 + 0x334)) s>> 2)

int32_t result_1 = 0xf
void* const var_34 = nullptr
char var_44 = 0
sub_403490(&var_44, "\r\n", 2)
char* esi_3 = &var_44
int32_t var_8_7 = 4
char* edx_4 = &var_44

if (result_1 u>= 0x10)
    esi_3 = var_44.d

if (result_1 u>= 0x10)
    edx_4 = var_44.d

int32_t var_7c_4 = 0.d
sub_6ca200(arg1 + 4, *(arg1 + 8), edx_4, var_34 + esi_3)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
