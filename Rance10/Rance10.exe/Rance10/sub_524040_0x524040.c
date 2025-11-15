// 函数: sub_524040
// 地址: 0x524040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_739519
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5238f0(arg1)
int32_t eax_3 = *arg1

if (arg3 == 0)
    (*(eax_3 + 0x34))(eax_2)
else
    (*(eax_3 + 0x30))(eax_2)

int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x766dd0, 2)
int32_t var_8_1 = 0
int32_t* ecx_2 = *(arg2 + 4)
int32_t* edi

if (ecx_2 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    edi = (*(*ecx_2 + 0x2c))(edx_1)
else
    edi = nullptr

struct common::CEXArrayReader::VTable* const var_88 = &common::CEXArrayReader::`vftable'
int32_t* var_84 = edi
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x766db4, 0xa)
var_8_1.b = 3
int32_t* ecx_4 = *(arg2 + 4)
int32_t* var_7c

if (ecx_4 != 0)
    char* edx_2 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_2 = var_2c.d
    
    var_7c = (*(*ecx_4 + 8))(edx_2, 0)
else
    var_7c = ecx_4

var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_403490(&var_5c, 0x75d3a3, nullptr)
var_8_1.b = 4
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x766d98, 0xa)
var_8_1.b = 5
char var_74[0x10]
char* ecx_10 = sub_403cd0(arg2, &var_74, &var_2c, &var_5c)

if (&arg1[0x1f] != ecx_10)
    int32_t eax_11 = arg1[0x24]
    
    if (eax_11 u>= 0x10)
        sub_403160(arg1[0x1f], eax_11 + 1, 1)
    
    arg1[0x24] = 0xf
    bool cond:3_1 = arg1[0x24] u< 0x10
    arg1[0x23] = 0
    char* eax_13
    
    if (cond:3_1)
        eax_13 = &arg1[0x1f]
    else
        eax_13 = arg1[0x1f]
    
    *eax_13 = 0
    sub_4056a0(&arg1[0x1f], ecx_10)

int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74[0].d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74[0] = 0

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

var_8_1.b = 2
int32_t var_18_2 = 0xf
int32_t var_1c_2 = 0
var_2c = 0

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_18_3 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
sub_403490(&var_2c, 0x766da4, 0xc)
var_8_1.b = 7
int32_t* ecx_13 = *(arg2 + 4)
int32_t eax_21

if (ecx_13 != 0)
    char* edx_3 = &var_2c
    
    if (var_18_3 u>= 0x10)
        edx_3 = var_2c.d
    
    eax_21 = (*(*ecx_13 + 8))(edx_3, 0)
else
    eax_21 = 0

arg1[0x26] = eax_21
var_8_1.b = 2

if (var_18_3 u>= 0x10)
    sub_403160(var_2c.d, var_18_3 + 1, 1)

int32_t var_18_4 = 0xf
int32_t var_1c_4 = 0
var_2c = 0
sub_403490(&var_2c, 0x766d78, 0x10)
var_8_1.b = 8
int32_t* ecx_15 = *(arg2 + 4)
int32_t eax_26

if (ecx_15 != 0)
    char* edx_4 = &var_2c
    
    if (var_18_4 u>= 0x10)
        edx_4 = var_2c.d
    
    eax_26 = (*(*ecx_15 + 8))(edx_4, 0)
else
    eax_26 = 0

arg1[0x27] = eax_26
var_8_1.b = 2

if (var_18_4 u>= 0x10)
    sub_403160(var_2c.d, var_18_4 + 1, 1)

int32_t eax_30

if (edi != 0)
    eax_30 = (*(*edi + 0xc))(0, 0)
else
    eax_30 = 0

arg1[0x28] = eax_30
int32_t eax_32

if (edi != 0)
    eax_32 = (*(*edi + 0xc))(1, 0)
else
    eax_32 = 0

arg1[0x29] = eax_32
int32_t eax_34

if (edi != 0)
    eax_34 = (*(*edi + 0xc))(2, 0)
else
    eax_34 = 0

arg1[0x2a] = eax_34
int32_t var_18_5 = 0xf
int32_t var_1c_5 = 0
var_2c = 0
sub_403490(&var_2c, 0x766d8c, 8)
var_8_1.b = 9
int32_t* ecx_20 = *(arg2 + 4)
void* edi_1

if (ecx_20 != 0)
    char* edx_5 = &var_2c
    
    if (var_18_5 u>= 0x10)
        edx_5 = var_2c.d
    
    edi_1 = (*(*ecx_20 + 8))(edx_5, 0)
else
    edi_1 = nullptr

var_8_1.b = 2

if (var_18_5 u>= 0x10)
    sub_403160(var_2c.d, var_18_5 + 1, 1)

if (var_7c == 1)
    sub_5235f0(arg1, &arg1[0x1f], arg1[0x26], arg1[0x27], arg1[0x28], arg1[0x29], arg1[0x2a])
    int32_t* ecx_24 = arg1[0x25]
    
    if (edi_1 s< 0)
        if (ecx_24 != 0)
            sub_435b30(ecx_24, 0)
        
        int32_t* ecx_25 = arg1[0x25]
        sub_435f60(ecx_25, ecx_25[0x2f])
    else if (ecx_24 != 0)
        sub_435b30(ecx_24, edi_1)

void* result
result.b = 1
arg1[0x2b].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
