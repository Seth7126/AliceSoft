// 函数: sub_603b00
// 地址: 0x603b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_164
int32_t eax_1 = __security_cookie ^ &var_164
char* edx = (**arg1)()
int32_t var_150 = 0xf
int32_t var_154 = 0
var_164 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_3
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_164, edx, ecx)
char* lpFileName = &var_164

if (var_150 u>= 0x10)
    lpFileName = var_164.d

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
uint32_t ebx

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx.b = (findFileData.dwFileAttributes u>> 4).b & 1
else
    ebx.b = 0

if (var_150 u>= 0x10)
    j__free(var_164.d)

hFindFile.b = ebx.b
sub_69a5bc(eax_1 ^ &var_164)
return hFindFile
