// 函数: sub_692530
// 地址: 0x692530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7473f2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_2 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x68)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x68) = 0

*(arg1 + 0x70) = *(arg1 + 0x6c)
int32_t* ecx_1 = *(arg1 + 0x54)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0x54) = 0

*(arg1 + 0x5c) = *(arg1 + 0x58)
int32_t* esi = *(arg1 + 0x48)
void* i = *esi
i_2 = i

for (; i != esi; i = i_2)
    (*(**(i + 0x14) + 4))(eax_2)
    sub_429080(&i_2)

int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 0x48) + 4))
void* eax_9 = *(arg1 + 0x48)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x48)
*eax_10 = eax_10
void* eax_11 = *(arg1 + 0x48)
int32_t var_8_2 = 0xffffffff
*(eax_11 + 8) = eax_11
*(arg1 + 0x4c) = 0
void** esi_1 = *(arg1 + 0x40)
void* i_1 = *esi_1
i_2 = i_1

for (; i_1 != esi_1; i_1 = i_2)
    (*(**(i_1 + 0x14) + 4))(eax_2)
    sub_429080(&i_2)

int32_t var_8_3 = 1
sub_42e7b0(*(*(arg1 + 0x40) + 4))
void* eax_14 = *(arg1 + 0x40)
*(eax_14 + 4) = eax_14
int32_t* eax_15 = *(arg1 + 0x40)
*eax_15 = eax_15
void* eax_16 = *(arg1 + 0x40)
*(eax_16 + 8) = eax_16
*(arg1 + 0x44) = 0
*(arg1 + 0x2c) = *(arg1 + 0x28)
void* eax_18 = arg1 + 0x10
bool cond:0 = *(eax_18 + 0x14) u< 0x10
*(eax_18 + 0x10) = 0

if (not(cond:0))
    eax_18 = *eax_18

*eax_18 = 0
int32_t var_8_4 = 2
sub_6826a0(*(*(arg1 + 0x34) + 4))
void* eax_20 = *(arg1 + 0x34)
*(eax_20 + 4) = eax_20
int32_t* eax_21 = *(arg1 + 0x34)
*eax_21 = eax_21
void* result = *(arg1 + 0x34)
int32_t var_8_5 = 0xffffffff
*(result + 8) = result
*(arg1 + 0x38) = 0
int32_t* ecx_9 = *(arg1 + 0x3c)

if (ecx_9 != 0)
    result = (*(*ecx_9 + 4))(eax_2)
    *(arg1 + 0x3c) = 0

*(arg1 + 0xc) = 0
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
