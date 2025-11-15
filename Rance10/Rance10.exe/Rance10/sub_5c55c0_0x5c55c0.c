// 函数: sub_5c55c0
// 地址: 0x5c55c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x1f4)

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (**esi)(eax_2)
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 4))()

int32_t var_8_2 = 1
int32_t result = `eh vector vbase constructor iterator'(arg1 + 0x9c, 0x58, 3, sub_4033e0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
