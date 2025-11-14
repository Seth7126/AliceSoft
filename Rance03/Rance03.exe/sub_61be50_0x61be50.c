// 函数: sub_61be50
// 地址: 0x61be50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cdff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t hInternet
int32_t eax_2 = __security_cookie ^ &hInternet
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result
uint32_t var_64
int32_t var_50
void** eax_7

if (InternetAttemptConnect(0) == 0)
    int32_t hInternet_1 = InternetOpenA("Downloader", 0, nullptr, nullptr, 0)
    hInternet = hInternet_1
    
    if (hInternet_1 == 0)
        enum WIN32_ERROR var_88_2 = GetLastError()
        eax_7 = sub_4691f0(&var_64, "InternetOpen error %d\n")
        int32_t var_c_2 = 1
        goto label_61bec1
    
    void* lpszReferrer = arg1 + 0x14
    PSTR lpszServerName
    
    if (*(arg1 + 0x28) u< 0x10)
        lpszServerName = lpszReferrer
    else
        lpszServerName = *lpszReferrer
    
    int32_t eax_9 = InternetConnectA(hInternet_1, lpszServerName, 0x50, nullptr, nullptr, 3, 0, 0)
    
    if (eax_9 != 0)
        if (*(lpszReferrer + 0x14) u>= 0x10)
            lpszReferrer = *lpszReferrer
        
        PSTR lpszObjectName = arg1 + 0x2c
        
        if (*(arg1 + 0x40) u>= 0x10)
            lpszObjectName = *lpszObjectName
        
        PSTR lpszVerb
        
        if (*(arg1 + 0x70) u< 0x10)
            lpszVerb = arg1 + 0x5c
        else
            lpszVerb = *(arg1 + 0x5c)
        
        void* eax_12 = HttpOpenRequestA(eax_9, lpszVerb, lpszObjectName, nullptr, lpszReferrer, 
            nullptr, 0x80000000, 0)
        
        if (eax_12 != 0)
            int32_t var_38_1 = 0xf
            uint32_t dwHeadersLength = 0
            uint8_t var_4c = 0
            int32_t var_c_5 = 4
            
            if (sub_40c250(arg1 + 0x5c, "POST") != 0)
                sub_402670(&var_4c, "Content-Type: application/x-www-form-urlencoded")
            
            uint32_t ebx_2 = *(arg1 + 0x54)
            void* lpOptional
            
            if (ebx_2 != 0)
                lpOptional = arg1 + 0x44
                
                if (*(arg1 + 0x58) u>= 0x10)
                    lpOptional = *lpOptional
            else
                lpOptional = nullptr
            
            uint8_t* lpszHeaders
            
            if (dwHeadersLength != 0)
                lpszHeaders = &var_4c
                
                if (var_38_1 u>= 0x10)
                    lpszHeaders = var_4c.d
            else
                lpszHeaders = nullptr
            
            if (HttpSendRequestA(eax_12, lpszHeaders, dwHeadersLength, lpOptional, ebx_2) != 0)
                sub_448e90(&var_64, 0x1000)
                var_c_5.b = 6
                ebx_2 = var_64
                *(arg1 + 0x78) = *(arg1 + 0x74)
                
                while (true)
                    enum WAIT_EVENT hHandle = *(arg1 + 0x10)
                    
                    if (hHandle != WAIT_OBJECT_0)
                        hHandle.b = WaitForSingleObject(hHandle, 0) == WAIT_OBJECT_0
                    else
                        hHandle.b = 0
                    
                    if (hHandle.b != 0)
                        var_c_5.b = 7
                        void var_34
                        sub_403110(arg1 + 0x80, sub_4691f0(&var_34, "EventStop\n"), nullptr, 
                            0xffffffff)
                        sub_401fb0(&var_34)
                        InternetCloseHandle(eax_12)
                        InternetCloseHandle(eax_9)
                        InternetCloseHandle(hInternet)
                        ebx_2.b = 0
                        break
                    
                    uint32_t lpdwNumberOfBytesRead
                    int32_t var_60
                    
                    if (InternetReadFile(eax_12, ebx_2, var_60 - ebx_2, &lpdwNumberOfBytesRead)
                            != 0)
                        uint32_t lpdwNumberOfBytesRead_1 = lpdwNumberOfBytesRead
                        
                        if (lpdwNumberOfBytesRead_1 != 0)
                            sub_403540(arg1 + 0x74, 
                                *(arg1 + 0x78) - *(arg1 + 0x74) + lpdwNumberOfBytesRead_1)
                            void* lpdwNumberOfBytesRead_2 = lpdwNumberOfBytesRead
                            sub_69d850(
                                *(arg1 + 0x78) - *(arg1 + 0x74) - lpdwNumberOfBytesRead_2
                                    + *(arg1 + 0x74), 
                                ebx_2, lpdwNumberOfBytesRead_2, eax_4)
                            continue
                    
                    InternetCloseHandle(eax_12)
                    InternetCloseHandle(eax_9)
                    InternetCloseHandle(hInternet)
                    ebx_2.b = 1
                    break
                
                sub_403510(&var_64)
            else
                enum WIN32_ERROR var_88_10 = GetLastError()
                var_c_5.b = 5
                sub_403110(arg1 + 0x80, sub_4691f0(&var_64, "HttpSendRequest error %d\n"), nullptr, 
                    0xffffffff)
                sub_401fb0(&var_64)
                InternetCloseHandle(eax_12)
                InternetCloseHandle(eax_9)
                InternetCloseHandle(hInternet)
                ebx_2.b = 0
            
            sub_401fb0(&var_4c)
            result.b = ebx_2.b
        else
            enum WIN32_ERROR var_88_6 = GetLastError()
            int32_t var_c_4 = 3
            sub_403110(arg1 + 0x80, sub_4691f0(&var_64, "HttpOpenRequest error %d\n"), eax_12, 
                0xffffffff)
            sub_401fb0(&var_64)
            InternetCloseHandle(eax_9)
            InternetCloseHandle(hInternet)
            result.b = 0
    else
        enum WIN32_ERROR var_88_3 = GetLastError()
        int32_t var_c_3 = 2
        sub_403110(arg1 + 0x80, sub_4691f0(&var_64, "InternetConnect error %d\n"), nullptr, 
            0xffffffff)
        
        if (var_50 u>= 0x10)
            j__free(var_64)
        
        InternetCloseHandle(hInternet_1)
        result.b = 0
else
    uint32_t var_88 = InternetAttemptConnect(0)
    eax_7 = sub_4691f0(&var_64, "InternetAttemptConnect error %d\n")
    int32_t var_c_1 = 0
label_61bec1:
    sub_403110(arg1 + 0x80, eax_7, nullptr, 0xffffffff)
    
    if (var_50 u>= 0x10)
        j__free(var_64)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &hInternet)
return result
