// 函数: ??0ResourceManager@details@Concurrency@@AAE@XZ
// 地址: 0x6eb7b4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t (* var_c)(void* arg1) = sub_74a5b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
void* const var_34_1 = &data_6eb7c0
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::IResourceManager::Concurrency::details::ResourceManager::VTable** var_14 = arg1
*arg1 = &Concurrency::details::ResourceManager::`vftable'{for `Concurrency::IResourceManager'}
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0x10
arg1[4] = 0
arg1[9] = 0
arg1[0xa] = 0
sub_6ea728(&arg1[0xb])
__builtin_memset(&arg1[0x11], 0, 0x24)
int32_t var_8 = 0
Concurrency::details::ThreadProxyFactoryManager::ThreadProxyFactoryManager(&arg1[0x1a])
var_8.b = 1
sub_6edc7a(1)
sub_6ec229(arg1)
int32_t var_34 = 4

if (data_7fc2d8 s< 3)
    char* eax = VirtualAlloc(nullptr, 0x1000, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE)
    arg1[0x23] = eax
    
    if (eax == 0)
        void var_20
        std::bad_alloc::bad_alloc(&var_20)
        sub_70021b(&var_20, &data_7db4ec)
        noreturn
    
    *eax = 1
else
    arg1[0x23] = 0

arg1[0x14] = Concurrency::details::platform::__CreateAutoResetEvent(0)
int32_t eax_2 = arg1[3]
int32_t ecx_4
ecx_4.b = mulu.dp.d(eax_2, 4) u>> 0x20 != 0
int32_t var_38_1 = neg.d(ecx_4) | (eax_2 * 4)
arg1[0x15] = sub_6e8787()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6eb896
return arg1
