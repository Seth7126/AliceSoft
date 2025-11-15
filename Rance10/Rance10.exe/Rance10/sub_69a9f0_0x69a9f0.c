// 函数: sub_69a9f0
// 地址: 0x69a9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0xd0) = arg2
int32_t eax_4 = __Mtx_lock(arg1 + 0x14)

if (eax_4 != 0)
    std::_Throw_C_error(eax_4)

int32_t* result

if (*(arg1 + 4) != 4)
    *(arg1 + 4) = 3
    int32_t var_8_2 = 1
    int32_t var_20_4 = __Mtx_unlock(arg1 + 0x14)
    int32_t var_8_3 = 0xffffffff
    sub_6977e0(arg1 + 0x50)
    result = *(arg1 + 0x44)
    *(arg1 + 0x44) = 0
    
    if (result != 0)
        int32_t* i
        
        do
            i = result[1]
            sub_6987a0(arg1, result)
            result = i
        while (i != 0)
else
    int32_t var_8_1 = 0
    result = __Mtx_unlock(arg1 + 0x14)

fsbase->NtTib.ExceptionList = ExceptionList
return result
