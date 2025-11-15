// 函数: sub_582000
// 地址: 0x582000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result = *(arg1 + 0x228)

if (result != 0)
    sub_4068c0(*(arg1 + 0x248))
    char result_1 = *(arg1 + 0x228)
    *(arg1 + 0x228) = 0
    result = result_1

int32_t* edi_1 = *(arg1 + 0x224)
*(arg1 + 0x224) = 0
*(arg1 + 0x220) = 0
int32_t var_8_1 = 0

if (edi_1 != 0)
    bool cond:0_1 = edi_1[1] != 1
    result = (edi_1[1]).b
    edi_1[1] -= 1
    
    if (not(cond:0_1))
        result = (**edi_1)(eax_2)
        int32_t ebx_1 = edi_1[2]
        edi_1[2] -= 1
        
        if (ebx_1 == 1)
            result = (*(*edi_1 + 4))()

*(arg1 + 0x22c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
