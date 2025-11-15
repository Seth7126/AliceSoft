// 函数: ??0SchedulerProxy@details@Concurrency@@QAE@PAUIScheduler@2@PAVResourceManager@12@ABVSchedulerPolicy@2@@Z
// 地址: 0x6f5bb9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74abfc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_46 = __security_cookie ^ &__saved_ebp
void* const var_30_4 = &data_6f5bc5
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::ISchedulerProxy::Concurrency::details::SchedulerProxy::VTable** var_18 = arg1
arg1[1] = 0
*arg1 = &Concurrency::details::SchedulerProxy::`vftable'{for `Concurrency::ISchedulerProxy'}
arg1[3] = arg3
sub_6ea728(&arg1[8])
arg1[0xe] = 0
arg1[0x1e] = 0
arg1[0x27] = 0
arg1[0x28] = 0
__builtin_memset(&arg1[0x2a], 0, 0x14)
arg1[0x31] = 0
arg1[0x32] = 0
int32_t var_8 = 0
arg1[2] = arg2
arg1[0x23] = sub_6f5021(arg4, 1)
arg1[0x22] = sub_6f5021(arg4, 2)
arg1[0x24] = sub_6f5021(arg4, 3)
arg1[0x25] = sub_6f5021(arg4, 5)
arg1[0x26] = sub_6f5021(arg4, 6)
int32_t eax_8 = sub_6f5021(arg4, 8) - 1
char eax_9 = (neg.d(eax_8)).b
arg1[0x33].b = sbb.b(eax_9, eax_9, eax_8 != 0) + 1

if (arg1[0x26] == 0xf000)
    arg1[0x26] = sx.d(Concurrency::details::platform::__GetThreadPriority(GetCurrentThread()))

int32_t esi_1 = *arg1[2]->RequestInitialVirtualProcessors
j_sub_4033e0()
arg1[0x1f] = esi_1(eax_46)
int32_t eax_15 = Concurrency::details::ResourceManager::GetCoreCount()
int32_t ecx_10 = arg1[0x23]
int32_t edi_1 = arg1[0x24]
arg1[0x2f] = eax_15
uint32_t temp0 = divu.dp.d(0:(ecx_10 - 1 + eax_15), eax_15)

if (edi_1 u>= temp0)
    arg1[0x20] = divu.dp.d(0:(edi_1 - 1 + ecx_10), edi_1)
else
    arg1[0x24] = temp0
    arg1[0x20] = eax_15

int32_t esi_3 = arg1[0x20]
int32_t edx_4 = 0
uint32_t temp0_2 = divu.dp.d(edx_4:ecx_10, esi_3)
uint32_t temp1_2 = modu.dp.d(edx_4:ecx_10, esi_3)
uint32_t eax_27

if (temp1_2 != 0)
    uint32_t temp0_4 = divu.dp.d(0:(ecx_10 - 1 + esi_3), esi_3)
    int32_t edx_8 = 0
    int32_t eax_31 = arg1[0x22]
    arg1[0x24] = temp0_4
    int32_t ecx_13 = (1 - temp0_4) * esi_3 + arg1[0x23]
    int32_t esi_4 = esi_3 - ecx_13
    arg1[0x29] = ecx_13
    int32_t ecx_15 = (temp0_4 - 1) * esi_4
    
    if (ecx_15 u< eax_31)
        eax_27 = divu.dp.d(edx_8:(eax_31 - ecx_15 - 1 + temp0_4), temp0_4) + esi_4
    else
        eax_27 = divu.dp.d(edx_8:(eax_31 - 2 + temp0_4), temp0_4 - 1)
else
    int32_t eax_25 = arg1[0x22] - 1
    arg1[0x24] = temp0_2
    arg1[0x29] = esi_3
    eax_27 = divu.dp.d(temp1_2:(eax_25 + temp0_2), temp0_2)

void* ecx_17 = arg1[3]
arg1[0x21] = eax_27
Concurrency::details::_RefCounter::_Reference(ecx_17)

if (arg1[0x33].b != 0)
    void* eax_38 = sub_6e810c(0x838)
    void* var_1c_1 = eax_38
    var_8.b = 1
    void* const eax_39
    
    if (eax_38 == 0)
        eax_39 = nullptr
    else
        eax_39 = Concurrency::details::HillClimbing::HillClimbing(eax_38, arg1[0x1f], eax_15, arg1)
    
    var_8.b = 0
    arg1[0xe] = eax_39

int32_t eax_40 = j_sub_6ed724()
arg1[4] = 0
int32_t var_30_2 = 4
arg1[0x30] = eax_40
int32_t ecx_20
ecx_20.b = mulu.dp.d(eax_40, 4) u>> 0x20 != 0
int32_t var_30_3 = neg.d(ecx_20) | (eax_40 * 4)
int32_t i = 0
arg1[5] = sub_6e8787()

if (arg1[0x30] u> 0)
    do
        *(arg1[5] + (i << 2)) = i
        i += 1
    while (i u< arg1[0x30])

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f5e10
return arg1
