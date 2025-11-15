// 函数: sub_483b00
// 地址: 0x483b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_72eb58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_90 = arg1
int32_t* var_94 = arg2
int32_t var_84_1 = 0
char var_50
int32_t* var_20
sub_405070(&var_20, sub_405130(&var_50, arg2))
var_84_1.b = 2
int32_t var_3c

if (var_3c u>= 0x10)
    sub_403160(var_50.d, var_3c + 1, 1)

int32_t var_3c_1 = 0xf
int32_t var_40 = 0
var_50 = 0
void** eax_7 = sub_432330(&arg1[1], &var_20)
void** edi = arg1[1]
void** esi = eax_7

if (esi != edi)
    eax_7 = sub_412ca0(&var_20, &esi[4])

if (esi == edi || eax_7.b != 0)
    esi = edi

int32_t result_1

if (esi == edi)
    void** edi_1 = var_94
    var_84_1.b = 5
    int32_t* eax_17
    void* ecx_8
    eax_17, ecx_8 = sub_4581e0(sub_457d60(eax_7, &var_20, &var_80, edi_1))
    int32_t* var_ac_5 = eax_17
    void* var_b0_5 = &eax_17[4]
    void** var_98
    sub_44eda0(&arg1[1], &var_98, ecx_8)
    var_84_1.b = 2
    sub_408940(&var_80)
    int32_t* ebx_3 = &var_90[3]
    void** eax_19
    int32_t* ecx_12
    eax_19, ecx_12 = sub_432330(ebx_3, &var_20)
    void** esi_1 = eax_19
    char eax_21
    
    if (esi_1 != *ebx_3)
        eax_21, ecx_12 = sub_412ca0(&var_20, &esi_1[4])
    
    if (esi_1 == *ebx_3 || eax_21 != 0)
        int32_t* var_ac_8 = ecx_12
        var_90 = &var_20
        void*** var_b0_7 = &var_90
        int32_t* eax_22 = sub_484600(ecx_12)
        sub_4846c0(ebx_3, &var_90, esi_1, &eax_22[4], eax_22)
        esi_1 = var_90
    
    esi_1[0xc] = arg3
    sub_483d30(&esi_1[0xb], &esi_1[0xa], edi_1, &esi_1[0xb])
else
    int32_t* eax_9 = &var_20
    
    if (result_1 u>= 0x10)
        eax_9 = var_20
    
    var_94 = eax_9
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    char var_38 = 0
    sub_403490(&var_38, 0x75fff4, 0x37)
    var_84_1.b = 3
    var_84_1.b = 4
    char var_68
    sub_45aae0(sub_409240(&var_94, &var_38, &var_68, &var_94))
    int32_t var_54
    
    if (var_54 u>= 0x10)
        sub_403160(var_68.d, var_54 + 1, 1)
    
    int32_t var_54_1 = 0xf
    int32_t var_58_1 = 0
    var_68 = 0
    
    if (var_24_1 u>= 0x10)
        sub_403160(var_38.d, var_24_1 + 1, 1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_20, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
