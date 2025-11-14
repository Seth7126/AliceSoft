// 函数: sub_607ce0
// 地址: 0x607ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cccfb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_170
int32_t eax_2 = __security_cookie ^ &var_170
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpPathName = arg1
PSTR lpFileName

if (lpPathName[5] u< 0x10)
    lpFileName = lpPathName
else
    lpFileName = *lpPathName

WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(lpFileName, &findFileData)
int32_t* result

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    result.b = (findFileData.dwFileAttributes u>> 4).b & 1

if (hFindFile == 0xffffffff || result.b == 0)
    int32_t var_168
    sub_402810(&var_168)
    int32_t var_4 = 0
    int32_t var_158
    int32_t ebx
    
    if (var_158 == 0)
    label_607d82:
        
        if (lpPathName[4] != 3)
        label_607df1:
            
            if (lpPathName[5] u>= 0x10)
                lpPathName = *lpPathName
            
            if (CreateDirectoryA(lpPathName, nullptr) != 0)
                ebx.b = 1
            else
                ebx.b = 0
        else
            int32_t eax_6 = lpPathName[5]
            char* lpPathName_1
            
            if (eax_6 u< 0x10)
                lpPathName_1 = lpPathName
            else
                lpPathName_1 = *lpPathName
            
            char* lpPathName_2
            
            if (*lpPathName_1 u>= 0x61)
                if (eax_6 u< 0x10)
                    lpPathName_2 = lpPathName
                else
                    lpPathName_2 = *lpPathName
            
            if (*lpPathName_1 u< 0x61 || *lpPathName_2 u> 0x7a)
                char* lpPathName_3
                
                if (eax_6 u< 0x10)
                    lpPathName_3 = lpPathName
                else
                    lpPathName_3 = *lpPathName
                
                if (*lpPathName_3 u< 0x41)
                    goto label_607df1
                
                char* lpPathName_4
                
                if (eax_6 u< 0x10)
                    lpPathName_4 = lpPathName
                else
                    lpPathName_4 = *lpPathName
                
                if (*lpPathName_4 u> 0x5a)
                    goto label_607df1
            
            int32_t* lpPathName_5
            
            if (eax_6 u< 0x10)
                lpPathName_5 = lpPathName
            else
                lpPathName_5 = *lpPathName
            
            if (*(lpPathName_5 + 1) != 0x3a)
                goto label_607df1
            
            if (eax_6 u< 0x10)
                result = lpPathName
            else
                result = *lpPathName
            
            if (*(result + 2) != 0x5c)
                goto label_607df1
            
            ebx.b = 1
    else
        if (sub_607ce0(eax_4).b != 0)
            goto label_607d82
        
        ebx.b = 0
    
    int32_t var_154
    
    if (var_154 u>= 0x10)
        j__free(var_168)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_170)
return result
