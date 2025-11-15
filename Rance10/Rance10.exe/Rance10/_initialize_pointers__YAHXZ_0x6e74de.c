// 函数: ?initialize_pointers@@YAHXZ
// 地址: 0x6e74de
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
data_7fbe50 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
data_7fbe54 = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
data_7fbe58 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
data_7fbe5c = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
data_7fbe60 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
data_7fbe64 = GetProcAddress(hModule, "InitOnceExecuteOnce") ^ __security_cookie
data_7fbe68 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
data_7fbe6c = GetProcAddress(hModule, "CreateSemaphoreW") ^ __security_cookie
data_7fbe70 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
data_7fbe74 = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
data_7fbe78 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
data_7fbe7c = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
data_7fbe80 = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
data_7fbe84 = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
data_7fbe88 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
data_7fbe8c = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
data_7fbe90 = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
data_7fbe94 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
data_7fbe98 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
data_7fbe9c = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
data_7fbea0 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
data_7fbea4 = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
data_7fbea8 = GetProcAddress(hModule, "GetFileInformationByHandleEx") ^ __security_cookie
data_7fbeac = GetProcAddress(hModule, "SetFileInformationByHandle") ^ __security_cookie
data_7fbeb0 = GetProcAddress(hModule, "GetSystemTimePreciseAsFileTime") ^ __security_cookie
data_7fbeb4 = GetProcAddress(hModule, "InitializeConditionVariable") ^ __security_cookie
data_7fbeb8 = GetProcAddress(hModule, "WakeConditionVariable") ^ __security_cookie
data_7fbebc = GetProcAddress(hModule, "WakeAllConditionVariable") ^ __security_cookie
data_7fbec0 = GetProcAddress(hModule, "SleepConditionVariableCS") ^ __security_cookie
data_7fbec4 = GetProcAddress(hModule, "InitializeSRWLock") ^ __security_cookie
data_7fbec8 = GetProcAddress(hModule, "AcquireSRWLockExclusive") ^ __security_cookie
data_7fbecc = GetProcAddress(hModule, "TryAcquireSRWLockExclusive") ^ __security_cookie
data_7fbed0 = GetProcAddress(hModule, "ReleaseSRWLockExclusive") ^ __security_cookie
data_7fbed4 = GetProcAddress(hModule, "SleepConditionVariableSRW") ^ __security_cookie
data_7fbed8 = GetProcAddress(hModule, "CreateThreadpoolWork") ^ __security_cookie
data_7fbedc = GetProcAddress(hModule, "SubmitThreadpoolWork") ^ __security_cookie
data_7fbee0 = GetProcAddress(hModule, "CloseThreadpoolWork") ^ __security_cookie
data_7fbee4 = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
data_7fbee8 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
data_7fbeec = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
return 0
