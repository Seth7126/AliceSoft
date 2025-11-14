// 函数: ___crtGetEnvironmentStringsA
// 地址: 0x6a7ec2
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_8 = ecx
PWSTR eax = GetEnvironmentStringsW()

if (eax == 0)
    return nullptr

PWSTR esi_1 = eax

if (*eax != 0)
    while (true)
        esi_1 = &esi_1[1]
        
        if (*esi_1 == 0)
            esi_1 = &esi_1[1]
            
            if (*esi_1 == 0)
                break

int32_t cbMultiByte =
    WideCharToMultiByte(0, 0, eax, ((esi_1 - eax) s>> 1) + 1, nullptr, 0, nullptr, nullptr)

if (cbMultiByte != 0)
    PSTR lpMultiByteStr = sub_69e76b(cbMultiByte)
    
    if (lpMultiByteStr != 0)
        if (WideCharToMultiByte(0, 0, eax, ((esi_1 - eax) s>> 1) + 1, lpMultiByteStr, cbMultiByte, 
                nullptr, nullptr) == 0)
            _free(lpMultiByteStr)
            lpMultiByteStr = nullptr
        
        FreeEnvironmentStringsW(eax)
        return lpMultiByteStr

FreeEnvironmentStringsW(eax)
return nullptr
