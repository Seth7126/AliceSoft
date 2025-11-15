// 函数: sub_4b8900
// 地址: 0x4b8900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7324f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t eax_3 = esi[5]
int32_t* edx

if (eax_3 u< 0x10)
    edx = esi
else
    edx = *esi

if (eax_3 u>= 0x10)
    arg1 = *esi

void* eax_4 = esi[4]
char var_4c = 0
int32_t var_68 = var_4c.d
sub_6ca200(arg2 + 4, *(arg2 + 8), arg1, eax_4 + edx)
char var_45 = 0
sub_4263a0(arg2 + 4, &var_45)
sub_6ca100(arg2, esi[7])
int32_t* esi_1 = esi[6]
void* i = *esi_1
var_4c.d = i

for (; i != esi_1; i = var_4c.d)
    int32_t var_30_1 = 0xf
    void* var_34_1 = nullptr
    char var_44 = 0
    sub_403590(&var_44, i + 0x10, 0, 0xffffffff)
    int32_t var_8_1 = 0
    int32_t var_18_1 = 0xf
    void* const var_1c_1 = nullptr
    char var_2c = 0
    sub_403590(&var_2c, i + 0x28, 0, 0xffffffff)
    int32_t var_8_2 = 1
    char* edi_2 = &var_44
    char* edx_1 = &var_44
    
    if (var_30_1 u>= 0x10)
        edi_2 = var_44.d
    
    if (var_30_1 u>= 0x10)
        edx_1 = var_44.d
    
    int32_t var_68_3 = 0.d
    sub_6ca200(arg2 + 4, *(arg2 + 8), edx_1, var_34_1 + edi_2)
    var_45 = 0
    sub_4263a0(arg2 + 4, &var_45)
    char* edi_3 = &var_2c
    char* edx_2 = &var_2c
    
    if (var_18_1 u>= 0x10)
        edi_3 = var_2c.d
    
    if (var_18_1 u>= 0x10)
        edx_2 = var_2c.d
    
    int32_t var_68_5 = 0.d
    sub_6ca200(arg2 + 4, *(arg2 + 8), edx_2, var_1c_1 + edi_3)
    var_45 = 0
    sub_4263a0(arg2 + 4, &var_45)
    int32_t var_8_3 = 0xffffffff
    sub_408940(&var_44)
    sub_429080(&var_4c)

i.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
