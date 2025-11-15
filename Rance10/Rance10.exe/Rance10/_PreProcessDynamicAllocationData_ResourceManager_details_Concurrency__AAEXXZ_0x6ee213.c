// 函数: ?PreProcessDynamicAllocationData@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6ee213
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t i = 0
int32_t* var_8_1 = arg1

if (arg1[2] u<= 0)
    return 

do
    int32_t* edi_1 = *(arg1[0x15] + (i << 2))
    void* esi_1 = edi_1[4]
    
    if (*(esi_1 + 0xa8) u> 0)
        Concurrency::details::ResourceManager::HandleBorrowedCores(arg1, esi_1, edi_1)
    
    if (edi_1[5] u> 0)
        int32_t eax_2 = *(esi_1 + 0xa0)
        
        if (edi_1[9] u> eax_2 - edi_1[5])
            int32_t edx_3
            
            if (Concurrency::details::SchedulerProxy::MinVprocHWThreads(esi_1) + *(esi_1 + 0xb8)
                    u<= eax_2 - edi_1[5])
                edx_3 = eax_2 - edi_1[5]
            else
                edx_3 =
                    Concurrency::details::SchedulerProxy::MinVprocHWThreads(esi_1) + *(esi_1 + 0xb8)
            
            edi_1[9] = edx_3
    
    int32_t* eax = *(esi_1 + 0xa0)
    
    if (edi_1[9] u< eax)
        int32_t* ecx_5 = eax
        eax = Concurrency::details::SchedulerProxy::MinVprocHWThreads(esi_1) + *(esi_1 + 0xb8)
        
        if (ecx_5 - *(esi_1 + 0xa8) u> eax)
            sub_6ed8cf(var_8_1, esi_1, edi_1)
    
    if (*(esi_1 + 0xcc) == 0)
        eax = *(esi_1 + 0xa0)
        
        if (edi_1[9] u> eax)
            edi_1[9] = eax
    
    arg1 = var_8_1
    i += 1
while (i u< arg1[2])
