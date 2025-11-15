// 函数: sub_522250
// 地址: 0x522250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_739370
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4efcc0(*(arg1 + 0xa4))

if (*(eax_3 + 0x40) != 0)
    *(eax_3 + 0x40) = 0

void* var_2c
char* eax_4 = sub_4f8bc0(arg1 + 0xcc, &var_2c)
int32_t var_8_1 = 0
void* ecx_3 = *(*(arg1 + 0x2ec) + 8)
char var_45

if (ecx_3 != 0)
    var_45 = sub_4d62f0(ecx_3, eax_4)
else
    var_45 = ecx_3.b

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

char* var_68_2 = &var_2c

if (var_45 == 0)
    char* eax_9 = sub_4f83f0(arg1 + 0xcc, var_68_2)
    int32_t var_8_4 = 2
    
    if (*(eax_9 + 0x14) u>= 0x10)
        eax_9 = *eax_9
    
    bool eax_10 = sub_44c4e0(eax_9)
    int32_t var_8_5 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    if (eax_10 == 0)
        int32_t ecx_9
        ecx_9.b = *(arg1 + 0xc)
        int32_t edi_4 = *(arg1 + 0x100) - *(arg1 + 0x10c) - *(arg1 + 0x108)
        int32_t var_4c_1
        
        if (ecx_9.b == 0)
            var_4c_1 = edi_4
        else
            var_4c_1 = *(arg1 + 0x104)
        
        if (ecx_9.b == 0)
            edi_4 = *(arg1 + 0x104)
        
        void* esi_3 = *(eax_3 + 0x44)
        sub_555e00(esi_3, 0x18, 1)
        sub_54b7a0(*(esi_3 + 0x80))
        
        if (var_4c_1 s> 0 && edi_4 s> 0)
            void* esi_4 = *(eax_3 + 0x44)
            sub_555e00(esi_4, 0x18, 1)
            sub_54b880(*(esi_4 + 0x80), var_4c_1, edi_4)
            int32_t var_70_5 = 0xc8
            int32_t var_74_1 = 0xc8
            int32_t var_78_1 = 0xc8
            int32_t var_7c_1 = edi_4
            int32_t var_80_1 = var_4c_1
            sub_518200(eax_3)
        
        void* esi_5 = *(eax_3 + 0x44)
        sub_555e00(esi_5, 0x18, 1)
        sub_54c110(*(esi_5 + 0x80))
    else
        void* var_44
        char* eax_11 = sub_4f83f0(arg1 + 0xcc, &var_44)
        int32_t var_8_6 = 3
        void* esi_2 = *(eax_3 + 0x44)
        sub_555e00(esi_2, 0x11, 1)
        sub_547af0(*(esi_2 + 0x80), eax_11, nullptr)
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44, var_30 + 1, 1)
else
    char* eax_6 = sub_4f8bc0(arg1 + 0xcc, var_68_2)
    int32_t var_8_3 = 1
    void* esi_1 = *(eax_3 + 0x44)
    sub_555e00(esi_1, 0x1a, 1)
    sub_4dbf90(*(esi_1 + 0x80), eax_6)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

void* result = *(arg1 + 0xa4)
*(result + 0x1a8) = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
