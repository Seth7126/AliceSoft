// 函数: ?DeleteThis@FreeVirtualProcessorRoot@details@Concurrency@@UAEXXZ
// 地址: 0x6fcfd5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2 = Concurrency::details::platform::__TlsGetValue(*(*(arg1[7] + 0xc) + 0x70))
void* eax_3

if (eax_2 != 0 && (eax_2.b & 3) == 1)
    eax_3 = eax_2 & 0xfffffffe

if (eax_2 == 0 || (eax_2.b & 3) != 1 || eax_3 == 0 || eax_3 != arg1[0x14])
    Concurrency::details::FreeVirtualProcessorRoot::SpinUntilIdle(arg1)
else
    *(eax_3 + 0x10) = 0

int32_t esi = *(*arg1 + 0x20)
j_sub_4033e0()
return esi(1)
