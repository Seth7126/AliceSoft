// 函数: sub_4cfb70
// 地址: 0x4cfb70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
void** eax_3 = sub_417ed0(arg1 + 4, ebx)
char eax_5

if (eax_3 != *(arg1 + 4))
    eax_5 = sub_40c3a0(ebx, &eax_3[4])

if (eax_3 == *(arg1 + 4) || eax_5 != 0)
    arg2 = *(arg1 + 4)
else
    arg2 = eax_3

if (arg2 != *(arg1 + 4) && arg2 != 0xffffffd8)
    void* eax_8
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

void** eax_9 = arg3
int32_t ecx_3 = eax_9[5]
void** edx

if (ecx_3 u< 0x10)
    edx = eax_9
else
    edx = *eax_9

int32_t esi_1 = eax_9[4]

if (ecx_3 u>= 0x10)
    eax_9 = *eax_9

void** var_40 = eax_9
struct fileimage::CFileImageAnalyser::VTable* const var_44 =
    &fileimage::CFileImageAnalyser::`vftable'
void* var_3c = edx + esi_1
int32_t var_4 = 0
void var_38
sub_4c9680(&var_38)
var_4.b = 1

if (sub_4ccab0(&var_38, &var_44, arg4) != 0)
    sub_4cfa10(sub_4d01c0(arg1 + 4, ebx), &var_38)
    ebx.b = 1
else
    ebx.b = 0

sub_4c9780(&var_38)
int32_t eax_13
eax_13.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
