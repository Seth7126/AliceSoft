// 函数: sub_5f42d0
// 地址: 0x5f42d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 1, arg1)

if (hProcess == 0)
    hProcess.b = 1
    return hProcess

uint32_t exitCode
BOOL ecx = GetExitCodeProcess(hProcess, &exitCode)

if (ecx == 1)
    while (exitCode == 0x103)
        MSG msg
        
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        
        ecx = GetExitCodeProcess(hProcess, &exitCode)
        
        if (ecx != 1)
            break

int32_t eax_3
eax_3.b = ecx == 1
return eax_3
