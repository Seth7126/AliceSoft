// 函数: ?_CountUp@_StructuredTaskCollection@details@Concurrency@@AAEXXZ
// 地址: 0x6f4add
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1

if (*(arg1 + 0x14) s<= 0x80000001)
    sub_6f4c12(arg1)

int32_t eax = *(arg1 + 0x14)
*(arg1 + 0x14) += 1

if (eax != 0xffffffff)
    return eax + 1

return Concurrency::details::StructuredEvent::Set(arg1 + 0x1c)
