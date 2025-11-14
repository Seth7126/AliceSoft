// 函数: sub_604c80
// 地址: 0x604c80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct filesystem::CFile::VTable* const var_10 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0
int32_t ebx
HANDLE hObject

if (sub_604970(&var_10, arg1).b == 0)
    hObject = hObject_1
    ebx.b = 0
else if (arg3 s<= 0)
label_604cd0:
    hObject = hObject_1
    
    if (hObject == 0xffffffff)
        ebx.b = 1
    else if (CloseHandle(hObject) == 0)
        ebx.b = 0
    else
        hObject = 0xffffffff
        ebx.b = 1
else
    if (sub_604e00(&var_10, arg2, arg3).b != 0)
        goto label_604cd0
    
    hObject = hObject_1
    ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
return result
