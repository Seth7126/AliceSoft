// 函数: sub_637450
// 地址: 0x637450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ce678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFile::VTable* const var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x10) = *(arg1 + 0xc)
char* ecx = *(arg1 + 0x3c)

if (ecx != 0)
    sub_6487c0(ecx)
    j__free(*(arg1 + 0x3c))
    *(arg1 + 0x3c) = 0

*(arg1 + 0x40) = 0
sub_637bb0(arg1 + 4)
var_44 = &filesystem::CFile::`vftable'
BOOL result_1 = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_c_1 = 0
bool cond:0 = *arg2 != 0
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx_2

if (cond:0)
    int32_t* ecx_3 = arg2
    void* edx_1 = ecx_3 + 1
    char i
    
    do
        i = *ecx_3
        ecx_3 += 1
    while (i != 0)
    ecx_2 = ecx_3 - edx_1
else
    ecx_2 = nullptr

sub_402110(&var_34, arg2, ecx_2)
int32_t ebx
ebx.b = sub_6049e0(&var_44, &var_34) == 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

BOOL result

if (ebx.b != 0)
    result = result_1
    ebx.b = 0
else
    int32_t edi_1 = arg4
    
    if (edi_1 == 0xffffffff)
        edi_1 = var_38
    
    if (edi_1 == 0)
        result = result_1
        ebx.b = 0
    else
        result = result_1
        
        if (result == 0xffffffff || arg3 u>= var_38)
            ebx.b = 0
        else
            SetFilePointer(result, arg3, nullptr, FILE_BEGIN)
            int32_t var_3c_1 = arg3
            sub_403540(arg1 + 0xc, edi_1)
            
            if (sub_604e90(&var_44, *(arg1 + 0xc), *(arg1 + 0x10) - *(arg1 + 0xc)) == 0)
                result = result_1
                ebx.b = 0
            else if (sub_637680(arg1) == 0)
                result = result_1
                ebx.b = 0
            else
                result = result_1
                ebx.b = 1
                *(arg1 + 0x4c) = 0
                *(arg1 + 0x50) = 0

if (result != 0xffffffff)
    CloseHandle(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
