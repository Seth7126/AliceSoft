// 函数: ?Initialize@GlobalCore@details@Concurrency@@QAEXPAUGlobalNode@23@IE@Z
// 地址: 0x6eda5c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
struct Concurrency::ITopologyExecutionResource::Concurrency::details::GlobalCore::TopologyObject::VTable
    ** eax = sub_6e810c(8)
struct Concurrency::ITopologyExecutionResource::Concurrency::details::GlobalCore::TopologyObject::VTable
    ** var_8_1 = eax

if (eax == 0)
    eax = nullptr
else
    *eax = &Concurrency::details::GlobalCore::TopologyObject::`vftable'{for `Concurrency::ITopologyExecutionResource'}
    eax[1] = arg1

*(arg1 + 0x20) = eax
*(arg1 + 0xc) = arg2
*(arg1 + 4) = arg3
int32_t result
result.b = arg4
*(arg1 + 8) = result.b
return result
