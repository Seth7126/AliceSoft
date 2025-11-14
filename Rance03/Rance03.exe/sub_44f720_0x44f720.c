// 函数: sub_44f720
// 地址: 0x44f720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = data_75d4d0

if (ecx != 0)
    (**ecx)(1)
    data_75d4d0 = 0

struct win32only::CClipboard::VTable** result = sub_69adc6(8)

if (result == 0)
    data_75d4d0 = 0
    result.b = 1
    return result

*result = &win32only::CClipboard::`vftable'
result[1].b = 0
data_75d4d0 = result
result.b = 1
return result
