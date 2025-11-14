// 函数: sub_4e61b0
// 地址: 0x4e61b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_164
HANDLE var_4 = __security_cookie ^ &var_164
int32_t* esi = arg2
HANDLE hFindFile

if (*(arg1 + 0x38) == 0)
label_4e625d:
    int32_t* ecx_2 = *(arg1 + 0x34)
    
    if (ecx_2 != 0)
        hFindFile = (*(*ecx_2 + 0x10))(4)
    
    if (ecx_2 == 0 || hFindFile == 0)
        hFindFile.b = 0
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        hFindFile.b = (*(*hFindFile + 0xc))(esi).b != 0
else
    int32_t var_160
    char* lpFileName = sub_4e59c0(arg1, &var_160, esi)
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    WIN32_FIND_DATAA findFileData
    hFindFile = FindFirstFileA(lpFileName, &findFileData)
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
    
    if (ebx.b == 0)
        ebx.b = sub_605500(sub_4e5b60(arg1, &var_160, esi)).b
        
        if (var_14c u>= 0x10)
            j__free(var_160)
        
        if (ebx.b == 0)
            goto label_4e625d
        
        hFindFile.b = 1
    else
        hFindFile.b = 1

sub_69a5bc(var_4 ^ &var_164)
return hFindFile
