// 函数: sub_5929a0
// 地址: 0x5929a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x294)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 0x294) = 0

int32_t* ecx_1 = *(arg1 + 0x290)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x290) = 0

int32_t eax_6 = (*(**(arg1 + 4) + 0x54))(eax_2)
*(arg1 + 0x290) = eax_6

if (eax_6 == 0)
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

int32_t esi_1 = *(arg1 + 0x298) + 1
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t var_1c = 1
sub_412de0(&var_18, &var_1c)
var_1c = 2
sub_412de0(&var_18, &var_1c)
var_1c = 3
sub_412de0(&var_18, &var_1c)
var_1c = 4
sub_412de0(&var_18, &var_1c)
var_1c = 5
sub_412de0(&var_18, &var_1c)
var_1c = 6
sub_412de0(&var_18, &var_1c)
var_1c = 7
sub_412de0(&var_18, &var_1c)
var_1c = 8
sub_412de0(&var_18, &var_1c)
var_1c = 9
sub_412de0(&var_18, &var_1c)
var_1c = 0xa
sub_412de0(&var_18, &var_1c)
int32_t ebp = var_18
int16_t* eax_11
int32_t ebx

if ((*(**(arg1 + 0x290) + 8))(esi_1, ebp, (var_14 - ebp) s>> 2, 1).b == 0)
    ebx.b = 0
else if (sub_592bc0(arg1).b == 0)
    ebx.b = 0
else
    eax_11 = (*(**(arg1 + 4) + 0x48))()
    *(arg1 + 0x294) = eax_11
    
    if (eax_11 == 0)
        ebx.b = 0
    else if ((*(*eax_11 + 8))(*(arg1 + 0x298) * 3, 0).b == 0)
        ebx.b = 0
    else if (sub_592e10(arg1).b == 0)
        ebx.b = 0
    else
        ebx.b = 1

if (ebp != 0)
    j__free(ebp)

eax_11.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
