// 函数: ?Initialize@WinRT@details@Concurrency@@SAXXZ
// 地址: 0x6f6d4a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMODULE eax = LoadLibraryExW(u"combase.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)
data_7fc328 = eax
enum WIN32_ERROR eax_1

if (eax != 0)
    int32_t eax_3 = GetProcAddress(GetModuleHandleW(u"combase.dll"), "RoInitialize")
    
    if (eax_3 != 0)
        data_7fc320 = Concurrency::details::Security::EncodePointer(eax_3)
        int32_t eax_6 = GetProcAddress(GetModuleHandleW(u"combase.dll"), "RoUninitialize")
        
        if (eax_6 != 0)
            data_7fc324 = Concurrency::details::Security::EncodePointer(eax_6)
            int32_t result = data_7fc32c
            data_7fc32c = 1
            return result
    
    eax_1 = GetLastError()
    
    if (eax_1 s> NO_ERROR)
        eax_1 = zx.d(eax_1.w) | 0x80070000
else
    eax_1 = GetLastError()
    
    if (eax_1 s> NO_ERROR)
        eax_1 = zx.d(eax_1.w) | 0x80070000

void var_14
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, 
    eax_1)
sub_70021b(&var_14, &data_7dd12c)
noreturn
