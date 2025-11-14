// 函数: sub_5ee9b0
// 地址: 0x5ee9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbbf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct textfile::CTextFileReader::VTable* const var_54 = &textfile::CTextFileReader::`vftable'
struct filesystem::CFile::VTable* const var_50 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_4 = 0
char* edx = (**arg1)(eax_4)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx = ecx_2 - &edx[1]
else
    ecx = nullptr

sub_402110(&var_28, edx, ecx)
int32_t ebx
ebx.b = sub_6049e0(&var_50, &var_28).b == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

HANDLE hObject

if (ebx.b == 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    var_4.b = 1
    
    if (sub_5ee490(&var_54, &var_40).b != 0)
        char* edx_1 = &var_40
        
        if (var_2c_1 u>= 0x10)
            edx_1 = var_40.d
        
        (*(*arg2 + 4))(edx_1)
        hObject = hObject_1
        
        if (hObject == 0xffffffff)
            ebx.b = 1
        else if (CloseHandle(hObject) != 0)
            hObject = 0xffffffff
            ebx.b = 1
        else
            ebx.b = 0
    else
        hObject = hObject_1
        ebx.b = 0
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_2 = 0xf
    int32_t var_30_2 = 0
    var_40 = 0
else
    hObject = hObject_1
    ebx.b = 0

if (hObject != 0xffffffff && CloseHandle(hObject) == 0)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
