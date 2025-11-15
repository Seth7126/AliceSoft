// 函数: sub_49bbe0
// 地址: 0x49bbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730890
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = arg1
struct fileimage::CFileImageMaker::VTable* const var_5c = &fileimage::CFileImageMaker::`vftable'
void* result_1 = nullptr
char* var_54 = nullptr
int32_t var_50 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "SDP", 3)
var_8_1.b = 1
char* esi = &var_2c
char* edx = &var_2c

if (var_18 u>= 0x10)
    esi = var_2c.d

if (var_18 u>= 0x10)
    edx = var_2c.d

int32_t var_74 = 0.d
sub_6ca200(&result_1, var_54, edx, var_1c + esi)
char var_45 = 0
sub_4263a0(&result_1, &var_45)
var_8_1.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

sub_6ca100(&var_5c, 1)
sub_6ca100(&var_5c, (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
int32_t* esi_1 = *(arg1 + 8)
int32_t eax_10 = *(arg1 + 0xc)
int32_t edi = 0
uint32_t ebx_4 = (eax_10 - esi_1 + 3) u>> 2

if (esi_1 u> eax_10)
    ebx_4 = 0

if (ebx_4 != 0)
    do
        sub_6ca100(&var_5c, *esi_1)
        edi += 1
        esi_1 = &esi_1[1]
    while (edi != ebx_4)

void* esi_2 = var_4c
void* esi_3 = esi_2 + 0x14

if ((*(**(esi_2 + 4) + 8))(esi_3, &result_1) != 0)
    ebx_4.b = 1
else
    if (*(esi_3 + 0x14) u>= 0x10)
        esi_3 = *esi_3
    
    var_4c = esi_3
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x760d68, 0x2b)
    var_8_1.b = 2
    var_8_1.b = 3
    char var_44
    sub_6c52e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    ebx_4.b = 0

void* result = result_1
var_5c = &fileimage::CFileImageMaker::`vftable'

if (result != 0)
    sub_403160(result, var_50 - result, 1)

result.b = ebx_4.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
