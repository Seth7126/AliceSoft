// 函数: sub_5de8c0
// 地址: 0x5de8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct filesystem::CFile::VTable* const var_10 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0
BOOL result = sub_604970(&var_10, arg2)
int32_t ebx
HANDLE hObject

if (result.b == 0)
    hObject = hObject_1
    ebx.b = 0
else
    uint32_t ecx_1 = *(arg1 + 0x18)
    
    if (ecx_1 s> 0)
        uint8_t* eax
        
        if (*(arg1 + 0x10) != 0)
            eax = *(arg1 + 0xc)
        else
            eax = nullptr
        
        result = sub_604e00(&var_10, eax, ecx_1)
    
    if (ecx_1 s> 0 && result.b == 0)
        hObject = hObject_1
        ebx.b = 0
    else
        hObject = hObject_1
        
        if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
            hObject = 0xffffffff
        
        ebx.b = 1

if (hObject != 0xffffffff)
    CloseHandle(hObject)

result.b = ebx.b
return result
