// 函数: sub_5ec270
// 地址: 0x5ec270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cba84
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpFile = arg1
int32_t var_74 = 0
int32_t edi = lpFile[4]
int32_t var_4 = 0
int32_t var_74_1 = 1
int32_t var_4_1 = 1
int32_t ebx = 3
int32_t var_74_2 = 3
char var_58
char var_28
char result = sub_40c250(sub_402d30(&var_58, sub_403070(arg1, &var_28, edi - 4, 4)), "html")
char var_75_1
char var_70
char var_40

if (result != 0)
    var_75_1 = 0
else
    int32_t var_4_2 = 2
    int32_t var_74_3 = 7
    int32_t var_4_3 = 3
    ebx = 0xf
    int32_t var_74_4 = 0xf
    result = sub_40c250(sub_402d30(&var_70, sub_403070(lpFile, &var_40, edi - 3, 3)), 0x6eb8c8)
    var_75_1 = 1
    
    if (result != 0)
        var_75_1 = 0

if ((ebx.b & 8) != 0)
    ebx &= 0xfffffff7
    int32_t var_5c
    
    if (var_5c u>= 0x10)
        result = j__free(var_70.d)
    
    int32_t var_5c_1 = 0xf
    int32_t var_60_1 = 0
    var_70 = 0

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        result = j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_44
    
    if (var_44 u>= 0x10)
        result = j__free(var_58.d)
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0

int32_t var_4_4 = 0xffffffff

if ((ebx.b & 1) != 0)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0

if (var_75_1 == 0)
    void* ecx_5 = data_75d510
    
    if (ecx_5 != 0)
        sub_5e5700(ecx_5)
    
    Sleep(0xc8)
    
    if (lpFile[5] u>= 0x10)
        lpFile = *lpFile
    
    result = ShellExecuteA(nullptr, nullptr, lpFile, nullptr, nullptr, SW_SHOWNORMAL)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
