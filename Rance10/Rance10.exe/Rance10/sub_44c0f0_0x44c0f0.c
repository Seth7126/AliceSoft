// 函数: sub_44c0f0
// 地址: 0x44c0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
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

sub_403490(&var_2c, arg2, ecx)
int32_t var_8_1 = 0
int32_t* edx_1 = *(arg1 + 0x44)
int32_t* edi

if (edx_1 != 0)
    char* ecx_3 = &var_2c
    
    if (var_18 u>= 0x10)
        ecx_3 = var_2c.d
    
    if ((*(*edx_1 + 0x10))(ecx_3) != 0)
        char* edx_2 = &var_2c
        
        if (var_18 u>= 0x10)
            edx_2 = var_2c.d
        
        edi = (*(**(arg1 + 0x44) + 0xc))(edx_2)
    else
        edi = nullptr
else
    edi = nullptr

int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t* result

if (edi != 0)
    int32_t* result_1
    
    if (sub_44c230(edi) == 0)
        int32_t esi_2 = **(arg1 + 0x48)
        int32_t eax_13 = (*(*edi + 0x18))((*(*edi + 0x14))(eax_2))
        *(arg1 + 0x48)
        result_1 = (*(esi_2 + 8))(eax_13)
    else
        result_1 = sub_44c280(arg1, edi)
    
    (*(*edi + 4))(eax_2)
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
