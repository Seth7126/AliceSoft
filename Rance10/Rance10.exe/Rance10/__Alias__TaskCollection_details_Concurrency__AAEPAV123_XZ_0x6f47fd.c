// 函数: ?_Alias@_TaskCollection@details@Concurrency@@AAEPAV123@XZ
// 地址: 0x6f47fd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74ab28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f4809
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax = Concurrency::details::SchedulerBase::CurrentContext()
int32_t* result_1 = nullptr

if (*(eax + 0x20) == 0)
    Concurrency::details::ContextBase::CreateWorkQueue(eax)

int32_t* result

if (eax != arg1[3] || *(*(eax + 0x20) + 0x40) != arg1[0x20])
    result = sub_6f3ba4(eax)
    
    if (result == 0 || result[0x19] != arg1)
        int32_t* var_28 = arg1
        result = Concurrency::details::ContextBase::GetArbitraryAlias(eax)
        
        if (result == 0)
            int32_t* eax_3 = sub_6e810c(0x90)
            int32_t* var_14_1 = eax_3
            int32_t var_8 = 0
            
            if (eax_3 != 0)
                result_1 = Concurrency::details::_TaskCollection::_TaskCollection(eax_3, arg1, 1)
            
            int32_t var_8_1 = 0xffffffff
            int32_t* result_2 = result_1
            int32_t* var_2c_2 = arg1
            Concurrency::details::ContextBase::AddArbitraryAlias(eax)
            result = result_1
else
    result = arg1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f4888
return result
