// 函数: sub_478990
// 地址: 0x478990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_24
int32_t eax_1 = __security_cookie ^ &var_24
void** lpFile = arg1
PSTR lpFileName

if (lpFile[5] u< 0x10)
    lpFileName = lpFile
else
    lpFileName = *lpFile

uint32_t eax_2 = GetFileAttributesA(lpFileName)

if (eax_2 != 0xffffffff)
    eax_2.b = (eax_2 u>> 4).b & 1
    
    if (eax_2.b != 0)
        int32_t var_10 = 0xf
        int32_t var_14 = 0
        var_24 = 0
        sub_403490(&var_24, 0x75ce86, nullptr)
        char* lpParameters = &var_24
        
        if (var_10 u>= 0x10)
            lpParameters = var_24.d
        
        if (lpFile[5] u>= 0x10)
            lpFile = *lpFile
        
        ShellExecuteA(nullptr, "open", lpFile, lpParameters, nullptr, SW_SHOWNORMAL)
        
        if (var_10 u>= 0x10)
            sub_403160(var_24.d, var_10 + 1, 1)
        
        int32_t eax_3
        eax_3.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_24)
        return eax_3

eax_2.b = 0
@__security_check_cookie@4(eax_1 ^ &var_24)
return eax_2
