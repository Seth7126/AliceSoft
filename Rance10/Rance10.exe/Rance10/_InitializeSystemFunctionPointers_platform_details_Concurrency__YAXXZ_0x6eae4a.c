// 函数: ?InitializeSystemFunctionPointers@platform@details@Concurrency@@YAXXZ
// 地址: 0x6eae4a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
int32_t eax = GetProcAddress(hModule, "SetThreadGroupAffinity")
int32_t eax_1 = GetProcAddress(hModule, "GetThreadGroupAffinity")
enum WIN32_ERROR eax_6

if (eax == 0 || eax_1 == 0)
    eax_6 = GetLastError()
    
    if (eax_6 s> NO_ERROR)
        eax_6 = zx.d(eax_6.w) | 0x80070000
else
    data_7fc288 = Concurrency::details::Security::EncodePointer(eax)
    data_7fc28c = Concurrency::details::Security::EncodePointer(eax_1)
    int32_t eax_5 = GetProcAddress(GetModuleHandleW(u"kernel32.dll"), "GetCurrentProcessorNumberEx")
    
    if (eax_5 != 0)
        int32_t result = Concurrency::details::Security::EncodePointer(eax_5)
        data_7fc284 = result
        return result
    
    eax_6 = GetLastError()
    
    if (eax_6 s> NO_ERROR)
        eax_6 = zx.d(eax_6.w) | 0x80070000

void var_14
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, 
    eax_6)
sub_70021b(&var_14, &data_7dd12c)
noreturn
