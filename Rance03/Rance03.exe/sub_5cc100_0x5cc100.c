// 函数: sub_5cc100
// 地址: 0x5cc100
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
int32_t var_154 = 0xf
int32_t var_158 = 0
char var_168 = 0
int32_t var_4 = 0
int32_t result = sub_5cea10(arg1, &var_168, "system.ExistFile")

if (result.b != 0)
    char* lpFileName = &var_168
    
    if (var_154 u>= 0x10)
        lpFileName = var_168.d
    
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
    
    int32_t ecx = *(arg1 + 0x22c)
    int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_3 + 1 u>= ecx)
        sub_64ad90(arg1 + 0x224, ecx * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
    
    result = *(arg1 + 0x234)
    int32_t ecx_2
    ecx_2.b = ebx.b != 0
    *result = ecx_2
    *(arg1 + 0x234) += 4

if (var_154 u>= 0x10)
    result = j__free(var_168.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_16c)
return result
