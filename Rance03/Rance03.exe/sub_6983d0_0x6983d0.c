// 函数: sub_6983d0
// 地址: 0x6983d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = __chkstk(0x400c)
enum WIN32_ERROR arg_4008 = __security_cookie ^ &__return_addr
void** lpValueName = arg1
HKEY hKey = *(ecx + 4)
char data
char arg_9[0x3fff]
enum WIN32_ERROR result

if (hKey != 0)
    __return_addr = REG_SZ
    uint32_t lpcbData = 0x800
    data = 0
    _memset(&arg_9, 0, 0x3fff)
    
    if (lpValueName[5] u>= 0x10)
        lpValueName = *lpValueName
    
    result = RegQueryValueExA(hKey, lpValueName, nullptr, &__return_addr, &data, &lpcbData)

if (hKey == 0 || result != NO_ERROR)
    result.b = 0
else
    void* ecx_1
    
    if (data != result.b)
        char* ecx_2 = &data
        
        do
            result.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (result.b != 0)
        
        ecx_1 = ecx_2 - &arg_9
    else
        ecx_1 = nullptr
    
    sub_402110(arg2, &data, ecx_1)
    result.b = 1

sub_69a5bc(arg_4008 ^ &__return_addr)
return result
