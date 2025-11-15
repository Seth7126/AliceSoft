// 函数: sub_47c170
// 地址: 0x47c170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e4ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
void* var_64 = nullptr
char var_74 = 0
sub_403490(&var_74, "http://", 7)
int32_t var_8_1 = 0
int32_t var_48 = 0xf
void* var_4c = nullptr
char var_5c = 0
sub_403490(&var_5c, "https://", 8)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
var_8_1.b = 2
char* edx = &var_74
void* var_2c
char* esi_1 = sub_405480(arg3, &var_2c, 0, var_64)

if (result_1 u>= 0x10)
    edx = var_74.d

void* eax_6 = &esi_1[0x10]

if (*(esi_1 + 0x14) u>= 0x10)
    esi_1 = *esi_1

void* ecx_3 = *eax_6
void* edi = var_64
void* eax_7 = edi

if (ecx_3 u< edi)
    eax_7 = ecx_3

int32_t esi_2 = sub_406ac0(eax_7, edx, esi_1, eax_7)

if (esi_2 == 0)
    int32_t eax_9 = *eax_6
    bool c_1 = edi u< eax_9
    
    if (edi == eax_9 || c_1)
        esi_2 = neg.d(sbb.d(esi_2, esi_2, c_1))
    else
        esi_2 = 0xffffffff

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)
    edi = var_64

char* ecx_7

if (esi_2 == 0)
    char* eax_12
    eax_12, ecx_7 = sub_405480(arg3, &var_2c, edi, 0xffffffff)
    
    if (&var_44 != eax_12)
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        var_30 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        ecx_7 = sub_4056a0(&var_44, eax_12)
    
    var_8_1.b = 2
    goto label_47c369

int32_t* esi_5 = &var_5c
char* ecx_9 = sub_405480(arg3, &var_2c, 0, var_4c)

if (var_48 u>= 0x10)
    esi_5 = var_5c.d

void* eax_16 = &ecx_9[0x10]

if (*(ecx_9 + 0x14) u>= 0x10)
    ecx_9 = *ecx_9

void* edx_1 = *eax_16
void* edi_1 = var_4c
void* eax_17 = edi_1

if (edx_1 u< edi_1)
    eax_17 = edx_1

int32_t esi_6 = sub_406ac0(eax_17, esi_5, ecx_9, eax_17)

if (esi_6 == 0)
    int32_t eax_19 = *eax_16
    bool c_2 = edi_1 u< eax_19
    
    if (edi_1 == eax_19 || c_2)
        esi_6 = neg.d(sbb.d(esi_6, esi_6, c_2))
    else
        esi_6 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)
    edi_1 = var_4c

if (esi_6 != 0)
    ecx_7 = &var_44
    
    if (&var_44 != arg3)
        ecx_7 = sub_403590(ecx_7, arg3, 0, 0xffffffff)
else
    ecx_7 = sub_409670(&var_44, sub_405480(arg3, &var_2c, edi_1, 0xffffffff))
label_47c369:
    
    if (var_18 u>= 0x10)
        ecx_7 = sub_403160(var_2c, var_18 + 1, 1)

int32_t var_9c_6 = 1
char var_78 = 0x2f
void* eax_26 = sub_42cb30(&var_44, &var_78, ecx_7)
int32_t ecx_18

if (eax_26 == 0xffffffff)
    if (arg2 != &var_44)
        sub_403590(arg2, &var_44, 0, 0xffffffff)
    
    ecx_18 = sub_403490(arg4, 0x75ce87, nullptr)
else
    sub_409670(arg2, sub_405480(&var_44, &var_2c, 0, eax_26))
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    ecx_18 = sub_409670(arg4, sub_405480(&var_44, &var_2c, eax_26 + 1, 0xffffffff))
    
    if (var_18 u>= 0x10)
        ecx_18 = sub_403160(var_2c, var_18 + 1, 1)

int32_t var_9c_10 = 1
var_78 = 0x3a
void* eax_34 = sub_42cb30(arg2, &var_78, ecx_18)

if (eax_34 == 0xffffffff)
    *arg5 = 0x50
else
    char* eax_35 = sub_405480(arg2, &var_2c, eax_34 + 1, 0xffffffff)
    
    if (*(eax_35 + 0x14) u>= 0x10)
        eax_35 = *eax_35
    
    int32_t* var_9c_11 = arg5
    sub_6ca310(eax_35, 0x7942dc)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    sub_409670(arg2, sub_405480(arg2, &var_2c, 0, eax_34))
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_2 = 0
var_44 = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t result = result_1
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (result u>= 0x10)
    result = sub_403160(var_74.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
