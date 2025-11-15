// 函数: ?common_end_thread@@YAXI@Z
// 地址: 0x703964
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = ___acrt_getptd_noexit()

if (eax != 0)
    void* esi_1 = *(eax + 0x360)
    
    if (esi_1 != 0)
        if (*(esi_1 + 0x10) != 0)
            ___acrt_RoUninitialize@0()
        
        HANDLE hObject = *(esi_1 + 8)
        
        if (hObject != 0xffffffff && hObject != 0)
            CloseHandle(hObject)
        
        HMODULE hLibModule = *(esi_1 + 0xc)
        
        if (hLibModule != 0xffffffff && hLibModule != 0)
            FreeLibraryAndExitThread(hLibModule, arg1)
            noreturn

ExitThread(arg1)
noreturn
