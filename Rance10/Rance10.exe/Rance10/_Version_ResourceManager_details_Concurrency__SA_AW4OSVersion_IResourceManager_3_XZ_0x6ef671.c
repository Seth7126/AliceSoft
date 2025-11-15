// 函数: ?Version@ResourceManager@details@Concurrency@@SA?AW4OSVersion@IResourceManager@3@XZ
// 地址: 0x6ef671
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74aa03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6ef67d
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = data_7fc2d8

if (result == 0)
    int32_t* var_14_1 = &data_7fc31c
    Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc31c)
    int32_t var_8 = 0
    result = data_7fc2d8
    
    if (result == 0)
        Concurrency::details::ResourceManager::RetrieveSystemVersionInformation()
        result = data_7fc2d8
    
    data_7fc31c = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ef6b9
return result
