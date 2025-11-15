// 函数: ?_Move_assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXAAV12@U_Equal_allocators@2@@Z
// 地址: 0x57e360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cf9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void arg_4
int32_t* ecx
void* result = sub_56a250(ecx, &arg_4)
int32_t var_8_2 = 1

if (arg1 != 0)
    bool cond:0_1 = arg1[1] != 1
    result = arg1[1]
    arg1[1] -= 1
    
    if (not(cond:0_1))
        result = (**arg1)(eax_2)
        int32_t edi_1 = arg1[2]
        arg1[2] -= 1
        
        if (edi_1 == 1)
            result = (*(*arg1 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
