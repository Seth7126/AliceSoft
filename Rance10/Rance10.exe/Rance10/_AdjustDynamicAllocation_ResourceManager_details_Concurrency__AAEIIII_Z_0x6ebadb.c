// 函数: ?AdjustDynamicAllocation@ResourceManager@details@Concurrency@@AAEIIII@Z
// 地址: 0x6ebadb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t esi = arg2

if (esi u>= arg3)
    int32_t esi_2 = 0
    
    if (arg4 u> 0)
        do
            void* edx_2 = *(*(arg1 + 0x5c) + (esi_2 << 2))
            esi_2 += 1
            *(edx_2 + 4) = *(edx_2 + 0x24) - *(*(edx_2 + 0x10) + 0xa0)
        while (esi_2 u< arg4)
else if (arg4 != 1)
    long double x87_r7_1 = float.t(esi)
    
    if (esi s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
    
    var_c.q = fconvert.d(x87_r7_1)
    long double x87_r7_2 = fconvert.t(var_c.q)
    long double x87_r6_1 = float.t(arg3)
    
    if (arg3 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4294967296.0)
    
    var_c.q = fconvert.d(x87_r6_1)
    long double x87_r7_3 = x87_r7_2 / fconvert.t(var_c.q)
    
    if (arg4 != 0)
        int32_t esi_1 = 0
        
        do
            void* edx_1 = *(*(arg1 + 0x5c) + (esi_1 << 2))
            void* eax_4 = *(edx_1 + 0x10)
            int32_t ecx = *(edx_1 + 0x24)
            long double x87_r6_2 = float.t(ecx - *(eax_4 + 0xa0))
            
            if (ecx - *(eax_4 + 0xa0) s< 0)
                x87_r6_2 = x87_r6_2 + fconvert.t(4294967296.0)
            
            var_c.q = fconvert.d(x87_r6_2)
            esi_1 += 1
            *(edx_1 + 8) = fconvert.d(fconvert.t(var_c.q) * x87_r7_3)
        while (esi_1 u< arg4)
        
        esi = arg2
    
    int32_t var_1c_1 = esi
    Concurrency::details::ResourceManager::RoundUpScaledAllocations(*(arg1 + 0x5c), arg4)
else
    *(**(arg1 + 0x5c) + 4) = esi
