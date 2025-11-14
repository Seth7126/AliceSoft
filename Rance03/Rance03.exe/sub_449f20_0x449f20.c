// 函数: sub_449f20
// 地址: 0x449f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*arg2 != 0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_2c, arg2, ecx)
int32_t var_4 = 0
int32_t* eax_6 = (*(**(arg1 + 0x10) + 0x10))(2)
int32_t* edi

if (eax_6 != 0)
    char* ecx_4 = &var_2c
    
    if (var_18 u>= 0x10)
        ecx_4 = var_2c.d
    
    if ((*(*eax_6 + 0xc))(ecx_4) != 0)
        char* ecx_6 = &var_2c
        
        if (var_18 u>= 0x10)
            ecx_6 = var_2c.d
        
        edi = (*(*eax_6 + 8))(ecx_6)
    else
        edi = nullptr
else
    edi = nullptr

int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t eax_13

if (edi != 0)
    eax_13 = (*(*edi + 0x14))(eax_4)

int32_t* result

if (edi == 0 || eax_13 s< 4)
    result = nullptr
else
    char* eax_15 = (*(*edi + 0x18))()
    int32_t* result_1
    
    if (*eax_15 != 0x64 || eax_15[1] != 0x63 || eax_15[2] != 0x66 || eax_15[3] != 0x20)
        int32_t esi_3 = **(arg1 + 0x14)
        int32_t eax_20 = (*(*edi + 0x18))((*(*edi + 0x14))())
        *(arg1 + 0x14)
        result_1 = (*(esi_3 + 8))(eax_20)
    else
        result_1 = sub_44a0a0(arg1, edi)
    
    (*(*edi + 4))()
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
