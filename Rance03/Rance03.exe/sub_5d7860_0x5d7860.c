// 函数: sub_5d7860
// 地址: 0x5d7860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct filesystem::CFile::VTable* const var_10 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_8 = 0
int32_t var_4 = 0
BOOL result
int32_t ebx
HANDLE hObject

if (sub_6049e0(&var_10, arg2).b == 0)
    hObject = hObject_1
    ebx.b = 0
else
    result = sub_64aeb0(arg1 + 4, var_4)
    
    if (result.b == 0)
        hObject = hObject_1
        ebx.b = 0
    else
        uint32_t ecx_2 = *(arg1 + 0xc)
        
        if (ecx_2 != 0)
            result = sub_604e90(&var_10, *(arg1 + 8), ecx_2)
        
        if (ecx_2 != 0 && result.b == 0)
            hObject = hObject_1
            ebx.b = 0
        else
            hObject = hObject_1
            
            if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
                hObject = 0xffffffff
            
            *(arg1 + 0x14) = 0
            ebx.b = 1

if (hObject != 0xffffffff)
    CloseHandle(hObject)

result.b = ebx.b
return result
