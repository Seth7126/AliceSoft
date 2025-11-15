// 函数: ?AddVirtualProcessorRoots@SchedulerProxy@details@Concurrency@@QAEXPAPAUIVirtualProcessorRoot@3@I@Z
// 地址: 0x6f5fd5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74ac25
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_12 = __security_cookie ^ &__saved_ebp
void* const var_30_2 = &data_6f5fe1
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* esi = arg1 + 0x20
sub_6eaa5e(esi)
int32_t eax_1 = 0
int32_t var_18 = 0
int32_t var_8 = 0

if (arg3 u> 0)
    do
        int32_t* ebx_1 = *(arg2 + (eax_1 << 2))
        int32_t edi_1 = **ebx_1
        j_sub_4033e0()
        int32_t edx_1 = edi_1(eax_12) * 0x34
        Concurrency::details::List<class Concurrency::details::ExecutionResource,class Concurrency::details::CollectionTypes::Count>::AddTail(
            ebx_1[0xc] * 0x34 + *(edx_1 + *(arg1 + 0x10) + 0x30) + 0xc, &ebx_1[2])
        eax_1 = var_18 + 1
        var_18 = eax_1
    while (eax_1 u< arg3)

int32_t edi_2 = *(**(arg1 + 8) + 0xc)
j_sub_4033e0()
edi_2(arg2, arg3)
*(arg1 + 0x9c) += arg3
int32_t var_8_1 = 1
int32_t result = sub_6eabaa(esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f607e
return result
