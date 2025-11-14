// 函数: sub_10005be2
// 地址: 0x10005be2
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax = data_100221d0
int32_t edi
int32_t var_1c = edi
void* lpMultiByteStr_2 = nullptr
PWSTR edi_1 = nullptr

if (eax != 0)
label_10005c2e:
    
    if (eax != 1)
        if (eax == 2 || eax == 0)
            int128_t* penv_1 = GetEnvironmentStrings()
            int128_t* penv = penv_1
            
            if (penv != 0)
                if (*penv != 0)
                    while (true)
                        penv_1 += 1
                        
                        if (*penv_1 == 0)
                            penv_1 += 1
                            
                            if (*penv_1 == 0)
                                break
                
                void* eax_14 = sub_10004125(penv_1 - penv + 1)
                
                if (eax_14 != 0)
                    sub_10003dc0(eax_14, penv, penv_1 - penv + 1)
                    FreeEnvironmentStringsA(penv)
                    return eax_14
                
                FreeEnvironmentStringsA(penv)
        
        return nullptr
else
    edi_1 = GetEnvironmentStringsW()
    
    if (edi_1 == 0)
        if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
            eax = data_100221d0
        else
            eax = 2
            data_100221d0 = 2
        
        goto label_10005c2e
    
    data_100221d0 = 1

if (edi_1 == 0)
    edi_1 = GetEnvironmentStringsW()
    
    if (edi_1 == 0)
        return nullptr

PWSTR eax_5 = edi_1

if (*edi_1 != 0)
    while (true)
        eax_5 = &eax_5[1]
        
        if (*eax_5 == 0)
            eax_5 = &eax_5[1]
            
            if (*eax_5 == 0)
                break

int32_t cbMultiByte =
    WideCharToMultiByte(0, 0, edi_1, ((eax_5 - edi_1) s>> 1) + 1, nullptr, 0, nullptr, nullptr)

if (cbMultiByte != 0)
    void* lpMultiByteStr = sub_10004125(cbMultiByte)
    void* lpMultiByteStr_1 = lpMultiByteStr
    
    if (lpMultiByteStr != 0)
        if (WideCharToMultiByte(0, 0, edi_1, ((eax_5 - edi_1) s>> 1) + 1, lpMultiByteStr, 
                cbMultiByte, nullptr, nullptr) == 0)
            sub_10003602(lpMultiByteStr_1)
            lpMultiByteStr_1 = nullptr
        
        lpMultiByteStr_2 = lpMultiByteStr_1

FreeEnvironmentStringsW(edi_1)
return lpMultiByteStr_2
