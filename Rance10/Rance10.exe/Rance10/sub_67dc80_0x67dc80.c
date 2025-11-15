// 函数: sub_67dc80
// 地址: 0x67dc80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7468ff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcbd0

if (ecx != 0)
    (**ecx)(1)
    data_7fcbd0 = 0

struct crayfish::CCrayfishLogViewer::VTable** eax_4 = sub_6e810c(0x60)
struct crayfish::CCrayfishLogViewer::VTable** var_14_1 = eax_4
int32_t var_8_1 = 0
struct crayfish::CCrayfishLogViewer::VTable** result = sub_67bd40(eax_4)
data_7fcbd0 = result
result[0x17] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
