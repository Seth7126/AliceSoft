// 函数: ?SetupStaticAllocationData@ResourceManager@details@Concurrency@@AAEXPAVSchedulerProxy@23@_N@Z
// 地址: 0x6ef40c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
Concurrency::details::ResourceManager::InitializeRMBuffers(arg1)
void* edi = arg2
_memset(edi + 0x40, 0, 0x30)
Concurrency::details::ResourceManager::PopulateCommonAllocationData(arg1, 0, edi, edi + 0x40)
int32_t eax = Concurrency::details::SchedulerProxy::DesiredHWThreads(edi)
long double x87_r7 = float.t(eax)

if (eax s< 0)
    x87_r7 = x87_r7 + fconvert.t(4294967296.0)

eax.b = arg3
*(edi + 0x60) = fconvert.d(x87_r7)
*(edi + 0x68) = eax.b
int32_t** result = *(arg1 + 0x54)
int32_t var_8_2 = 1
*result = edi + 0x40
void* edi_1 = *(arg1 + 0x64)
void* i

if (edi_1 == 0)
    i = nullptr
else
    i = *(edi_1 + 0x18)

if (i != 0)
    result = arg2
    
    do
        if (i != result)
            _memset(i + 0x40, 0, 0x30)
            Concurrency::details::ResourceManager::PopulateCommonAllocationData(arg1, var_8_2, i, 
                i + 0x40)
            int32_t eax_1 = Concurrency::details::SchedulerProxy::DesiredHWThreads(i)
            long double x87_r7_1 = float.t(eax_1)
            
            if (eax_1 s< 0)
                x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
            
            *(i + 0x60) = fconvert.d(x87_r7_1)
            *(*(arg1 + 0x54) + (var_8_2 << 2)) = i + 0x40
            result = arg2
            var_8_2 += 1
        
        if (i == *(arg1 + 0x64))
            i = nullptr
        else
            i = *(i + 0x18)
    while (i != 0)

return result
