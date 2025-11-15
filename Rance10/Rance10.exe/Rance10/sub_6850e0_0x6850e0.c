// 函数: sub_6850e0
// 地址: 0x6850e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_2 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 0x1b8))(ecx)

int32_t var_8_1 = 0
int32_t ebx = *(arg1 + 0x44)

for (int32_t* i = *(arg1 + 0x40); i != ebx; i = &i[2])
    (**i)(0)

int32_t var_8_2 = 0xffffffff
*(arg1 + 0x44) = *(arg1 + 0x40)
int32_t* esi = *(arg1 + 0x34)
void* i_1 = *esi
i_2 = i_1

for (; i_1 != esi; i_1 = i_2)
    int32_t* eax_6 = *(i_1 + 0x14)
    (*(*eax_6 + 8))(eax_6)
    sub_429080(&i_2)

int32_t var_8_3 = 1
sub_42e7b0(*(*(arg1 + 0x34) + 4))
void* eax_8 = *(arg1 + 0x34)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg1 + 0x34)
*eax_9 = eax_9
void* result = *(arg1 + 0x34)
int32_t var_8_4 = 0xffffffff
*(result + 8) = result
*(arg1 + 0x38) = 0
int32_t* ecx_5 = *(arg1 + 0x18)
*(arg1 + 0x3c) = 0

if (ecx_5 != 0)
    result = (*(*ecx_5 + 8))(ecx_5)
    *(arg1 + 0x18) = 0

int32_t* ecx_6 = *(arg1 + 0x14)

if (ecx_6 != 0)
    result = (*(*ecx_6 + 8))(ecx_6)
    *(arg1 + 0x14) = 0

int32_t* ecx_7 = *(arg1 + 0x10)

if (ecx_7 != 0)
    result = (*(*ecx_7 + 8))(ecx_7)
    *(arg1 + 0x10) = 0

int32_t* ecx_8 = *(arg1 + 4)

if (ecx_8 != 0)
    result = (*(*ecx_8 + 8))(ecx_8)
    *(arg1 + 4) = 0

int32_t* ecx_9 = *(arg1 + 0xc)

if (ecx_9 != 0)
    result = (*(*ecx_9 + 8))(ecx_9)
    *(arg1 + 0xc) = 0

int32_t* ecx_10 = *(arg1 + 8)

if (ecx_10 != 0)
    result = (*(*ecx_10 + 8))(ecx_10)
    *(arg1 + 8) = 0

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x30) = 0xffffffff
*(arg1 + 0x4c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
