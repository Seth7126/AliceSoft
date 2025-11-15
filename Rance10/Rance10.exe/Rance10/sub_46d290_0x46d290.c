// 函数: sub_46d290
// 地址: 0x46d290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d3ef
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IEXReaderList>::exfile::CEXReaderList::VTable** result =
    sub_6e810c(0x14)
struct common::SuicideRefCounter<class IEXReaderList>::exfile::CEXReaderList::VTable** result_1 =
    result
int32_t var_8_1 = 0
result[1] = &common::NotifyRefCounter<class IEXReaderList>::`vftable'{for `IEXTreeReader'}
result[2] = 1
*result = &exfile::CEXReaderList::`vftable'{for `common::SuicideRefCounter<class IEXReaderList>'}
result[1] = &exfile::CEXReaderList::`vftable'{for `IEXTreeReader'}
int32_t* var_18 = &result[3]
result[3] = 0
result[4] = 0
result[3] = sub_406950(nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return result
