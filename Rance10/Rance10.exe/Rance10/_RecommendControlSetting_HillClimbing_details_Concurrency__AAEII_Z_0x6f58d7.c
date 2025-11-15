// 函数: ?RecommendControlSetting@HillClimbing@details@Concurrency@@AAEII@Z
// 地址: 0x6f58d7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* esi = *(arg1 + 0x800)
int32_t result_4 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(esi) + *(esi + 0xb8)
int32_t result_1 = Concurrency::details::SchedulerProxy::DesiredHWThreads(esi)
int32_t edi_1 = *(arg1 + 0x814)
int32_t result = arg2
int32_t ecx_3 = *(arg1 + 0x810)
int32_t result_2 = ecx_3 + edi_1

if (result_2 u< result)
    result = result_2

if (edi_1 u> ecx_3)
    int32_t result_3 = edi_1 - ecx_3
    
    if (result_3 u> result)
        result = result_3

if (result == edi_1)
    if (result u<= result_4)
        result += 1
    else
        result -= 1

if (result_4 u> result)
    result = result_4

if (result_1 u< result)
    result = result_1

if (result != edi_1 && Concurrency::details::sign<uint32_t>(result - edi_1) == 0xffffffff)
    while (true)
        edi_1 -= 1
        
        if (edi_1 != result && Concurrency::details::sign<uint32_t>(result - edi_1) != 0xffffffff)
            break
        
        if (Concurrency::details::HillClimbing::GetHistory(arg1, edi_1)[2].d s> 0)
            long double x87_r7_2 = Concurrency::details::HillClimbing::CalculateThroughputSlope(
                arg1, *(arg1 + 0x814), edi_1) * fconvert.t(-1.0)
            long double x87_r6_1 = float.t(0)
            x87_r6_1 - x87_r7_2
            
            if ((((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 1) == 0)
                return edi_1 + 1

return result
