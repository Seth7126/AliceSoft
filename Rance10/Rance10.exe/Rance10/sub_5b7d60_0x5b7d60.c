// 函数: sub_5b7d60
// 地址: 0x5b7d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_28 = arg1
void* var_2c = arg1
int32_t ecx_1 = sub_4ac600(*(arg1 + 0xbc), *(arg1 + 0xc0))
*(arg1 + 0xc0) = *(arg1 + 0xbc)
*(arg1 + 0xb4) = *(arg1 + 0xb0)
void* var_28_1 = arg1
*(arg1 + 0xa8) = *(arg1 + 0xa4)
int32_t edx_1 = *(arg1 + 0x58)
int32_t var_2c_1 = ecx_1
void* ecx_2 = *(arg1 + 0x54)
*(arg1 + 0xc8) = 0
*(arg1 + 0xcc) = 0
*(arg1 + 0xd0) = 0
*(arg1 + 0xd4) = 0
sub_5bece0(ecx_2, edx_1)
*(arg1 + 0x58) = *(arg1 + 0x54)
int32_t ecx_4 = sub_5be530(*(arg1 + 0x60), *(arg1 + 0x64))
*(arg1 + 0x64) = *(arg1 + 0x60)
void* var_28_2 = arg1
int32_t var_2c_2 = ecx_4
sub_5bec60(*(arg1 + 0x6c), *(arg1 + 0x70))
*(arg1 + 0x70) = *(arg1 + 0x6c)
*(arg1 + 0x7c) = *(arg1 + 0x78)
int32_t var_8_1 = 0
sub_5be080(*(*(arg1 + 0x48) + 4))
void* eax_11 = *(arg1 + 0x48)
*(eax_11 + 4) = eax_11
int32_t* eax_12 = *(arg1 + 0x48)
*eax_12 = eax_12
void* eax_13 = *(arg1 + 0x48)
*(eax_13 + 8) = eax_13
*(arg1 + 0x4c) = 0
int32_t ebx = *(arg1 + 0x3c)

for (int32_t* i = *(arg1 + 0x38); i != ebx; i = &i[0x10])
    sub_408940(i)

int32_t eax_14 = *(arg1 + 0x38)
*(arg1 + 0x3c) = eax_14
bool cond:0 = *(arg1 + 0x98) u< 0x10
*(arg1 + 0x94) = 0

if (cond:0)
    *(arg1 + 0x84) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

char* eax_15 = *(arg1 + 0x84)
*eax_15 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
