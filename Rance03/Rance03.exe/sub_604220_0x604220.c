// 函数: sub_604220
// 地址: 0x604220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char pszPath
int32_t eax_1 = __security_cookie ^ &pszPath
pszPath = 0
char var_10f[0x10b]
_memset(&var_10f, 0, 0x104)
HRESULT eax_2 = SHGetFolderPathA(nullptr, 0x8005, nullptr, 0, &pszPath)

if (eax_2 != 0)
    if (arg1 != &data_74f9b0)
        sub_401ff0(arg1 + 4, &data_74f9b4, 0, 0xffffffff)
else if (pszPath != eax_2.b)
    char* ecx_1 = &pszPath
    
    do
        eax_2.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_2.b != 0)
    
    sub_402110(arg1 + 4, &pszPath, ecx_1 - &var_10f)
else
    sub_402110(arg1 + 4, &pszPath, nullptr)

char* result = sub_6047d0(arg1)
sub_69a5bc(eax_1 ^ &pszPath)
return result
