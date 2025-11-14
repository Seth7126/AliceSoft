// 函数: sub_604b50
// 地址: 0x604b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ccb53
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0

if (sub_6049e0(&var_20, arg1) == 0)
    goto label_604c2d

void** result = sub_69adc6(0x20)
arg1 = result
var_4.b = 1

if (result == 0)
    result = nullptr
else
    *result = &common::CIMemory::`vftable'{for `IMemory'}
    sub_5f4370(&result[1])
    result[5] = 0
    result[6] = 0
    result[7] = 0

var_4.b = 0
HANDLE hObject

if (var_14 == 0)
label_604c55:
    hObject = hObject_1
    
    if (hObject != 0xffffffff)
        if (CloseHandle(hObject) == 0)
            (*(*result + 4))(eax_2)
            goto label_604c31
        
        hObject = 0xffffffff
        goto label_604c33
else
    bool cond:0_1 = (*(*result + 8))(var_14) == 0
    void* eax_8 = *result
    
    if (cond:0_1)
        goto label_604c2a
    
    if (sub_604e90(&var_20, (*(*result + 0x18))((*(eax_8 + 0x14))(eax_2))) != 0)
        goto label_604c55
    
    eax_8 = *result
label_604c2a:
    (*(eax_8 + 4))(eax_2)
label_604c2d:
    hObject = hObject_1
label_604c31:
    result = nullptr
label_604c33:
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
fsbase->NtTib.ExceptionList = ExceptionList
return result
