// 函数: sub_5c0e90
// 地址: 0x5c0e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9a26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* lpFileName_2
int32_t eax_2 = __security_cookie ^ &lpFileName_2
int32_t var_19c = __security_cookie ^ &lpFileName_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
char var_180[0x10]
int32_t var_168
void* ecx
char* eax_6 = sub_4028a0(&var_180, sub_5c0db0(ecx, &var_168))
var_4.b = 1
sub_410a80(eax_6.b, eax_6, &lpFileName_2, "SystemSuspend.asd")
int32_t var_16c

if (var_16c u>= 0x10)
    j__free(var_180[0].d)

int32_t var_16c_1 = 0xf
int32_t var_170 = 0
var_180[0] = 0
int32_t var_154

if (var_154 u>= 0x10)
    j__free(var_168)

int32_t* lpFileName = &lpFileName_2
int32_t var_184

if (var_184 u>= 0x10)
    lpFileName = lpFileName_2

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    hFindFile = FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) == 0)
        int32_t* lpFileName_1 = &lpFileName_2
        
        if (var_184 u>= 0x10)
            lpFileName_1 = lpFileName_2
        
        hFindFile = DeleteFileA(lpFileName_1)

if (var_184 u>= 0x10)
    hFindFile = j__free(lpFileName_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &lpFileName_2)
return hFindFile
