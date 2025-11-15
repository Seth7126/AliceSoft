// 函数: ?SendResourceNotifications@ResourceManager@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// 地址: 0x6ef23b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t i = 0
void* result = 0x30
int32_t i_2 = 0
int32_t* var_14 = 0x30

if (*(arg1 + 0x18) u> 0)
    int32_t esi_1 = 0
    int32_t* var_10_1 = 0x30
    int32_t var_20_1 = 0
    int32_t* edx_1 = 0x30
    
    do
        result = *(arg1 + 0x48) + esi_1
        int32_t j_3 = 0
        
        if (*(result + 4) u> 0)
            int32_t edx_2 = 0
            int32_t var_c_1 = 0
            int32_t var_18_1 = 0
            int32_t j = 0
            
            do
                void* ebx_2 = *(result + 0x20) + edx_2
                int32_t eax_1 = *(ebx_2 + 0x14)
                *(ebx_2 + 0x14) = 0
                *(ebx_2 + 0x18) = eax_1
                void* edx_3 = *(arg1 + 0x64)
                void* const k
                
                if (edx_3 == 0)
                    k = nullptr
                else
                    k = *(edx_3 + 0x18)
                
                if (k != 0)
                    do
                        void* ecx_1 = *(var_10_1 + *(k + 0x10)) + var_c_1
                        *(ecx_1 + 0x20) = *(ecx_1 + 0x1c)
                        int32_t eax_4 = *(ecx_1 + 0x18)
                        *(ecx_1 + 0x1c) = eax_4
                        *(ebx_2 + 0x14) += eax_4
                        
                        if (k == *(arg1 + 0x64))
                            k = nullptr
                        else
                            k = *(k + 0x18)
                    while (k != 0)
                    
                    esi_1 = var_20_1
                    j = j_3
                
                j += 1
                result = *(arg1 + 0x48) + esi_1
                var_c_1 += 0x34
                edx_2 = var_18_1 + 0x24
                j_3 = j
                var_18_1 = edx_2
            while (j u< *(result + 4))
            
            i = i_2
            ebx = 0
            edx_1 = var_10_1
        
        i += 1
        esi_1 += 0x28
        edx_1 = &edx_1[0xd]
        i_2 = i
        var_20_1 = esi_1
        var_10_1 = edx_1
    while (i u< *(arg1 + 0x18))

int32_t i_1 = 0
int32_t i_3 = 0

if (*(arg1 + 0x18) u> 0)
    int32_t var_c_2 = 0
    
    do
        int32_t j_1 = 0
        result = *(arg1 + 0x48) + ebx
        int32_t j_2 = 0
        
        if (*(result + 4) u> 0)
            int32_t var_10_2 = 0
            int32_t ecx_2 = 0
            int32_t var_1c = 0
            
            do
                int32_t eax_7 = *(result + 0x20)
                int32_t esi_3 = *(eax_7 + ecx_2 + 0x18)
                int32_t eax_8 = *(eax_7 + ecx_2 + 0x14)
                void* esi_4 = *(arg1 + 0x64)
                void* const k_1
                
                if (esi_4 == 0)
                    k_1 = nullptr
                else
                    k_1 = *(esi_4 + 0x18)
                
                if (k_1 != 0)
                    do
                        if (*(k_1 + 0x84) == *(k_1 + 0x80))
                            void* eax_12 = *(var_14 + *(k_1 + 0x10)) + var_10_2
                            
                            if (*(eax_12 + 0x24) u> 0)
                                if (k_1 == arg2)
                                    if (eax_8 u<= *(eax_12 + 0x1c))
                                        Concurrency::details::SchedulerProxy::SendCoreNotification(
                                            k_1, eax_12, 0)
                                    else
                                        Concurrency::details::SchedulerProxy::SendCoreNotification(
                                            k_1, eax_12, 1)
                                else
                                    bool cond:0_1
                                    
                                    if (esi_3 != *(eax_12 + 0x20))
                                        cond:0_1 = eax_8 != *(eax_12 + 0x1c)
                                    label_6ef3a3:
                                        
                                        if (not(cond:0_1) && esi_3 u> *(eax_12 + 0x20))
                                            Concurrency::details::SchedulerProxy::SendCoreNotification(
                                                k_1, eax_12, 0)
                                    else
                                        int32_t temp1_1 = *(eax_12 + 0x1c)
                                        cond:0_1 = eax_8 != temp1_1
                                        
                                        if (eax_8 u<= temp1_1)
                                            goto label_6ef3a3
                                        
                                        Concurrency::details::SchedulerProxy::SendCoreNotification(
                                            k_1, eax_12, 1)
                        
                        if (k_1 == *(arg1 + 0x64))
                            k_1 = nullptr
                        else
                            k_1 = *(k_1 + 0x18)
                    while (k_1 != 0)
                    
                    ebx = var_c_2
                    j_1 = j_2
                    ecx_2 = var_1c
                
                j_1 += 1
                var_10_2 += 0x34
                result = *(arg1 + 0x48) + ebx
                ecx_2 += 0x24
                j_2 = j_1
                var_1c = ecx_2
            while (j_1 u< *(result + 4))
            
            i_1 = i_3
        
        var_14 = &var_14[0xd]
        i_1 += 1
        ebx += 0x28
        i_3 = i_1
        var_c_2 = ebx
    while (i_1 u< *(arg1 + 0x18))

return result
