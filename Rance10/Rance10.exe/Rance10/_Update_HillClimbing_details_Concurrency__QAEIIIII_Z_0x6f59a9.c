// 函数: ?Update@HillClimbing@details@Concurrency@@QAEIIIII@Z
// 地址: 0x6f59a9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 

*(arg1 + 0x824) += 1
Concurrency::details::HillClimbing::EstablishControlSetting(arg1, arg2)
int32_t edi_1 = *(arg1 + 0x828)
int32_t ecx = arg3
int32_t edx_1 = arg4

if (edi_1 != 0)
    ecx += *(arg1 + 0x82c)
    edx_1 += *(arg1 + 0x830)

if (ecx u< arg2 && ecx u< arg5)
    int32_t eax_3 = arg2 - ecx
    ecx = arg2
    edx_1 += eax_3

int32_t esi_1 = *(arg1 + 0x820)

if (esi_1 u>= 1 && ecx u< 1 && edx_1 u< 1 && arg5 == 0)
    void* esi_2 = *(arg1 + 0x800)
    *(arg1 + 0x82c) = ecx
    *(arg1 + 0x828) = edi_1 + 1
    *(arg1 + 0x830) = edx_1
    Concurrency::details::SchedulerProxy::MinVprocHWThreads(esi_2)
    *(esi_2 + 0xb8)
    
    if (edi_1 + 1 u< 3)
        *(arg1 + 0x814)
    
    return 

int32_t var_20_2 = arg5
int32_t var_24_1 = edx_1
*(arg1 + 0x820) = esi_1 + 1
*(arg1 + 0x82c) = 0
*(arg1 + 0x830) = 0
*(arg1 + 0x828) = 0
int32_t edi_3 = *(arg1 + 0x814)
double var_10_1 =
    fconvert.d(Concurrency::details::HillClimbing::CalculateThroughput(edi_1 + 1, ecx))

if (esi_1 + 1 u<= 1)
    *(arg1 + 0x818) = edi_3
    return 

double* eax_8 = Concurrency::details::HillClimbing::GetHistory(arg1, edi_3)
double* eax_9 = Concurrency::details::HillClimbing::GetHistory(arg1, *(arg1 + 0x818))
void* var_24_2 = arg1
void* var_28_2 = arg1
var_28_2.q = fconvert.d(fconvert.t(var_10_1))
Concurrency::details::HillClimbing::MeasuredHistory::Add(eax_8, var_28_2, *(arg1 + 0x824))

if (eax_9[2].d == 0 || eax_8 == eax_9)
    if (Concurrency::details::HillClimbing::IsStableHistory(eax_8) != 0)
        Concurrency::details::HillClimbing::RecommendControlSetting(arg1, 
            Concurrency::details::HillClimbing::GetRandomMove(arg1) + *(arg1 + 0x814))
else if (Concurrency::details::HillClimbing::IsStableHistory(eax_8) != 0)
    long double x87_r7_4 = Concurrency::details::HillClimbing::CalculateThroughputSlope(arg1, 
        *(arg1 + 0x818), *(arg1 + 0x814)) * fconvert.t(*(arg1 + 0x808))
    int32_t esi_5 = *(arg1 + 0x814)
    long double x87_r6_1 = float.t(*(arg1 + 0x814))
    
    if (esi_5 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4294967296.0)
    
    long double x87_r6_2 = fconvert.t(fconvert.d(x87_r6_1))
    int32_t eax_12
    int32_t ecx_8
    eax_12, ecx_8 = __ftol2(x87_r6_2 + x87_r7_4)
    
    if (eax_12 == esi_5)
        int32_t var_20_8 = ecx_8
        int32_t var_24_4 = ecx_8
        var_24_4.q = fconvert.d(x87_r7_4)
        eax_12 = __ftol2(sub_6f5596(var_24_4) + fconvert.t(fconvert.d(x87_r6_2)))
    
    Concurrency::details::HillClimbing::RecommendControlSetting(arg1, eax_12)
