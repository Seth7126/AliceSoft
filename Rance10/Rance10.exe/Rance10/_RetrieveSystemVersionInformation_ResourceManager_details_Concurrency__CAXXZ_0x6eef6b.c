// 函数: ?RetrieveSystemVersionInformation@ResourceManager@details@Concurrency@@CAXXZ
// 地址: 0x6eef6b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
OSVERSIONINFOW versionInformation
versionInformation.dwOSVersionInfoSize = 0x114
struct std::exception::Concurrency::unsupported_os::VTable* var_128
struct std::exception::Concurrency::unsupported_os::VTable** esp_1 = &var_128

if (GetVersionExW(&versionInformation) != 0)
    uint32_t dwMajorVersion = versionInformation.dwMajorVersion
    int32_t __saved_esi_3
    int32_t __saved_esi_2 = __saved_esi_3
    int32_t var_130_1 = 6
    struct std::exception::Concurrency::unsupported_os::VTable* __saved_esi
    esp_1 = &__saved_esi
    int32_t eax_5
    
    if (dwMajorVersion != 5)
        if (dwMajorVersion != 6)
        label_6eefb1:
            data_7fc2d8 = 6
        label_6ef023:
            eax_5 = Concurrency::details::platform::InitializeSystemFunctionPointers()
            
            if (data_7fc2d8 s>= 6)
                eax_5 = Concurrency::details::WinRT::Initialize()
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_5
        
        uint32_t dwMinorVersion = versionInformation.dwMinorVersion
        
        if (dwMinorVersion == 0)
            data_7fc2d8 = 3
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return dwMinorVersion
        
        if (dwMinorVersion != 1)
            goto label_6eefb1
        
        data_7fc2d8 = 4
        goto label_6ef023
    
    uint32_t dwMinorVersion_1 = versionInformation.dwMinorVersion
    
    if (dwMinorVersion_1 != 0)
        if (dwMinorVersion_1 == 1)
            eax_5 = 1
            data_7fc2d8 = 1
        else
            if (dwMinorVersion_1 == 2)
                data_7fc2d8 = 2
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return dwMinorVersion_1 - 2
            
            eax_5 = data_7fc2d8
        
        if (eax_5 s>= 4)
            goto label_6ef023
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_5
    
    data_7fc2d8 = 0

Concurrency::improper_scheduler_reference::improper_scheduler_reference(&var_128)
*(esp_1 - 4) = 0x7dd35c
*(esp_1 - 8) = &var_128
sub_70021b()
noreturn
