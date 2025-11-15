// 函数: ?ResetOnIdle@FreeVirtualProcessorRoot@details@Concurrency@@QAEXW4SwitchingProxyState@3@@Z
// 地址: 0x6fd0a3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *(arg1 + 0x50)
int32_t eax = *(arg1 + 0x4c)
*(arg1 + 0x4c) -= 1
BOOL result = eax - 1

if (result s> 0)
    int32_t* eax_1 = Concurrency::details::VirtualProcessorRoot::AcquireActivatedContext(arg1)
    int32_t esi_1 = *(*eax_1 + 8)
    j_sub_4033e0()
    result = esi_1()
    
    if (edi != result)
        int32_t esi_2 = *(*edi + 4)
        j_sub_4033e0()
        return esi_2(eax_1, arg2)
else
    if (result == 0)
        result = Concurrency::details::VirtualProcessorRoot::Unsubscribe(arg1)
    
    *(arg1 + 0x50) = 0
    
    if (arg2 == 1)
        return Concurrency::details::ThreadProxy::SuspendExecution(edi)

return result
