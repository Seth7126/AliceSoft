// 函数: ?CancelStealers@ContextBase@details@Concurrency@@QAEXPAV_TaskCollectionBase@23@@Z
// 地址: 0x6f371e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74aa6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_1 = &data_6f372a
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1 + 0x50
int32_t result = Concurrency::details::_ReaderWriterLock::_AcquireRead(arg1 + 0x54)
int32_t var_8 = 0
void* const esi = *(arg1 + 0x50)
bool cond:0 = esi == 0

while (true)
    if (cond:0)
        esi = nullptr
    else
        esi = *(esi + 4)
    
    if (esi == 0)
        break
    
    if (*(esi + 0x18) == 0)
        int32_t edx_1 = *(esi - 0x2c)
        result = arg2
        
        if (edx_1 == result)
        label_6f37a5:
            *(esi + 0x18)
            *(esi + 0x18) = 1
            Concurrency::details::ContextBase::CancelCollection(esi - 0x5c, 0xfffffc19)
            result = Concurrency::details::ContextBase::CancelStealers(0)
        else if (result != 0)
            int32_t ecx_3 = *(result + 4) << 4 s>> 4
            
            if (ecx_3 != 0xffffffff)
                result = *(edx_1 + 4) << 4 s>> 4
                
                if (result s> ecx_3)
                    goto label_6f378e
        else
            result = *(edx_1 + 4) << 4 s>> 4
            
            if (result != 0xffffffff)
            label_6f378e:
                
                if (*(arg1 + 0x3c) == 0xffffffff)
                    goto label_6f37a5
                
                result = Concurrency::details::ContextBase::IsCanceledAtDepth(arg1, edx_1, result)
                
                if (result.b != 0)
                    goto label_6f37a5
    
    cond:0 = esi == *(arg1 + 0x50)

int32_t var_8_1 = 1
sub_6eabb2(arg1 + 0x54)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f37e5
return result
