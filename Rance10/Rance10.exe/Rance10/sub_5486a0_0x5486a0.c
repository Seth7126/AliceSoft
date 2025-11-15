// 函数: sub_5486a0
// 地址: 0x5486a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a2d9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg2
int32_t esi = data_7fd2b4
void* var_bc
sub_558a10(&var_bc)
int32_t var_8_1 = 0
var_8_1.b = 1
char var_5c
char var_2c
sub_404f20(&var_5c, sub_528040(&var_2c))
var_8_1.b = 3
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* eax_7 = edi[4] - esi
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
void* var_8c
char* eax_8 = sub_405480(edi, &var_8c, esi, eax_7)
var_8_1.b = 4
char var_74
int32_t* eax_10 = sub_4079d0(&var_5c, &var_bc, &var_74, &var_5c)
var_8_1.b = 5
int32_t* lpFileName_1
sub_4177a0(eax_10, eax_10, &lpFileName_1, eax_8)
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74.d, var_60 + 1, 1)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
var_8_1.b = 8
int32_t var_78

if (var_78 u>= 0x10)
    sub_403160(var_8c, var_78 + 1, 1)

int32_t* lpFileName = &lpFileName_1
int32_t var_78_1 = 0xf
int32_t var_30

if (var_30 u>= 0x10)
    lpFileName = lpFileName_1

int32_t var_7c = 0
var_8c.b = 0
uint32_t eax_15 = GetFileAttributesA(lpFileName)
void* ebx

if (eax_15 == 0xffffffff || (not.b((eax_15 u>> 4).b) & 1) == 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    void** var_c0 = edi
    int32_t var_18_2 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x766f1c, 0x2a)
    var_8_1.b = 9
    var_8_1.b = 0xa
    char var_a4
    sub_45aae0(sub_409240(&var_c0, &var_2c, &var_a4, &var_c0))
    int32_t var_90
    
    if (var_90 u>= 0x10)
        sub_403160(var_a4.d, var_90 + 1, 1)
    
    int32_t var_90_1 = 0xf
    int32_t var_94_1 = 0
    var_a4 = 0
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    ebx.b = 0
else if (sub_54de20(arg1 + 0x24, &lpFileName_1, arg3) == 0)
    ebx.b = 0
else
    ebx.b = 1

if (var_30 u>= 0x10)
    sub_403160(lpFileName_1, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
lpFileName_1.b = 0
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c.d, var_48 + 1, 1)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    sub_403160(var_bc, var_a8 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
