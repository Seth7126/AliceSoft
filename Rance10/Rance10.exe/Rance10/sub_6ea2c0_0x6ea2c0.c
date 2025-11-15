// 函数: sub_6ea2c0
// 地址: 0x6ea2c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0x30
int32_t (* var_c)(void* arg1) = sub_74a505
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t eax_13 = __security_cookie ^ &var_4
void* const var_54_3 = &data_6ea2cc
int32_t var_8_4 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_14 = arg3
int32_t entry_ebx

if (arg7 == 0)
    int32_t* eax
    eax.b = 0
    return sub_6ea39e(ebp_1, arg5, arg4, entry_ebx) __tailcall

if (arg7 == 0xffffffff)
    Concurrency::details::_Condition_variable::wait(arg3, arg6)
    int32_t* eax_2
    eax_2.b = 1
    return sub_6ea39e(ebp_1, arg5, arg4, entry_ebx) __tailcall

struct Concurrency::details::WaitBlock::VTable** eax_4 = sub_6e810c(0x28)
struct Concurrency::details::WaitBlock::VTable** var_18 = eax_4
struct Concurrency::details::WaitBlock::VTable** edi = nullptr
int32_t var_8 = 0

if (eax_4 != 0)
    edi = Concurrency::details::TimedSingleWaitBlock::TimedSingleWaitBlock(eax_4, 1)

int32_t var_8_1 = 0xffffffff
void var_40
sub_6ea792(&var_40, &var_14[1])
int32_t var_8_2 = 1
edi[3] = Concurrency::details::Sweep(*var_14, 1)
*var_14 = &edi[3]

if (sub_6e9eb0(edi, arg7) == 0)
    void var_24
    std::bad_alloc::bad_alloc(&var_24)
    sub_70021b(&var_24, &data_7db4ec)
    noreturn

Concurrency::critical_section::unlock(arg6)
int32_t var_8_3 = 0xffffffff
Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_40)
sub_6eb772()
uint32_t ebx
ebx.b = edi[9].b == 0
void (* const __purecall)() __noreturn = (*edi)->__purecall
j_sub_4033e0()
__purecall(eax_13, arg5, arg4, entry_ebx)
noreturn
