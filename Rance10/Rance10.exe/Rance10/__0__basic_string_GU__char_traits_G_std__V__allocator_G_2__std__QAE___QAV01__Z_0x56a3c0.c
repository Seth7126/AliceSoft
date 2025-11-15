// 函数: ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@$$QAV01@@Z
// 地址: 0x56a3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729300
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
void* ebx = arg2[1]
int32_t* edi = *arg2

if (ebx != 0)
    *(ebx + 4) += 1

int32_t* edi_1 = arg1[1]

if (edi_1 != 0)
    bool cond:0_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:0_1))
        (**edi_1)(eax_2)
        bool cond:1_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:1_1))
            (*(*edi_1 + 4))()

*arg1 = edi
arg1[1] = ebx
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
