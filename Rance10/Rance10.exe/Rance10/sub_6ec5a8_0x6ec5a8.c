// 函数: sub_6ec5a8
// 地址: 0x6ec5a8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1
void* var_24 = ebx
int32_t result

if (*(ebx + 0x64) == 0)
    result.b = 1
else
    void* esi_1 = *(ebx + 0x64)
    int32_t* esi_2
    
    if (esi_1 == 0)
        esi_2 = nullptr
    else
        esi_2 = *(esi_1 + 0x18)
    
    int32_t* var_20_1 = esi_2
    int32_t eax = Concurrency::details::SchedulerProxy::DesiredHWThreads(esi_2)
    
    if (esi_2[0x28] u< eax || esi_2[0x2a] u> 0)
        int32_t var_10_1 = Concurrency::details::SchedulerProxy::AdjustAllocationIncrease(esi_2, 
            Concurrency::details::SchedulerProxy::DesiredHWThreads(esi_2)) - esi_2[0x28]
        int32_t eax_4 = esi_2[4]
        int32_t eax_5 = esi_2[5]
        void* eax_6
        int32_t edx_1
        eax_6, edx_1 = Concurrency::details::SchedulerProxy::DesiredHWThreads(esi_2)
        int32_t edi_1 = *(ebx + 0x18)
        edx_1.b = eax_6 != *(ebx + 0x1c)
        int32_t ecx_4 = 0
        int32_t var_1c_1 = 0
        
        if (edi_1 != 0)
            do
                eax_6.b = var_10_1 u> 0
                edx_1.b &= eax_6.b
                char var_5_1 = edx_1.b
                
                if (edx_1.b != 0)
                    int32_t edx_2 = ecx_4 + 1
                    int32_t var_14_1 = ecx_4
                    void* eax_8 = *(eax_5 + (ecx_4 << 2))
                    eax_6 = eax_8 * 0x34 + eax_4
                    void* var_28_1 = eax_6
                    
                    if (edx_2 u< edi_1)
                        int32_t ebx_1 = ecx_4
                        void* ecx_5 = eax_6
                        
                        do
                            void* eax_11 = *(eax_5 + (edx_2 << 2)) * 0x34 + eax_4
                            
                            if (*(eax_11 + 0x1c) u> *(ecx_5 + 0x1c))
                                ecx_5 = eax_11
                                ebx_1 = edx_2
                            
                            edx_2 += 1
                        while (edx_2 u< edi_1)
                        
                        ecx_4 = var_1c_1
                        esi_2 = var_20_1
                        ebx = var_24
                        
                        if (ecx_4 != ebx_1)
                            *(eax_5 + (ecx_4 << 2)) = *(eax_5 + (ebx_1 << 2))
                            *(eax_5 + (ebx_1 << 2)) = eax_8
                
                void* edi_4 = *(eax_5 + (ecx_4 << 2)) * 0x34 + eax_4
                
                if (*(edi_4 + 4) u> 0)
                    int32_t i = 0
                    int32_t ecx_6 = 0
                    int32_t var_14_3 = 0
                    
                    do
                        eax_6 = *(edi_4 + 0x30)
                        
                        if (*(eax_6 + ecx_6) != 1)
                            eax_6.b = *(eax_6 + ecx_6 + 0x31)
                            
                            if (eax_6.b != 0)
                                eax_6, edx_1 = sub_6f6ccd(esi_2, edi_4, i)
                                ecx_6 = var_14_3
                        else if (var_10_1 u> 0)
                            int32_t* eax_14 = *(eax_6 + ecx_6 + 0x14)
                            *eax_14 += 1
                            eax_6, edx_1 =
                                Concurrency::details::SchedulerProxy::AddCore(esi_2, edi_4, i, 0)
                            var_10_1 -= 1
                            ecx_6 = var_14_3
                        
                        i += 1
                        ecx_6 += 0x34
                        var_14_3 = ecx_6
                    while (i u< *(edi_4 + 4))
                    
                    ebx = var_24
                    ecx_4 = var_1c_1
                
                edi_1 = *(ebx + 0x18)
                ecx_4 += 1
                edx_1.b = var_5_1
                var_1c_1 = ecx_4
            while (ecx_4 u< edi_1)
    
    if (esi_2[0x21] == esi_2[0x20])
        Concurrency::details::ResourceManager::SendResourceNotifications(ebx, 0)
    
    result = Concurrency::details::SchedulerProxy::DesiredHWThreads(esi_2)
    result.b = esi_2[0x28] == result

return result
