// 函数: sub_6cdcb0
// 地址: 0x6cdcb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hObject = arg1[1]
*arg1 = &win32only::CDualBoot::`vftable'

if (hObject != 0)
    hObject = CloseHandle(hObject)
    arg1[1] = 0

return hObject
