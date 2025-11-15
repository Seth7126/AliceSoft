// 函数: ?GetBucketIndex@SubAllocator@details@Concurrency@@SAHI@Z
// 地址: 0x6f8aa1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_2 = (arg1 + 7) & 0xfffffff8

if (edx_2 u> 0x1000)
    return 0xffffffff

uint32_t edx_3 = edx_2 u>> 3

if (edx_3 s<= 0x20)
    return edx_3 - 1

int32_t ecx = 5

if ((edx_3 & 0xffffffe0) s> 0)
    do
        ecx += 1
    while (edx_3 s>> ecx.b s> 0)

int32_t result = ((ecx - 5) << 4) - 1
    + (((edx_3 + (1 << (ecx - 5).b) - 1) & not.d((1 << (ecx - 5).b) - 1)) s>> (ecx - 5).b)
return result
