// 函数: sub_604d10
// 地址: 0x604d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct filesystem::CFile::VTable* const var_14 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_c = 0
int32_t var_8 = 0
BOOL result
int32_t ebx
HANDLE hObject

if (sub_604970(&var_14, arg1).b == 0)
    hObject = hObject_1
    ebx.b = 0
else
    uint8_t* ecx_1 = *arg2
    result = arg2[1]
    
    if (ecx_1 == result)
    label_604d64:
        hObject = hObject_1
        
        if (hObject == 0xffffffff)
            ebx.b = 1
        else if (CloseHandle(hObject) == 0)
            ebx.b = 0
        else
            hObject = 0xffffffff
            ebx.b = 1
    else
        if (sub_604e00(&var_14, ecx_1, result - ecx_1).b != 0)
            goto label_604d64
        
        hObject = hObject_1
        ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

result.b = ebx.b
return result
