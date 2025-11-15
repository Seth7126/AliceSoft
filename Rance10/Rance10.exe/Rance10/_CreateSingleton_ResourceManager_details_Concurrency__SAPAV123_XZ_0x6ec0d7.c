// 函数: ?CreateSingleton@ResourceManager@details@Concurrency@@SAPAV123@XZ
// 地址: 0x6ec0d7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74a698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_2 = &data_6ec0e3
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &data_7fc31c
Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc31c)
int32_t eax = data_7fc2b4
int32_t var_8 = 0
struct Concurrency::IResourceManager::Concurrency::details::ResourceManager::VTable** result
struct Concurrency::IResourceManager::Concurrency::details::ResourceManager::VTable** eax_1

if (eax != 0)
    result = Concurrency::details::Security::EncodePointer(eax)
    
    if (Concurrency::details::ResourceManager::SafeReference(result) == 0)
        eax_1 = sub_6e810c(0x90)
        struct Concurrency::IResourceManager::Concurrency::details::ResourceManager::VTable** 
            var_18_2 = eax_1
        var_8.b = 2
        goto label_6ec13a
else
    eax_1 = sub_6e810c(0x90)
    struct Concurrency::IResourceManager::Concurrency::details::ResourceManager::VTable** 
        var_18_1 = eax_1
    var_8.b = 1
label_6ec13a:
    
    if (eax_1 == 0)
        result = nullptr
    else
        result = Concurrency::details::ResourceManager::ResourceManager(eax_1)
    
    var_8.b = 0
    result[1] = &result[1]->_Reference + 1
    data_7fc2b4 = Concurrency::details::Security::EncodePointer(result)
data_7fc31c = 0
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ec169
return result
