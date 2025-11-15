// 函数: sub_698540
// 地址: 0x698540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7481e2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (arg3 != 0)
    arg3[2] += 1

int32_t var_1c = arg2
var_8_1.b = 2
struct Concurrency::details::_RefCounter::VTable** eax_4 = sub_6e810c(0x74)
struct Concurrency::details::_RefCounter::VTable** var_14 = eax_4
struct Concurrency::details::_RefCounter::VTable** eax_5 = sub_69a680(eax_4, &var_1c)
void* ecx_2 = *(arg1 + 0x48)
*(arg1 + 0x4c) = eax_5
int32_t result = sub_6974a0(ecx_2, eax_5)
var_8_1.b = 3

if (arg3 != 0)
    bool cond:0_1 = arg3[2] != 1
    result = arg3[2]
    arg3[2] -= 1
    
    if (not(cond:0_1))
        result = (*(*arg3 + 4))(eax_2)

int32_t var_8_2 = 4

if (arg3 != 0)
    int32_t esi_1 = arg3[2]
    arg3[2] -= 1
    
    if (esi_1 == 1)
        result = (*(*arg3 + 4))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
