// 函数: ?EstablishControlSetting@HillClimbing@details@Concurrency@@AAEXI@Z
// 地址: 0x6f57b6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 0x814)

if (arg2 == ecx)
    return arg2

*(arg1 + 0x818) = ecx
*(arg1 + 0x814) = arg2
double* eax_1 = Concurrency::details::HillClimbing::GetHistory(arg1, arg2)
long double x87_r7_1 = float.t(0)
*eax_1 = fconvert.d(x87_r7_1)
eax_1[2].d = 0
*(eax_1 + 0x14) = 0
eax_1[3].d = 0
eax_1[1] = fconvert.d(x87_r7_1)
return Concurrency::details::HillClimbing::FlushHistories(arg1)
