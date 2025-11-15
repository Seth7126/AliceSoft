// 函数: ?Release@ResourceManager@details@Concurrency@@UAEIXZ
// 地址: 0x6ee94a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a70b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_2 = &data_6ee956
int32_t var_8_4 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg1[1]
arg1[1] -= 1

if (ebx == 1)
    int32_t* var_14_1 = &data_7fc31c
    Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc31c)
    int32_t var_8 = 0
    void* ecx_1 = arg1 - Concurrency::details::Security::EncodePointer(data_7fc2b4)
    int32_t ecx_2 = neg.d(ecx_1)
    int32_t var_8_1 = 0xffffffff
    data_7fc2b4 &= sbb.d(ecx_2, ecx_2, ecx_1 != 0)
    data_7fc31c = 0
    
    if (arg1[0x13] != 0)
        sub_6eaa5e(&arg1[0xb])
        arg1[0xa] = 2
        int32_t var_8_2 = 1
        sub_6eabaa(&arg1[0xb])
        int32_t var_8_3 = 0xffffffff
        SetEvent(arg1[0x14])
        Concurrency::details::platform::__WaitForThread(arg1[0x13], 0xffffffff)
    
    sub_6eb8db(arg1)
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ee9f4
return ebx - 1
