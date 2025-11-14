// 函数: sub_5cc840
// 地址: 0x5cc840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9f26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_188
int32_t eax_2 = __security_cookie ^ &var_188
int32_t __saved_edi
int32_t var_194 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1
sub_5c0db0(arg1, &lpFileName_1)
int32_t var_4 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_16c

if (var_16c u>= 0x10)
    lpFileName = lpFileName_1

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)

if (hFindFile == 0xffffffff || ((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
    int32_t* lpFileName_2 = &lpFileName_1
    
    if (var_16c u>= 0x10)
        lpFileName_2 = lpFileName_1
    
    int32_t var_168
    sub_401f60(&var_168, lpFileName_2)
    var_4.b = 1
    sub_607ce0(&var_168)
    var_4.b = 0
    int32_t var_154
    
    if (var_154 u>= 0x10)
        j__free(var_168)

int32_t* result_1
int32_t* eax_7
int32_t* ecx_3
int32_t edx
eax_7, ecx_3, edx = sub_5d62c0(&arg1[0x5b], &lpFileName_1, &result_1)
int32_t* result

if (eax_7.b != 0)
    int32_t ecx_4 = arg1[0x8b]
    int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2
    
    if (edi_3 + 1 u>= ecx_4)
        sub_64ad90(&arg1[0x89], ecx_4 * 2)
        arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)
    
    result = result_1
    *arg1[0x8d] = result
    arg1[0x8d] += 4
else
    result = sub_5c24e0(eax_7, edx, ecx_3, arg1, 0x6e9670)

if (var_16c u>= 0x10)
    result = j__free(lpFileName_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_188)
return result
