// 函数: sub_58a880
// 地址: 0x58a880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t var_1c = 0xf
void* var_20 = nullptr
char var_30 = 0
sub_403490(&var_30, "LITP", 4)
int32_t var_8_1 = 0
char* edi = &var_30
char* edx = &var_30

if (var_1c u>= 0x10)
    edi = var_30.d

if (var_1c u>= 0x10)
    edx = var_30.d

int32_t var_4c = 0.d
sub_6ca200(arg2 + 4, *(arg2 + 8), edx, var_20 + edi)
int32_t var_8_2 = 0xffffffff

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
sub_6ca100(arg2, 0)
void* result = esi + 0xa4
int32_t edi_1 = 0
int32_t ebx_3 = (sbb.d(arg2, arg2, result u< esi) & 0xffffffd7) + 0x29

if (esi u<= result)
    do
        char var_34
        var_34.d = *esi
        result = sub_6ca100(arg2, 0)
        edi_1 += 1
        esi += 4
    while (edi_1 != ebx_3)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
