// 函数: sub_6e94ed
// 地址: 0x6e94ed
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74a437
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_3 = &data_6e94f9
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
arg1[5] = 0
*arg1 = 0x30
arg1[1] = 8
void* var_2c = (arg3 << 3) + 0x30
arg1[2] = (arg3 << 3) + 0x30
struct Concurrency::details::MultiWaitBlock::Concurrency::details::WaitAllBlock::VTable** eax_1 =
    sub_6e8787()
arg1[3] = eax_1
arg1[4] = eax_1
struct Concurrency::details::MultiWaitBlock::Concurrency::details::WaitAllBlock::VTable** var_18 =
    eax_1

if (arg2 == 0)
    int32_t var_8_1 = 1
    
    if (eax_1 != 0)
        Concurrency::details::WaitAnyBlock::WaitAnyBlock(eax_1, arg3, arg4, arg5)
else
    int32_t var_8 = 0
    
    if (eax_1 != 0)
        sub_6e94ad(eax_1, arg3, arg4, arg5)
        *eax_1 = &Concurrency::details::WaitAllBlock::`vftable'{for `Concurrency::details::MultiWaitBlock'}
        eax_1[7] = arg3

void* ecx_4 = *arg1 + arg1[3]

if (arg3 != 0)
    int32_t i_1 = arg3
    int32_t i
    
    do
        if (ecx_4 != 0)
            *(ecx_4 + 4) = arg1[4]
        
        ecx_4 += arg1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t eax_3
eax_3.b = arg5 != 0
arg1[6] = eax_3 + 1 + arg3
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6e95a0
return arg1
