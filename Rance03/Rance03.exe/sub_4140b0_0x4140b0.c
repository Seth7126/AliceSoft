// 函数: sub_4140b0
// 地址: 0x4140b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IMalloc ppMalloc
int32_t eax_1 = __security_cookie ^ &ppMalloc
void** ebx = arg3
int32_t* esi = arg5
void** edi = arg4
HRESULT result

if (SHGetMalloc(&ppMalloc) s< 0)
    result.b = 0
else
    if (edi[5] u>= 0x10)
        edi = *edi
    
    char var_114[0x10c]
    _strcpy_s(&var_114, 0x104, edi)
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    char var_21c[0x108]
    _strcpy_s(&var_21c, 0x104, ebx)
    struct BROWSEINFOA lpbi
    lpbi.hwndOwner = arg2
    lpbi.pszDisplayName = &var_21c
    lpbi.pidlRoot = 0
    lpbi.lpfn = sub_413fb0
    lpbi.ulFlags = 1
    lpbi.lpszTitle = &var_114
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    lpbi.lParam = esi
    lpbi.iImage = 0
    struct ITEMIDLIST* pidl = SHBrowseForFolderA(&lpbi)
    
    if (pidl == 0)
        struct IMalloc ppMalloc_3 = ppMalloc
        (*(*ppMalloc_3 + 8))(ppMalloc_3)
        result.b = 0
    else
        char pszPath
        SHGetPathFromIDListA(pidl, &pszPath)
        void* ecx
        
        if (pszPath != 0)
            char* ecx_1 = &pszPath
            char i
            
            do
                i = *ecx_1
                ecx_1 = &ecx_1[1]
            while (i != 0)
            void var_323
            ecx = ecx_1 - &var_323
        else
            ecx = nullptr
        
        sub_402110(arg1, &pszPath, ecx)
        struct IMalloc ppMalloc_1 = ppMalloc
        (*(*ppMalloc_1 + 0x14))(ppMalloc_1, pidl)
        struct IMalloc ppMalloc_2 = ppMalloc
        (*(*ppMalloc_2 + 8))(ppMalloc_2)
        result.b = 1

sub_69a5bc(eax_1 ^ &ppMalloc)
return result
