// 函数: sub_617290
// 地址: 0x617290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743ebe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *(arg1 + 0x1d0)
int32_t ebx = *eax_3
*(arg1 + 0x1d0) = &eax_3[1]
void* var_2c
char* eax_5 = sub_609d30(arg1 + 0x44, &var_2c, ebx)
int32_t var_8_1 = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x58) - *(arg1 + 0x54))
int32_t edx_1 = edx s>> 1
int32_t eax_9 = (edx_1 u>> 0x1f) + edx_1
int32_t var_3c
sub_62b2d0(eax_9, ebx, &var_3c, eax_9, eax_5)
var_8_1.b = 1

if (sub_602c60(&var_3c) != 0)
    void* ecx_5 = data_7fcbb4
    int32_t var_34
    
    if (ecx_5 != 0)
        sub_621db0(ecx_5, var_34)

int32_t result_1
int32_t result = result_1
var_3c = 0xffffffff

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
