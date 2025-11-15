// 函数: sub_6f6262
// 地址: 0x6f6262
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x18
int32_t (* var_c)(void* arg1) = sub_74ac4e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
void* const var_3c_2 = &data_6f626e
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
void* ebx = sub_702e26(arg2, 0, &class Concurrency::IExecutionResource `RTTI Type Descriptor', 
    &class Concurrency::details::ExecutionResource `RTTI Type Descriptor', 0)

if (ebx == 0)
    ebx = &arg2[2]
    
    if (*(ebx + 0x14) != arg1)
        void var_28
        std::length_error::length_error(&var_28, "pExecutionResource")
        sub_70021b(&var_28, &data_7db524)
        noreturn

CRITICAL_SECTION* var_1c = &arg1[8]
sub_6eaa5e(&arg1[8])
int32_t ebx_1 = *(ebx + 0x28)
int32_t var_8 = 0
void* ecx_3 = *(ebx + 0x24) * 0x34 + arg1[4]
int32_t edi_1 = *(*arg1 + 0x18)
j_sub_4033e0()
void* result = edi_1(ecx_3, ebx_1)
*(result + 0x45) = 1
Concurrency::details::List<class Concurrency::details::ExecutionResource,class Concurrency::details::CollectionTypes::Count>::AddTail(
    *(ecx_3 + 0x30) + 0xc + ebx_1 * 0x34, result + 8)
int32_t var_8_1 = 1
sub_6eabaa(&arg1[8])
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f6319
return result
