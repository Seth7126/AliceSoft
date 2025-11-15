// 函数: ?ReferenceLoadLibrary@details@Concurrency@@YAXXZ
// 地址: 0x6eb525
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HMODULE result = GetModuleHandleA(nullptr)

if (result != &__dos_header)
    wchar16 var_210[0x104]
    uint32_t eax_2 = GetModuleFileNameW(&__dos_header, &var_210, 0x104)
    
    if (eax_2 == 0 || eax_2 == 0x104)
        enum WIN32_ERROR eax_3 = GetLastError()
        
        if (eax_3 s> NO_ERROR)
            eax_3 = zx.d(eax_3.w) | 0x80070000
        
        void var_220
        Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(
            &var_220, eax_3)
        sub_70021b(&var_220, &data_7dd12c)
        noreturn
    
    result = LoadLibraryExW(&var_210, nullptr, 0)
    data_7fc2ac = result

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
