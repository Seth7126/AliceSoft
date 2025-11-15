// 函数: ?__scrt_initialize_thread_safe_statics@@YAHXZ
// 地址: 0x6e84c4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_7028c2(&data_7fbf14, 0xfa0, 0)
HMODULE hModule = GetModuleHandleW(u"kernel32.dll")

if (hModule != 0)
    int32_t eax = GetProcAddress(hModule, "InitializeConditionVariable")
    int32_t eax_1 = GetProcAddress(hModule, "SleepConditionVariableCS")
    int32_t eax_2 = GetProcAddress(hModule, "WakeAllConditionVariable")
    
    if (eax != 0 && eax_1 != 0 && eax_2 != 0)
        data_7fbf30 = 0
        j_sub_4033e0()
        eax(0x7fbf2c)
        data_7fbf34 = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_1)
        data_7fbf38 = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_2)
        _atexit(__scrt_uninitialize_thread_safe_statics)
        return 0
    
    HANDLE eax_5 = CreateEventW(nullptr, 1, 0, nullptr)
    data_7fbf30 = eax_5
    
    if (eax_5 != 0)
        _atexit(__scrt_uninitialize_thread_safe_statics)
        return 0

sub_6e911b(7)
breakpoint
