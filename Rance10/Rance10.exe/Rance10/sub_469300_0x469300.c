// 函数: sub_469300
// 地址: 0x469300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cc74
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_30 = arg2
int32_t* var_34 = arg1
int32_t var_84 = 0
int32_t* var_88 = arg1
void** var_7c = nullptr
int32_t var_78 = 0
int32_t var_74 = 0
int32_t var_8_1 = 1
sub_46ec90(arg2, &var_7c)
int32_t* ecx_1 = nullptr
int32_t* var_70
__builtin_memset(&var_70, 0, 0x40)
var_8_1.b = 5
void** esi = var_7c
int32_t* i_2
int32_t* i_3
void** var_4c
int32_t var_40_1
int32_t var_3c_1
int32_t var_38_1
int32_t var_34_1

if (esi != var_78)
    void* edi_1 = var_30
    
    do
        void* eax_4 = sub_46eb40(edi_1, esi)
        int32_t eax_6 = *(eax_4 + 0x34) - 1
        
        if (eax_6 u<= 5)
            int32_t* ecx_4
            
            switch (eax_6)
                case 0, 1, 2
                    var_30 = eax_4
                    ecx_4 = &var_70
                case 3
                    var_30 = eax_4
                    ecx_4 = &i_3
                case 4
                    var_30 = eax_4
                    ecx_4 = &i_2
                case 5
                    var_30 = eax_4
                    ecx_4 = &var_4c
            
            sub_428f00(ecx_4, &var_30)
        
        esi = &esi[6]
    while (esi != var_78)
    
    ecx_1 = var_70
    int32_t var_68
    var_34_1 = var_68
    int32_t var_5c
    var_40_1 = var_5c
    int32_t var_50
    var_3c_1 = var_50
    int32_t var_44
    var_38_1 = var_44

arg1[4] = 0
arg1[5] = 0
arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0
char* eax_11

if (cond:0)
    eax_11 = arg1
else
    eax_11 = *arg1

*eax_11 = 0
int32_t* esi_1 = ecx_1
int32_t var_84_1 = 1
int32_t var_6c
void* var_2c
int32_t var_18

if (ecx_1 != var_6c)
    do
        var_8_1.b = 6
        sub_4055a0(arg1, sub_469620(&var_2c, *esi_1), 0, 0xffffffff)
        var_8_1.b = 5
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        esi_1 = &esi_1[1]
    while (esi_1 != var_6c)

int32_t var_60

for (int32_t* i = i_2; i != var_60; i = &i[1])
    var_8_1.b = 7
    sub_4055a0(arg1, sub_469620(&var_2c, *i), 0, 0xffffffff)
    var_8_1.b = 5
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

int32_t var_54

for (int32_t* i_1 = i_3; i_1 != var_54; i_1 = &i_1[1])
    var_8_1.b = 8
    sub_4055a0(arg1, sub_469620(&var_2c, *i_1), 0, 0xffffffff)
    var_8_1.b = 5
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

void** eax_24 = var_4c
void** esi_2 = eax_24
int32_t var_48

if (eax_24 != var_48)
    do
        var_8_1.b = 9
        sub_4055a0(arg1, sub_469620(&var_2c, *esi_2), 0, 0xffffffff)
        var_8_1.b = 5
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        esi_2 = &esi_2[1]
    while (esi_2 != var_48)
    
    eax_24 = var_4c

if (eax_24 != 0)
    sub_403160(eax_24, (var_38_1 - eax_24) s>> 2, 4)

int32_t* i_4 = i_3

if (i_4 != 0)
    sub_403160(i_4, (var_3c_1 - i_4) s>> 2, 4)

int32_t* i_5 = i_2

if (i_5 != 0)
    sub_403160(i_5, (var_40_1 - i_5) s>> 2, 4)

int32_t* ecx_16 = var_70

if (ecx_16 != 0)
    sub_403160(ecx_16, (var_34_1 - ecx_16) s>> 2, 4)

sub_417070(&var_7c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
