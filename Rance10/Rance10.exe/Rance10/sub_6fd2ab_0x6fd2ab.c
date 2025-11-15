// 函数: sub_6fd2ab
// 地址: 0x6fd2ab
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    void var_10
    std::length_error::length_error(&var_10, "pContext")
    sub_70021b(&var_10, &data_7db524)
    noreturn

int32_t esi = *(*arg2 + 8)
j_sub_4033e0()
void* esi_1 = esi()

if (esi_1 == 0)
    int32_t esi_2 = *(**(*(arg1 + 0x10) + 0x1c) + 0x1c)
    j_sub_4033e0()
    esi_1 = esi_2(arg2)

int32_t* ecx_4 = *(arg1 + 0x10)
*(arg1 + 0x10) = 0

if (arg3 == 1)
    *(arg1 + 0x20)
    *(arg1 + 0x20) = 1

Concurrency::details::FreeVirtualProcessorRoot::Affinitize(ecx_4, esi_1)

if (arg3 == 0 || arg3 != 1)
    return Concurrency::details::ThreadProxy::ResumeExecution(esi_1)

Concurrency::details::platform::__SignalObjectAndWait(*(esi_1 + 0xc), *(arg1 + 0xc), 0xffffffff, 1)
void* result = arg1 + 0x20
*result
*result = 0
return result
