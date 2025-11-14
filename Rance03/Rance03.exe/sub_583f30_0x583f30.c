// 函数: sub_583f30
// 地址: 0x583f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x66666667, *(arg1 + 0x3c) - *(arg1 + 0x38))
int32_t edx_3 = edx_2 s>> 3
int32_t ebx
ebx.b = (edx_3 u>> 0x1f) + edx_3 s> 0xffff
int32_t ecx_1
ecx_1.b = ebx.b != 0
int16_t* var_18
sub_448e90(&var_18, sub_54aa10(arg1 + 0x24) * ((ecx_1 << 1) + 2))
int32_t var_4 = 0
int16_t* edi = var_18

if (ebx.b != 0)
    sub_54a2f0(arg1 + 0x24, edi)
else
    sub_54a2a0(arg1 + 0x24, edi)

int32_t* ecx_5 = *(arg1 + 0xd0)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))(eax_2)
    *(arg1 + 0xd0) = 0

int32_t* result = (*(*arg2 + 0x48))(eax_2)
*(arg1 + 0xd0) = result
int32_t* ebx_1

if (result == 0)
    ebx_1.b = 0
else if ((*(*result + 0xc))(sub_54aa10(arg1 + 0x24), ebx.b.d, edi).b == 0)
    ebx_1.b = 0
else
    ebx_1.b = 1

if (edi != 0)
    j__free(edi)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
