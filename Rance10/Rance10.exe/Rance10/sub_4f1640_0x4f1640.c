// 函数: sub_4f1640
// 地址: 0x4f1640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_3 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x1c)
void* i = *esi
i_3 = i

for (; i != esi; i = i_3)
    sub_5268b0(*(i + 0x14))
    sub_429080(&i_3)

int32_t* esi_1 = *(arg1 + 0x1c)
void* i_1 = *esi_1
i_3 = i_1

for (; i_1 != esi_1; i_1 = i_3)
    *(i_1 + 0x14)
    sub_526570()
    sub_429080(&i_3)

void** esi_2 = *(arg1 + 0x1c)
void* i_2 = *esi_2
i_3 = i_2

for (; i_2 != esi_2; i_2 = i_3)
    int32_t* ecx_4 = *(i_2 + 0x14)
    
    if (ecx_4 != 0)
        (**ecx_4)(1)
    
    sub_429080(&i_3)

int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 0x1c) + 4))
void* eax_5 = *(arg1 + 0x1c)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0x1c)
*eax_6 = eax_6
void* result = *(arg1 + 0x1c)
*(result + 8) = result
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
