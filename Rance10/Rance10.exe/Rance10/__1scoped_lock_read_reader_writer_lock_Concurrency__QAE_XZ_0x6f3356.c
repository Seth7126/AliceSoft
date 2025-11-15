// 函数: ??1scoped_lock_read@reader_writer_lock@Concurrency@@QAE@XZ
// 地址: 0x6f3356
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = sub_6eb703(*arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
