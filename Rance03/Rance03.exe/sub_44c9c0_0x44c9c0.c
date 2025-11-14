// 函数: sub_44c9c0
// 地址: 0x44c9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b70b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CRect::VTable* const var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg2)(__security_cookie ^ &__saved_edi)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_28, edx, ecx_1)
int32_t var_4 = 0
int32_t var_38 = arg4
int32_t var_34 = arg5
int32_t var_30 = arg6
var_3c = &chipmunk::CRect::`vftable'
int32_t var_2c = arg7
var_4.b = 1
int32_t ebx
ebx.b = sub_44d7f0(arg3, &var_28, &var_3c)

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return ebx.b
