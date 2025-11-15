// 函数: sub_6cdc70
// 地址: 0x6cdc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hObject = arg1[1]
*arg1 = &win32only::CDualBoot::`vftable'

if (hObject != 0)
    CloseHandle(hObject)
    arg1[1] = 0

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 8
    operator new(arg1)

return arg1
