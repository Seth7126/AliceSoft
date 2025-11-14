// 函数: sub_41a020
// 地址: 0x41a020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_18 = 0
char var_14 = 0
int32_t var_4 = 0
bool cond:0 = *arg3 != 0
var_34 = arg2
void* eax_6

if (cond:0)
    char* eax_7 = arg3
    
    do
        arg1.b = *eax_7
        eax_7 = &eax_7[1]
    while (arg1.b != 0)
    
    eax_6 = eax_7 - &eax_7[1]
else
    eax_6 = nullptr

sub_402110(&var_30, arg3, eax_6)
char var_14_1 = 1
int32_t var_18_1 = 0
sub_41a320(edi + 0x84, &var_34)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = muls.dp.d(0x38e38e39, *(edi + 0x88) - *(edi + 0x84))
int32_t edx_2 = edx_1 s>> 3

if ((edx_2 u>> 0x1f) + edx_2 == 1)
    sub_41a180(edi, 0)

sub_4199b0(edi)
sub_419bf0(edi)
sub_419f00(edi)
InvalidateRect(*(edi + 0xc), nullptr, 1)
BOOL result = UpdateWindow(*(edi + 0xc))

if (var_1c u>= 0x10)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
