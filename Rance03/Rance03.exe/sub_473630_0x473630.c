// 函数: sub_473630
// 地址: 0x473630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9b9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_16c
int32_t eax_2 = __security_cookie ^ &var_16c
int32_t __saved_edi
int32_t var_17c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
int32_t* lpFileName_1
sub_473730(&lpFileName_1, arg2)
int32_t var_4 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_154

if (var_154 u>= 0x10)
    lpFileName = lpFileName_1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
int32_t ebx

if (hFindFile == 0xffffffff)
    ebx.b = 1
else
    FindClose(hFindFile)
    
    if ((findFileData.dwFileAttributes.b & 0x10) != 0)
        ebx.b = 1
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        if ((*(*arg1 + 0xc))(5, esi).b != 0)
            ebx.b = 1
        else
            int32_t* lpFileName_2 = &lpFileName_1
            
            if (var_154 u>= 0x10)
                lpFileName_2 = lpFileName_1
            
            int32_t* lpFileName_3 = lpFileName_2
            sub_64b530(0x6dd520)
            ebx.b = 0

if (var_154 u>= 0x10)
    j__free(lpFileName_1)

hFindFile.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_16c)
return hFindFile
