// 函数: sub_5eba20
// 地址: 0x5eba20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_164
int32_t eax_1 = __security_cookie ^ &var_164
int32_t* lpFileName_2
sub_40d1c0(arg1 + 0x24, arg2, &lpFileName_2, arg1 + 0x24)
int32_t* lpFileName = &lpFileName_2
int32_t var_14c

if (var_14c u>= 0x10)
    lpFileName = lpFileName_2

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

int32_t ebx

if (hFindFile == 0xffffffff || (findFileData.dwFileAttributes.b & 0x10) != 0)
    ebx.b = 1
else
    int32_t* lpFileName_1 = &lpFileName_2
    
    if (var_14c u>= 0x10)
        lpFileName_1 = lpFileName_2
    
    ebx.b = DeleteFileA(lpFileName_1) != 0

if (var_14c u>= 0x10)
    j__free(lpFileName_2)

hFindFile.b = ebx.b
sub_69a5bc(eax_1 ^ &var_164)
return hFindFile
