// 函数: sub_47c570
// 地址: 0x47c570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e50b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t hInternet

if (InternetAttemptConnect(0) == 0)
    hInternet = InternetOpenA("Downloader", 0, nullptr, nullptr, 0)
    
    if (hInternet == 0)
        hInternet.b = 0
    else
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c = 0
        int32_t var_8_1 = 0
        uint32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        var_8_1.b = 1
        int32_t var_80 = 0
        sub_47c170(&var_44, &var_5c, arg1 + 0x10, &var_44, &var_80)
        PSTR lpszServerName = &var_5c
        
        if (var_48_1 u>= 0x10)
            lpszServerName = var_5c.d
        
        int32_t eax_4 =
            InternetConnectA(hInternet, lpszServerName, var_80.w, nullptr, nullptr, 3, 0, 0)
        void* ebx
        
        if (eax_4 != 0)
            void* const eax_5 = &data_75fe30
            
            if (*(arg1 + 0x28) != 0)
                eax_5 = "POST"
            
            int32_t* lpszVerb_1
            sub_403360(&lpszVerb_1, eax_5)
            var_8_1.b = 2
            char* lpszReferrer = &var_5c
            char* lpszObjectName = &var_44
            
            if (var_48_1 u>= 0x10)
                lpszReferrer = var_5c.d
            
            int32_t* lpszVerb = &lpszVerb_1
            
            if (var_30_1 u>= 0x10)
                lpszObjectName = var_44.d
            
            int32_t var_60
            
            if (var_60 u>= 0x10)
                lpszVerb = lpszVerb_1
            
            int32_t eax_6 = HttpOpenRequestA(eax_4, lpszVerb, lpszObjectName, nullptr, 
                lpszReferrer, nullptr, 0x80000000, 0)
            
            if (eax_6 != 0)
                uint32_t dwHeadersLength = 0
                int32_t var_18_1 = 0xf
                uint32_t dwHeadersLength_1 = 0
                uint8_t var_2c = 0
                var_8_1.b = 3
                
                if (*(arg1 + 0x28) == 1)
                    sub_403450("Content-Type: application/x-www-form-urlencoded")
                    dwHeadersLength = dwHeadersLength_1
                
                void* lpOptional
                
                if (*(arg1 + 0x3c) != 0)
                    lpOptional = arg1 + 0x2c
                    
                    if (*(arg1 + 0x40) u>= 0x10)
                        lpOptional = *lpOptional
                else
                    lpOptional = nullptr
                
                uint8_t* lpszHeaders
                
                if (dwHeadersLength != 0)
                    lpszHeaders = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        lpszHeaders = var_2c.d
                else
                    lpszHeaders = nullptr
                
                if (HttpSendRequestA(eax_6, lpszHeaders, dwHeadersLength, lpOptional, 
                        *(arg1 + 0x3c)) != 0)
                    char* lpBuffer_1
                    sub_431b80(&lpBuffer_1, 0x1000)
                    var_8_1.b = 4
                    char* lpBuffer = lpBuffer_1
                    *(arg1 + 0x48) = *(arg1 + 0x44)
                    
                    while (true)
                        HANDLE hHandle = *(arg1 + 0xc)
                        
                        if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_OBJECT_0)
                            InternetCloseHandle(eax_6)
                            InternetCloseHandle(eax_4)
                            InternetCloseHandle(hInternet)
                            ebx.b = 0
                            break
                        
                        int32_t var_90
                        uint32_t lpdwNumberOfBytesRead
                        
                        if (InternetReadFile(eax_6, lpBuffer, var_90 - lpBuffer, 
                                &lpdwNumberOfBytesRead) != 0)
                            uint32_t lpdwNumberOfBytesRead_2 = lpdwNumberOfBytesRead
                            
                            if (lpdwNumberOfBytesRead_2 != 0)
                                sub_405950(arg1 + 0x44, 
                                    *(arg1 + 0x48) - *(arg1 + 0x44) + lpdwNumberOfBytesRead_2)
                                uint32_t lpdwNumberOfBytesRead_1 = lpdwNumberOfBytesRead
                                sub_700660(*(arg1 + 0x48) - lpdwNumberOfBytesRead_1, lpBuffer, 
                                    lpdwNumberOfBytesRead_1)
                                continue
                        
                        InternetCloseHandle(eax_6)
                        InternetCloseHandle(eax_4)
                        InternetCloseHandle(hInternet)
                        ebx.b = 1
                        break
                    
                    int32_t var_8c
                    
                    if (lpBuffer != 0)
                        sub_403160(lpBuffer, var_8c - lpBuffer, 1)
                else
                    InternetCloseHandle(eax_6)
                    InternetCloseHandle(eax_4)
                    InternetCloseHandle(hInternet)
                    ebx.b = 0
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
            else
                InternetCloseHandle(eax_4)
                InternetCloseHandle(hInternet)
                ebx.b = 0
            
            if (var_60 u>= 0x10)
                sub_403160(lpszVerb_1, var_60 + 1, 1)
            
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            lpszVerb_1.b = 0
        else
            InternetCloseHandle(hInternet)
            ebx.b = 0
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44.d, var_30_1 + 1, 1)
        
        int32_t var_30_2 = 0xf
        int32_t var_34_2 = 0
        var_44 = 0
        
        if (var_48_1 u>= 0x10)
            sub_403160(var_5c.d, var_48_1 + 1, 1)
        
        hInternet.b = ebx.b
else
    hInternet.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return hInternet
