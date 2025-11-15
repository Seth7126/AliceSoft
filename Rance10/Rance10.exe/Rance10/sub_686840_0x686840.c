// 函数: sub_686840
// 地址: 0x686840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74707f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::NotifyRefCounter<class IViewport>::graphengined3d11::CViewport::VTable** result_1 =
    arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::NotifyRefCounter<class IViewport>::graphengined3d11::CViewport::VTable** result =
    sub_6e810c(0x10)
result_1 = result
int32_t var_8_1 = 0
result[1] = 1
*result = &graphengined3d11::CViewport::`vftable'{for `common::NotifyRefCounter<class IViewport>'}
result[2] = arg1
struct graphengined3d11::CViewport::CImpl::VTable** result_2 = sub_6e810c(0x3c)
result_1 = result_2
int32_t var_8_2 = 0xffffffff
result_1 = result
*result_2 = &graphengined3d11::CViewport::CImpl::`vftable'
result_2[1] = arg1
result_2[0xe].b = 0
result[3] = result_2
(*result)->vFunc_0(eax_2)
sub_42ccf0(&arg1[0x38], &result_1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
