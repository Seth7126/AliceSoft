// 函数: sub_485120
// 地址: 0x485120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ec58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_58 = &fileimage::CFileImageMaker::`vftable'
void* result_1 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_8_1 = 0
bool var_48 = false
sub_4263a0(&result_1, &var_48)
var_48 = *(arg1 + 0x904)
sub_4263a0(&result_1, &var_48)
int32_t i = 0

if (*(arg1 + 0x904) s> 0)
    void* esi_1 = arg1 + 0xc
    
    do
        var_48 = *(esi_1 - 8)
        sub_4263a0(&result_1, &var_48)
        var_48 = *esi_1 != 0
        sub_4263a0(&result_1, &var_48)
        var_48 = false
        sub_4263a0(&result_1, &var_48)
        i += 1
        esi_1 += 0x24
    while (i s< *(arg1 + 0x904))

int32_t* esi_2 = &data_7fcc80
char eax_5 = sub_563b40(&data_7fcc80, &result_1)
void* ebx

if (eax_5 != 0)
    ebx.b = 1
else
    if (data_7fcc94 u>= 0x10)
        esi_2 = data_7fcc80
    
    int32_t* var_5c = esi_2
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = eax_5
    sub_403490(&var_2c, 0x760044, 0x2b)
    var_8_1.b = 1
    var_8_1.b = 2
    char var_44
    sub_6c52e0(sub_409240(&var_5c, &var_2c, &var_44, &var_5c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    ebx.b = 0

void* result = result_1

if (result != 0)
    sub_403160(result, var_4c - result, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
