// 函数: sub_5d1070
// 地址: 0x5d1070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_18 = ebx
struct filesystem::CFile::VTable* const var_10 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0
HANDLE hObject

if (sub_6049e0(&var_10, arg2).b == 0)
    hObject = hObject_1
    ebx.b = 0
else
    *(arg1 + 0xc) = 0
    
    if (sub_64aeb0(arg1 + 4, var_4).b == 0)
        hObject = hObject_1
        ebx.b = 0
    else if (var_4 == 0)
    label_5d10e3:
        hObject = hObject_1
        
        if (hObject == 0xffffffff)
            ebx.b = 1
        else if (CloseHandle(hObject) == 0)
            ebx.b = 0
        else
            hObject = 0xffffffff
            ebx.b = 1
    else
        uint8_t* eax
        
        if (*(arg1 + 0xc) != 0)
            eax = *(arg1 + 8)
        else
            eax = nullptr
        
        if (sub_604e90(&var_10, eax, *(arg1 + 0xc)).b != 0)
            goto label_5d10e3
        
        hObject = hObject_1
        ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
return result
