// 函数: sub_6fcb02
// 地址: 0x6fcb02
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x24
int32_t (* var_c)(void* arg1) = sub_74b138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_44
void* const var_48_5 = &data_6fcb0e
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax = sub_6f09b1()
void* edi

if (eax == 0)
    edi = nullptr
else
    edi = eax - 4

void* var_1c = edi
void* ebx = *(arg1 + 8)
void* var_18 = ebx
void* eax_1 = *(ebx + 0xc)
void* eax_2

if (edi == 0)
    eax_2 = nullptr
else
    eax_2 = edi + 4

sub_6fca51(arg1, eax_2)
void* eax_3 = Concurrency::details::_TaskCollectionBase::_GetTokenState(ebx, nullptr)
struct Concurrency::details::_CancellationTokenRegistration::Concurrency::details::CancellationTokenRegistration_TaskProc::VTable
    ** var_20 = nullptr

if (Concurrency::details::_CancellationTokenState::_IsValid(eax_3) != 0)
    void* eax_5
    
    if (edi == 0)
        eax_5 = nullptr
    else
        eax_5 = edi + 4
    
    var_20 = Concurrency::details::_CancellationTokenState::_RegisterCallback(eax_3, 
        Concurrency::details::_UnrealizedChore::_CancelViaToken, eax_5, 1)

int32_t var_8 = 0

if (*(ebx + 0x18) != 0)
    void var_34
    Concurrency::invalid_scheduler_policy_value::invalid_scheduler_policy_value(&var_34)
    sub_70021b(&var_34, 0x7dd8d8)
    noreturn

int32_t esi_1 = *(arg1 + 4)
j_sub_4033e0()
esi_1(arg1)
int32_t var_8_1 = 0xffffffff
void* eax_7

if (edi == 0)
    eax_7 = nullptr
else
    eax_7 = edi + 4

Concurrency::details::ContextBase::RemoveStealer(eax_1, eax_7)

if (var_20 != 0)
    struct Concurrency::details::_CancellationTokenRegistration::Concurrency::details::CancellationTokenRegistration_TaskProc::VTable
        ** var_48_4 = var_20
    sub_697590(eax_3)
    sub_697230(var_20)

*(edi + 0x6c) = 0xffffffff
*(edi + 0x70) = 0xffffffff
*(edi + 0x74) = 0
*(edi + 0x78) = 0
*(edi + 0x34) = 0
*(edi + 0x38) = 0
*(arg1 + 8) = 0
int32_t* result = Concurrency::details::_StructuredTaskCollection::_CountUp(ebx)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fcc4b
return result
