// 函数: sub_604da0
// 地址: 0x604da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct filesystem::CFile::VTable* const var_10 = &filesystem::CFile::`vftable'
HANDLE hObject = 0xffffffff
int32_t var_8 = 0
int32_t result = 0

if (sub_6049e0(&var_10, arg1) == 0)
    result = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

return result
