// 函数: sub_5ed7c0
// 地址: 0x5ed7c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_16c
int32_t eax_1 = __security_cookie ^ &var_16c
PSTR lpFileName_1
void* ecx
sub_5ed850(ecx, &lpFileName_1)
int32_t var_158
int32_t var_154
char* hFindFile
int32_t ebx

if (var_158 != 0)
    PSTR lpFileName = &lpFileName_1
    
    if (var_154 u>= 0x10)
        lpFileName = lpFileName_1
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        ebx.b = findFileData.dwFileAttributes.b
        ebx.b u>>= 4
        ebx.b = not.b(ebx.b)
        ebx.b &= 1
    else
        ebx.b = 0
else
    ebx.b = 0

if (var_154 u>= 0x10)
    j__free(lpFileName_1)

hFindFile.b = ebx.b
sub_69a5bc(eax_1 ^ &var_16c)
return hFindFile
