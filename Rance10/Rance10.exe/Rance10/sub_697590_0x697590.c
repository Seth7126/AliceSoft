// 函数: sub_697590
// 地址: 0x697590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747f9c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_11 = 0
char var_18 = (arg1 + 0xc).b
int32_t eax_3 = __Mtx_lock(arg1 + 0xc)

if (eax_3 != 0)
    std::_Throw_C_error(eax_3)

int32_t var_8_1 = 0
int32_t* arg_4
int32_t* edi_1 = arg_4

if (*(arg1 + 0x3c) == 0)
    var_11 = 1
else
    sub_697450(arg1 + 0x3c, edi_1)
    edi_1[2] = 2
    int32_t eax_4 = edi_1[1]
    edi_1[1] -= 1
    
    if (eax_4 == 1)
        (*(*edi_1 + 4))(eax_2)

int32_t var_8_2 = 1
int32_t* result = __Mtx_unlock(arg1 + 0xc)
int32_t var_8_3 = 0xffffffff

if (var_11 != 0)
    arg_4 = nullptr
    result = sub_696ff0(&edi_1[2], &arg_4, 1, 5, 5)
    int32_t* esi_1 = arg_4
    
    if (esi_1 u> 3)
        result = GetCurrentThreadId()
        
        if (esi_1 != result)
            result = &edi_1[2]
            int32_t temp0_2 = *result
            *result = 2
            
            if (temp0_2 != 3)
                void* var_1c
                sub_69a900(&var_1c, &edi_1[0xd])
                int32_t var_8_4 = 2
                result = sub_69af80(&edi_1[3], &var_1c, edi_1)
                int32_t var_8_5 = 3
                
                if (var_18 != 0)
                    result = __Mtx_unlock(var_1c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
