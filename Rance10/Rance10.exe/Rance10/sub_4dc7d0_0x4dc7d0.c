// 函数: sub_4dc7d0
// 地址: 0x4dc7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734833
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1

if (arg3 == 0)
    (*(eax_3 + 0x34))(eax_2)
else
    (*(eax_3 + 0x30))(eax_2)

long double x87_r0
sub_4de1f0(&arg1[0x10], x87_r0, arg2)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75d09b, nullptr)
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x764688, 0xa)
var_8_1.b = 1
var_8_1.b = 2
char var_74[0x10]
sub_4dbf90(arg1, sub_403cd0(arg2, &var_74, &var_2c, &var_5c))
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_8_2 = 0xffffffff
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x764694, 0x12)
int32_t var_8_3 = 3
int32_t* ecx_6 = *(arg2 + 4)
int32_t* edi

if (ecx_6 != 0)
    char* edx_1 = &var_2c
    
    if (var_18_2 u>= 0x10)
        edx_1 = var_2c.d
    
    edi = (*(*ecx_6 + 0x2c))(edx_1)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_88 = &common::CEXArrayReader::`vftable'
int32_t* var_84 = edi
var_8_3.b = 5

if (var_18_2 u>= 0x10)
    sub_403160(var_2c.d, var_18_2 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t eax_15
int32_t ecx_7
int32_t edx_2

if (edi != 0)
    int32_t eax_17 = (*(*edi + 0xc))(3, 0)
    int32_t* eax_18 = (*(*edi + 0xc))(2, 0)
    int32_t eax_19 = (*(*edi + 0xc))(1, 0)
    int32_t eax_20 = (*(*edi + 0xc))(0, 0)
    edi = eax_18
    edx_2 = eax_20
    
    if (edi s>= 0)
        eax_15 = eax_17
        
        if (eax_15 s>= 0 && edx_2 s>= 0)
            ecx_7 = eax_19
            
            if (ecx_7 s>= 0)
                goto label_4dc9d1
else
    eax_15 = 0
    ecx_7 = 0
    edx_2 = 0
label_4dc9d1:
    arg1[0xb] = edx_2
    arg1[0xc] = ecx_7
    arg1[0xe] = edi
    arg1[0xf] = eax_15
    arg1[8].b = 1
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x764454, 0xe)
var_8_3.b = 6
int32_t* ecx_13 = *(arg2 + 4)
int32_t eax_21

if (ecx_13 != 0)
    char* edx_6 = &var_44
    
    if (var_30 u>= 0x10)
        edx_6 = var_44.d
    
    eax_21 = (*(*ecx_13 + 8))(edx_6, 0)
else
    eax_21 = 0

arg1[0x21] = eax_21

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

void* edi_1 = arg1[0x18]
void* result = arg1[0x21]
void* ecx_14 = *(edi_1 + 0x68)

if (ecx_14 != 0)
    int32_t edx_7 = *(ecx_14 + 0x48)
    *(ecx_14 + 0x4c) = 0
    
    if (result s>= edx_7)
        *(edi_1 + 0x13a) = 1
        *(edi_1 + 0x13c) = result - edx_7
    else
        void* result_1 = result
        sub_4daf50(*(edi_1 + 0x68))
        *(edi_1 + 0x138) = 1

arg1[8].b = 1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
