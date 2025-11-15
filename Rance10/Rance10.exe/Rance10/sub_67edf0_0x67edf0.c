// 函数: sub_67edf0
// 地址: 0x67edf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
BOOL result
int32_t ebx
HANDLE hObject

if (sub_67ed50(&var_20, arg1).b == 0)
    hObject = hObject_1
    ebx.b = 0
else
    sub_405950(arg2, var_14)
    uint8_t* ecx_2 = *arg2
    result = arg2[1]
    
    if (ecx_2 == result)
    label_67ee6c:
        hObject = hObject_1
        
        if (hObject == 0xffffffff)
            ebx.b = 1
        else if (CloseHandle(hObject) == 0)
            ebx.b = 0
        else
            hObject = 0xffffffff
            ebx.b = 1
    else
        if (sub_67f160(&var_20, ecx_2, result - ecx_2).b != 0)
            goto label_67ee6c
        
        hObject = hObject_1
        ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
