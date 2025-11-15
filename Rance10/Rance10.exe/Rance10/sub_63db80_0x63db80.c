// 函数: sub_63db80
// 地址: 0x63db80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746020
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct textfile::CTextFileReader::VTable* const var_40 = &textfile::CTextFileReader::`vftable'
struct filesystem::CFile::VTable* const var_3c = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
int32_t ebx
HANDLE hObject

if (sub_67ed50(&var_3c, arg1).b != 0)
    BOOL var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_1.b = 1
    
    if (sub_63d620(&var_40, &var_2c) != 0)
        char* edx = &var_2c
        
        if (var_18_1 u>= 0x10)
            edx = var_2c.d
        
        (*(*arg2 + 4))(edx)
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
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
else
    hObject = hObject_1
    ebx.b = 0

if (hObject != 0xffffffff && CloseHandle(hObject) == 0)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
