// 函数: sub_469c50
// 地址: 0x469c50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ce18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_78 = arg1
int32_t var_84 = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_8_1 = 0
int32_t esi = 0
int32_t eax_5 = (*(arg2 + 8) - *(arg2 + 4)) s>> 2
int32_t var_78_1 = eax_5
int32_t ecx = eax_5 - 1
char var_2c
int32_t var_18

if (eax_5 s> 0)
    do
        void* const edi_1
        
        if (esi s< 0)
            edi_1 = nullptr
        else if ((*(arg2 + 8) - *(arg2 + 4)) s>> 2 s> esi)
            edi_1 = *(*(arg2 + 4) + (esi << 2))
        else
            edi_1 = nullptr
        
        eax_5.b = *(edi_1 + 5)
        
        if (eax_5.b != 0)
            sub_407430(&var_44, "key ", 4)
        
        int32_t eax_8 = *(edi_1 + 8)
        
        if (eax_8 == 1)
            sub_407430(&var_44, "int ", 4)
        else if (eax_8 == 2)
            sub_407430(&var_44, "float ", 6)
        else if (eax_8 == 3)
            sub_407430(&var_44, "string ", 7)
        
        var_8_1.b = 1
        void* var_74
        char* eax_13 = sub_46a560(&var_2c, sub_470a10(edi_1, &var_74))
        char* ecx_5 = &data_75f528
        var_8_1.b = 2
        
        if (esi == ecx)
            ecx_5 = &data_75ce0e
        
        var_8_1.b = 3
        char var_5c[0x10]
        sub_4055a0(&var_44, sub_4176f0(eax_13.b, eax_13, &var_5c, ecx_5), 0, 0xffffffff)
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c[0].d, var_48 + 1, 1)
        
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c[0] = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        var_8_1.b = 0
        var_18 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            sub_403160(var_74, var_60 + 1, 1)
        
        esi += 1
    while (esi s< var_78_1)

int32_t* eax_21 = sub_419600(&var_44, U"(", &var_2c, &var_44)
var_8_1.b = 4
sub_4176f0(eax_21.b, eax_21, arg1, ")\r\n")

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_2 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
