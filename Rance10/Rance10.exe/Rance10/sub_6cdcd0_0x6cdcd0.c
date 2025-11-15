// 函数: sub_6cdcd0
// 地址: 0x6cdcd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hObject = *(arg1 + 4)

if (hObject != 0)
    CloseHandle(hObject)
    *(arg1 + 4) = 0

void** lpName = arg2

if (lpName[5] u>= 0x10)
    lpName = *lpName

HANDLE eax = CreateMutexA(nullptr, 0, lpName)
*(arg1 + 4) = eax

if (eax != 0)
    enum WIN32_ERROR eax_1
    eax_1.b = GetLastError() != ERROR_ALREADY_EXISTS
    return eax_1

eax.b = 0
return eax
