// 函数: sub_590450
// 地址: 0x590450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dd88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_592410(*(*(arg1 + 0x70) + 4))
void* eax_4 = *(arg1 + 0x70)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x70)
*eax_5 = eax_5
void* eax_6 = *(arg1 + 0x70)
*(eax_6 + 8) = eax_6
*(arg1 + 0x74) = 0
int32_t var_8_2 = 1
sub_592410(*(*(arg1 + 0x68) + 4))
void* eax_8 = *(arg1 + 0x68)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg1 + 0x68)
*eax_9 = eax_9
void* eax_10 = *(arg1 + 0x68)
*(eax_10 + 8) = eax_10
*(arg1 + 0x6c) = 0
int32_t var_8_3 = 2
sub_592450(*(*(arg1 + 0x60) + 4))
void* eax_12 = *(arg1 + 0x60)
*(eax_12 + 4) = eax_12
int32_t* eax_13 = *(arg1 + 0x60)
*eax_13 = eax_13
void* eax_14 = *(arg1 + 0x60)
*(eax_14 + 8) = eax_14
*(arg1 + 0x64) = 0
int32_t var_8_4 = 3
sub_592450(*(*(arg1 + 0x58) + 4))
void* eax_16 = *(arg1 + 0x58)
*(eax_16 + 4) = eax_16
int32_t* eax_17 = *(arg1 + 0x58)
*eax_17 = eax_17
void* eax_18 = *(arg1 + 0x58)
*(eax_18 + 8) = eax_18
*(arg1 + 0x5c) = 0
*(arg1 + 0x50) = *(arg1 + 0x4c)
*(arg1 + 0x44) = *(arg1 + 0x40)
*(arg1 + 0x38) = *(arg1 + 0x34)
int32_t edi = *(arg1 + 0x2c)

for (int32_t* i = *(arg1 + 0x28); i != edi; i = &i[0xc])
    sub_5949c0(i)

int32_t result = *(arg1 + 0x28)
*(arg1 + 0x2c) = result
*(arg1 + 0x24) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
