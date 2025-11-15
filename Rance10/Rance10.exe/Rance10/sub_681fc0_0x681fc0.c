// 函数: sub_681fc0
// 地址: 0x681fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x24) = *(arg1 + 0x20)
void* eax_4 = arg1 + 8
bool cond:0 = *(eax_4 + 0x14) u< 0x10
*(eax_4 + 0x10) = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = 0
int32_t var_8_1 = 0
sub_6826a0(*(*(arg1 + 0x2c) + 4))
void* eax_6 = *(arg1 + 0x2c)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x2c)
*eax_7 = eax_7
void* result = *(arg1 + 0x2c)
int32_t var_8_2 = 0xffffffff
*(result + 8) = result
*(arg1 + 0x30) = 0
int32_t* ecx_1 = *(arg1 + 0x34)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x34) = 0

*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
