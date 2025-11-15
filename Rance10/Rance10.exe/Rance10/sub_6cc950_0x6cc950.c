// 函数: sub_6cc950
// 地址: 0x6cc950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** lpLibFileName = arg1 + 4

if (lpLibFileName[5] u>= 0x10)
    lpLibFileName = *lpLibFileName

HMODULE eax = LoadLibraryA(lpLibFileName)

if (eax == 0)
    return eax

int32_t eax_1 = GetProcAddress(eax, "RunPatch")
int32_t edi = 0

if (eax_1 != 0)
    void** ecx = arg6
    
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    edi = eax_1(arg2, arg3, arg4, arg5, ecx)

FreeLibrary(eax)
return edi
