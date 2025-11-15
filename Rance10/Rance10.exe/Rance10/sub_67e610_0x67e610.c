// 函数: sub_67e610
// 地址: 0x67e610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char pszPath
int32_t eax_1 = __security_cookie ^ &pszPath
_memset(&pszPath, 0, 0x105)
HRESULT eax_2 = SHGetFolderPathA(nullptr, 0x8005, nullptr, 0, &pszPath)

if (eax_2 != 0)
    if (arg1 != &data_7fd48c)
        sub_403590(arg1 + 4, &data_7fd490, 0, 0xffffffff)
else if (pszPath != eax_2.b)
    char* ecx_1 = &pszPath
    
    do
        eax_2.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_2.b != 0)
    
    void var_10f
    sub_403490(arg1 + 4, &pszPath, ecx_1 - &var_10f)
else
    sub_403490(arg1 + 4, &pszPath, nullptr)

void* result = sub_67eb70(arg1)
@__security_check_cookie@4(eax_1 ^ &pszPath)
return result
