// 函数: sub_6974a0
// 地址: 0x6974a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747f5e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 8) = 0
*(arg2 + 4) += 1
*(arg2 + 0x68) = arg1
int32_t ebx
ebx.b = 1
int32_t result

if (*(arg1 + 8) == 0)
    int32_t eax_5 = __Mtx_lock(arg1 + 0xc)
    
    if (eax_5 != 0)
        std::_Throw_C_error(eax_5)
    
    int32_t var_8_1 = 0
    
    if (*(arg1 + 8) == 0)
        ebx.b = 0
        void** eax_7 = sub_6e810c(8)
        void** var_14_1 = eax_7
        *eax_7 = arg2
        eax_7[1] = 0
        
        if (*(arg1 + 0x3c) != 0)
            *(*(arg1 + 0x40) + 4) = eax_7
        else
            *(arg1 + 0x3c) = eax_7
        
        *(arg1 + 0x40) = eax_7
    
    int32_t var_8_2 = 1
    result = __Mtx_unlock(arg1 + 0xc)
    int32_t var_8_3 = 0xffffffff

if (*(arg1 + 8) != 0 || ebx.b != 0)
    result = sub_697310(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
