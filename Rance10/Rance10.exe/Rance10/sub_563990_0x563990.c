// 函数: sub_563990
// 地址: 0x563990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bbff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcba8

if (ecx != 0)
    (**ecx)(1)
    data_7fcba8 = 0

struct passregister::CManager::VTable** eax_4 = sub_6e810c(0xc)
struct passregister::CManager::VTable** var_14 = eax_4
int32_t var_8_1 = 0
*eax_4 = &passregister::CManager::`vftable'
int32_t* var_18 = &eax_4[1]
eax_4[1] = 0
eax_4[2] = 0
eax_4[1] = sub_42e780()
int32_t* result
result.b = 1
data_7fcba8 = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return result
