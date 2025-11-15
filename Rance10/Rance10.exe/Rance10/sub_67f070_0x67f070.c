// 函数: sub_67f070
// 地址: 0x67f070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct filesystem::CFile::VTable* const var_18 = &filesystem::CFile::`vftable'
HANDLE hObject = 0xffffffff
int32_t var_10 = 0
int32_t result = 0

if (sub_67ed50(&var_18, arg1) == 0)
    result = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

return result
