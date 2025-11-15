// 函数: sub_482cd0
// 地址: 0x482cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ea48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x10))(eax_2)
struct filesystem::CFile::VTable* const var_3c = &filesystem::CFile::`vftable'
HANDLE result_1 = 0xffffffff
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
bool cond:0 = *arg2 != 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (cond:0)
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
int32_t ebx
ebx.b = sub_67ed50(&var_3c, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

HANDLE result

if (ebx.b != 0)
    result = result_1
    ebx.b = 0
else
    ebx = arg4
    
    if (ebx == 0xffffffff)
        ebx = var_30
    
    if (ebx == 0)
        result = result_1
        ebx.b = 0
    else
        result = result_1
        
        if (result == 0xffffffff || arg3 u>= var_30)
            ebx.b = 0
        else
            SetFilePointer(result, arg3, nullptr, FILE_BEGIN)
            int32_t var_34_1 = arg3
            sub_405950(&arg1[4], ebx)
            
            if (sub_67f160(&var_3c, arg1[4], arg1[5] - arg1[4]) == 0)
                result = result_1
                ebx.b = 0
            else if (sub_482e90(arg1) == 0)
                result = result_1
                ebx.b = 0
            else
                result = result_1
                ebx.b = 1
                arg1[0x14] = 0
                arg1[0x15] = 0

if (result != 0xffffffff)
    CloseHandle(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
