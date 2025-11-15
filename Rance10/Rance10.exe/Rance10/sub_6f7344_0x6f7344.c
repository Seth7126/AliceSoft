// 函数: sub_6f7344
// 地址: 0x6f7344
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMODULE hModule = LoadLibraryExW(u"advapi32.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)

if (hModule != 0)
label_6f739c:
    *arg1 = Concurrency::details::Security::EncodePointer(GetProcAddress(hModule, 
        "RegisterTraceGuidsW"))
    arg1[1] = Concurrency::details::Security::EncodePointer(GetProcAddress(hModule, 
        "UnregisterTraceGuids"))
    arg1[2] = Concurrency::details::Security::EncodePointer(GetProcAddress(hModule, "TraceEvent"))
    arg1[3] = Concurrency::details::Security::EncodePointer(GetProcAddress(hModule, 
        "GetTraceLoggerHandle"))
    arg1[4] = Concurrency::details::Security::EncodePointer(GetProcAddress(hModule, 
        "GetTraceEnableLevel"))
    arg1[5] = Concurrency::details::Security::EncodePointer(GetProcAddress(hModule, 
        "GetTraceEnableFlags"))
else if (GetLastError() == ERROR_INVALID_PARAMETER)
    hModule = LoadLibraryW(u"advapi32.dll")
    
    if (hModule != 0)
        goto label_6f739c

return arg1
