// 函数: ??1?$refcount_ptr@Uerror_info_container@exception_detail@boost@@@exception_detail@boost@@QAE@XZ
// 地址: 0x4adf40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726dc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx
int32_t result = sub_4adfc0(ecx)
fsbase->NtTib.ExceptionList = ExceptionList
return result
