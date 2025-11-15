// 函数: sub_4060a0
// 地址: 0x4060a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 1, arg1)

if (hProcess == 0)
    hProcess.b = 1
    return hProcess

uint32_t exitCode
BOOL eax = GetExitCodeProcess(hProcess, &exitCode)
bool cond:0 = eax == 1

if (eax == 1)
    while (exitCode == 0x103)
        MSG msg
        
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        
        eax = GetExitCodeProcess(hProcess, &exitCode)
        
        if (eax != 1)
            break
    
    cond:0 = eax == 1

eax.b = cond:0
return eax
