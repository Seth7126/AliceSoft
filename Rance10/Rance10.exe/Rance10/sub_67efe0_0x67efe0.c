// 函数: sub_67efe0
// 地址: 0x67efe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct filesystem::CFile::VTable* const var_18 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_10 = 0
int32_t var_c = 0
int32_t ebx
HANDLE hObject

if (sub_67ece0(&var_18, arg3).b == 0)
    hObject = hObject_1
    ebx.b = 0
else if (arg4 s<= 0)
label_67f031:
    hObject = hObject_1
    
    if (hObject == 0xffffffff)
        ebx.b = 1
    else if (CloseHandle(hObject) == 0)
        ebx.b = 0
    else
        hObject = 0xffffffff
        ebx.b = 1
else
    if (sub_67f0d0(&var_18, arg2, arg4).b != 0)
        goto label_67f031
    
    hObject = hObject_1
    ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
return result
