// 函数: ?SetAffinity@FreeThreadProxy@details@Concurrency@@QAEXUHardwareAffinity@23@@Z
// 地址: 0x6fd10e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1

if (Concurrency::details::HardwareAffinity::operator==(arg1 + 0x30, &result_1).b == 0)
    Concurrency::details::HardwareAffinity::ApplyTo(&result_1, *(arg1 + 8))

*(arg1 + 0x34) = arg2
int32_t result = result_1
*(arg1 + 0x30) = result
return result
