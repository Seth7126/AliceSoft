// 函数: sub_604a80
// 地址: 0x604a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccb18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_2c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_1c = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
BOOL result
int32_t ebx
HANDLE hObject

if (sub_6049e0(&var_1c, arg1).b == 0)
    hObject = hObject_1
    ebx.b = 0
else
    sub_403540(arg2, var_10)
    uint8_t* ecx_2 = *arg2
    result = arg2[1]
    
    if (ecx_2 == result)
    label_604b07:
        hObject = hObject_1
        
        if (hObject == 0xffffffff)
            ebx.b = 1
        else if (CloseHandle(hObject) == 0)
            ebx.b = 0
        else
            hObject = 0xffffffff
            ebx.b = 1
    else
        if (sub_604e90(&var_1c, ecx_2, result - ecx_2).b != 0)
            goto label_604b07
        
        hObject = hObject_1
        ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
