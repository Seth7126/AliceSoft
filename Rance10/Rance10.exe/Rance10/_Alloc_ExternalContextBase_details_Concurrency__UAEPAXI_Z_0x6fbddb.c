// 函数: ?Alloc@ExternalContextBase@details@Concurrency@@UAEPAXI@Z
// 地址: 0x6fbddb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
int32_t eax = Concurrency::details::ExternalContextBase::GetCurrentSubAllocator(ecx)

if (eax == 0)
    return Concurrency::details::SubAllocator::StaticAlloc(arg1)

return Concurrency::details::SubAllocator::Alloc(eax, arg1) __tailcall
