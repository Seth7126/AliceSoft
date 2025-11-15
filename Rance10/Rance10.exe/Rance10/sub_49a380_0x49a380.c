// 函数: sub_49a380
// 地址: 0x49a380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730479
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_8_1 = 0
void* i = nullptr
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
int32_t var_18_1 = 1
int32_t edx_1 = edx s>> 3
void* i_1 = nullptr

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edx_3
    
    do
        int32_t* ecx_4 = *(*(arg1 + 4) + i * 0x30)
        
        if (ecx_4 != 0 && (*(*ecx_4 + 0xc))(eax_2) != 0)
            sub_404370(arg2, &i_1)
            i = i_1
        
        i += 1
        int32_t eax_11
        int32_t edx_2
        edx_2:eax_11 = muls.dp.d(0x2aaaaaab, *(arg1 + 8) - *(arg1 + 4))
        i_1 = i
        edx_3 = edx_2 s>> 3
    while (i s< (edx_3 u>> 0x1f) + edx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
