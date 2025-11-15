// 函数: ?Free@SubAllocator@details@Concurrency@@QAEXPAX@Z
// 地址: 0x6f8a6a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = Concurrency::details::Security::EncodePointer(*(arg2 - 4))
char result

if (eax != 0xffffffff)
    result = Concurrency::details::AllocatorBucket::Free(arg1 + 4 + (eax << 3), arg2 - 4)

if (eax == 0xffffffff || result == 0)
    result = _free(arg2 - 4)

return result
