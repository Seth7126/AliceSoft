// 函数: sub_6eb8db
// 地址: 0x6eb8db
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
*arg1 = &Concurrency::details::ResourceManager::`vftable'{for `Concurrency::IResourceManager'}

if (arg1[6] u> 0)
    int32_t ebx_1 = 0
    
    do
        int32_t* ecx = *(arg1[0x12] + ebx_1 + 0x20)
        
        if (ecx != 0)
            Concurrency::details::GlobalCore::`vector deleting destructor'(ecx, 3)
        
        i += 1
        ebx_1 += 0x28
    while (i u< arg1[6])

int32_t* ecx_1 = arg1[0x12]

if (ecx_1 != 0)
    sub_6eb9f1(ecx_1, 3)

_free(arg1[0x11])
int32_t lpAddress = arg1[0x23]

if (lpAddress != 0)
    VirtualFree(lpAddress, 0, MEM_RELEASE)

CloseHandle(arg1[0x14])
_free(arg1[0x15])

if (arg1[0x13] != 0)
    Concurrency::details::platform::__CloseThreadHandle(arg1[0x13])
    _free(arg1[0x16])
    _free(arg1[0x17])

sub_6f6f08(&arg1[0x1a])
int32_t result = sub_6ea7d7(&arg1[0xb])
fsbase->NtTib.ExceptionList = ExceptionList
return result
