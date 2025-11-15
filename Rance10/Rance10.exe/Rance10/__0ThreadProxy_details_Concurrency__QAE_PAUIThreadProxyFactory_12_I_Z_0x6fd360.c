// 函数: ??0ThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@I@Z
// 地址: 0x6fd360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = arg2
arg1[5] = arg3
*arg1 = &Concurrency::details::ThreadProxy::`vftable'{for `Concurrency::IThreadProxy'}
int32_t* edi = arg1[1]
arg1[6] = 0
arg1[7].b = 0
arg1[8] = 1
arg1[9] = 0
int32_t esi = *(*edi + 8)
j_sub_4033e0()
esi()
int32_t ebx = data_7e1370
data_7e1370 += 1
arg1[0xa] = ebx + 1
arg1[3] = Concurrency::details::platform::__CreateAutoResetEvent(0)
HANDLE eax_7 = Concurrency::details::LoadLibraryAndCreateThread(nullptr, arg1[5] << 0xa, 
    Concurrency::details::ThreadProxy::ThreadProxyMain, arg1, STACK_SIZE_PARAM_IS_A_RESERVATION, 
    &arg1[0xb])
arg1[2] = eax_7

if (eax_7 != 0)
    return arg1

CloseHandle(arg1[3])
int32_t esi_2 = *(arg1[1]->vFunc_0 + 0xc)
j_sub_4033e0()
esi_2()
enum WIN32_ERROR eax_9 = GetLastError()

if (eax_9 s> NO_ERROR)
    eax_9 = zx.d(eax_9.w) | 0x80070000

void var_18
Concurrency::scheduler_worker_creation_error::scheduler_worker_creation_error(&var_18, eax_9)
sub_70021b(&var_18, 0x7de168)
noreturn
