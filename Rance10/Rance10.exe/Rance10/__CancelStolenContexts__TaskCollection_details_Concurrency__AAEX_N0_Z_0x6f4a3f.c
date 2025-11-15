// 函数: ?_CancelStolenContexts@_TaskCollection@details@Concurrency@@AAEX_N0@Z
// 地址: 0x6f4a3f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74ab51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_1 = &data_6f4a4b
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1 + 0x1c
int32_t result = Concurrency::details::_ReaderWriterLock::_AcquireRead(arg1 + 0x20)
int32_t var_8 = 0
void* const edi_1

if (arg2 != 0)
    result = Concurrency::details::ContextBase::CancelStealers(*(arg1 + 0xc), arg1)
else if (*(arg1 + 0x30) s> 0)
    edi_1 = *(arg1 + 0x1c)
    
    if (edi_1 != 0)
        goto label_6f4aa8
    
    result = Concurrency::details::ContextBase::CancelStealers(*(arg1 + 0xc), arg1)

edi_1 = *(arg1 + 0x1c)
bool cond:0_1 = edi_1 == 0

while (true)
    if (cond:0_1)
        edi_1 = nullptr
    else
    label_6f4aa8:
        edi_1 = *(edi_1 + 4)
    
    if (edi_1 == 0)
        break
    
    *(edi_1 + 0x18) = 1
    Concurrency::details::ContextBase::CancelCollection(edi_1 - 0x5c, 0xfffffc19)
    result = Concurrency::details::ContextBase::CancelStealers(edi_1 - 0x5c, 0)
    cond:0_1 = edi_1 == *(arg1 + 0x1c)

int32_t var_8_1 = 1
sub_6eabb2(arg1 + 0x20)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f4ac7
return result
