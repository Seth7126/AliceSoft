// 函数: sub_590700
// 地址: 0x590700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_164
int32_t eax_1 = __security_cookie ^ &var_164

if (*(arg1 + 4) == 0)
    void** eax_2
    eax_2.b = 0
    sub_69a5bc(eax_1 ^ &var_164)
    return eax_2

int32_t var_160
int32_t* lpFileName = sub_40d1c0(arg2, arg1 + 8, &var_160, arg2)

if (lpFileName[5] u>= 0x10)
    lpFileName = *lpFileName

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
int32_t ebx

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx.b = findFileData.dwFileAttributes.b
    ebx.b u>>= 4
    ebx.b = not.b(ebx.b)
    ebx.b &= 1
else
    ebx.b = 0

int32_t var_14c

if (var_14c u>= 0x10)
    j__free(var_160)

hFindFile.b = ebx.b
sub_69a5bc(eax_1 ^ &var_164)
return hFindFile
