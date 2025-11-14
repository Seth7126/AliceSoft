// 函数: sub_69f817
// 地址: 0x69f817
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
data_75dec0 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
data_75dec4 = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
data_75dec8 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
data_75decc = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
data_75ded0 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
data_75ded4 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
data_75ded8 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
data_75dedc = GetProcAddress(hModule, "SetThreadStackGuarantee") ^ __security_cookie
data_75dee0 = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
data_75dee4 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
data_75dee8 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
data_75deec = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
data_75def0 = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
data_75def4 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
data_75def8 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
data_75defc = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
data_75df00 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
data_75df04 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
data_75df08 = GetProcAddress(hModule, "GetLogicalProcessorInformation") ^ __security_cookie
data_75df0c = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
data_75df10 = GetProcAddress(hModule, "SetDefaultDllDirectories") ^ __security_cookie
data_75df18 = GetProcAddress(hModule, "EnumSystemLocalesEx") ^ __security_cookie
data_75df14 = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
data_75df1c = GetProcAddress(hModule, "GetDateFormatEx") ^ __security_cookie
data_75df20 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
data_75df24 = GetProcAddress(hModule, "GetTimeFormatEx") ^ __security_cookie
data_75df28 = GetProcAddress(hModule, "GetUserDefaultLocaleName") ^ __security_cookie
data_75df2c = GetProcAddress(hModule, "IsValidLocaleName") ^ __security_cookie
data_75df30 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
data_75df34 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
data_75df38 = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
data_75df3c = GetProcAddress(hModule, "GetFileInformationByHandleExW") ^ __security_cookie
int32_t result = GetProcAddress(hModule, "SetFileInformationByHandleW") ^ __security_cookie
data_75df40 = result
return result
