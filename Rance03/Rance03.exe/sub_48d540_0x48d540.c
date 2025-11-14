// 函数: sub_48d540
// 地址: 0x48d540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_168
int32_t eax_1 = __security_cookie ^ &var_168
int32_t var_164
int32_t* lpFileName = sub_410930(eax_1, arg1, &var_164, ".flat")

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

int32_t var_150

if (var_150 u>= 0x10)
    j__free(var_164)

hFindFile.b = ebx.b
sub_69a5bc(eax_1 ^ &var_168)
return hFindFile
