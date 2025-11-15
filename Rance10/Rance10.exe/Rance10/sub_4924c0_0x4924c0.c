// 函数: sub_4924c0
// 地址: 0x4924c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f9de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx
void* var_14 = ecx
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_492610(ecx)
data_7fcb70 = sub_46d290()
struct common::CIDManager::VTable** eax_4 = sub_6e810c(0x28)
struct common::CIDManager::VTable** var_14_1 = eax_4
data_7fcb78 = eax_4
*eax_4 = &common::CIDManager::`vftable'
eax_4[1] = 2
eax_4[2] = 0x80000000
eax_4[3] = 0x7ffffffe
__builtin_memset(&eax_4[4], 0, 0x18)
int32_t* eax_5 = sub_6e810c(8)
int32_t* var_14_2 = eax_5
int32_t var_8_1 = 0
*eax_5 = 0
eax_5[1] = 0
int32_t var_8_2 = 0xffffffff
*eax_5 = sub_42e780()
data_7fcb84 = eax_5
int32_t* eax_7 = sub_6e810c(8)
int32_t* var_14_3 = eax_7
int32_t var_8_3 = 1
*eax_7 = 0
eax_7[1] = 0
int32_t var_8_4 = 0xffffffff
*eax_7 = sub_4321d0()
data_7fcb7c = eax_7
int32_t* eax_9 = sub_6e810c(0xc)
data_7fcb80 = eax_9
*eax_9 = 0
eax_9[1] = 0
eax_9[2] = 0
int32_t* result = sub_6e810c(0xc)
data_7fcb74 = result
*result = 0
result[1] = 0
result[2] = 0
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
