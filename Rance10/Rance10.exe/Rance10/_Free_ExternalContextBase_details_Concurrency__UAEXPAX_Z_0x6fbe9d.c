// 函数: ?Free@ExternalContextBase@details@Concurrency@@UAEXPAX@Z
// 地址: 0x6fbe9d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
int32_t eax = Concurrency::details::ExternalContextBase::GetCurrentSubAllocator(ecx)

if (eax == 0)
    return _free(arg1 - 4)

return Concurrency::details::SubAllocator::Free(eax, arg1) __tailcall
