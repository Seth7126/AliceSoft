// 函数: ?DoCoreMigration@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6eca15
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6ee0eb(arg1)
Concurrency::details::ResourceManager::PreProcessDynamicAllocationData(arg1)
void* var_10 = nullptr
int32_t ecx_1 = 0
int32_t i = 0
int32_t var_18 = 0

if (arg1[2] u> 0)
    do
        void* edx_1 = *(arg1[0x15] + (i << 2))
        
        if (*(*(edx_1 + 0x10) + 0xa0) u> *(edx_1 + 0x24))
            *(arg1[0x16] + (ecx_1 << 2)) = edx_1
            var_18 = ecx_1 + 1
            void* ecx_3 = *(edx_1 + 0x10)
            int32_t esi_1 = *(ecx_3 + 0xa0)
            var_10 += esi_1 - *(edx_1 + 0x24)
            int32_t esi_2
            
            if (*(edx_1 + 0x18) u>= esi_1 - *(edx_1 + 0x24))
                esi_2 = esi_1 - *(edx_1 + 0x24)
            else
                esi_2 = *(edx_1 + 0x18)
            
            *(edx_1 + 0x28) = esi_2
            int32_t eax_9 = *(ecx_3 + 0xa8)
            int32_t ecx_4 = *(ecx_3 + 0xa0)
            int32_t ecx_8
            
            if (eax_9 - *(edx_1 + 0x18) u>= ecx_4 - *(edx_1 + 0x24) - esi_2)
                ecx_8 = ecx_4 - *(edx_1 + 0x24) - esi_2
            else
                ecx_8 = eax_9 - *(edx_1 + 0x18)
            
            void* eax_11 = *(edx_1 + 0x10)
            *(edx_1 + 0x2c) = ecx_8
            ecx_1 = var_18
            *(edx_1 + 0x30) = *(eax_11 + 0xa0) - *(edx_1 + 0x24) - ecx_8 - esi_2
        
        i += 1
    while (i u< arg1[2])

void* ecx_11 = nullptr
int32_t i_1 = 0
arg1[8] = 0
void* var_8 = nullptr
int32_t i_3 = 0

if (arg1[6] u> 0)
    int32_t esi_3 = 0
    int32_t var_c_2 = 0
    
    do
        void* eax_17 = arg1[0x12] + esi_3
        
        if (*(eax_17 + 4) u> 0)
            int32_t j = 0
            int32_t ebx = 0
            
            do
                int32_t* ecx_13 = *(eax_17 + 0x20) + ebx
                int32_t esi_4 = ecx_13[4]
                
                if (esi_4 != 0)
                    if (esi_4 == ecx_13[7])
                        *ecx_13 = 6
                        *(eax_17 + 0x1c) += 1
                        arg1[8] += 1
                    
                    ecx_11 = var_8
                else
                    *ecx_13 = 2
                    *(eax_17 + 8) += 1
                    ecx_11 = var_8 + 1
                    var_8 = ecx_11
                
                j += 1
                ebx += 0x24
            while (j u< *(eax_17 + 4))
            
            i_1 = i_3
            esi_3 = var_c_2
        
        i_1 += 1
        esi_3 += 0x28
        i_3 = i_1
        var_c_2 = esi_3
    while (i_1 u< arg1[6])

void* i_2 = var_10 + ecx_11
arg1[9] = 0
void* i_4 = i_2

while (i_2 != 0 || arg1[8] u> i_2)
    if (arg1[9] u>= 2)
        break
    
    if (arg1[9] == 1)
        Concurrency::details::ResourceManager::IncreaseFullyLoadedSchedulerAllocations(arg1)
    
    int32_t ecx_16 = 0
    int32_t ebx_1 = 0
    int32_t j_1 = 0
    int32_t var_14_2 = 0
    
    if (arg1[2] u> 0)
        do
            void* esi_6 = *(arg1[0x15] + (j_1 << 2))
            
            if (*(*(esi_6 + 0x10) + 0xa0) u< *(esi_6 + 0x24))
                *(arg1[0x17] + (ecx_16 << 2)) = esi_6
                var_14_2 = ecx_16 + 1
                ebx_1 += *(esi_6 + 0x24) - *(*(esi_6 + 0x10) + 0xa0)
                ecx_16 = var_14_2
            
            j_1 += 1
        while (j_1 u< arg1[2])
        
        i_2 = i_4
        
        if (ecx_16 != 0)
            if (i_2 != 0)
                int32_t* eax_23
                int80_t st0_1
                st0_1, eax_23 = Concurrency::details::ResourceManager::AdjustDynamicAllocation(
                    arg1, i_2, ebx_1, ecx_16)
                int32_t eax_24 =
                    Concurrency::details::ResourceManager::PrepareReceiversForCoreTransfer(arg1, 
                    var_14_2)
                void* ecx_22 = nullptr
                int32_t* edx_2 = var_8
                
                if (var_8 u>= eax_23)
                    edx_2 = eax_23
                
                var_8 -= edx_2
                
                if (edx_2 u< eax_23)
                    ecx_22 = eax_23 - edx_2
                    
                    if (ecx_22 u>= var_10)
                        ecx_22 = var_10
                    
                    var_10 -= ecx_22
                
                int32_t var_2c_3 = var_18
                int32_t var_30_2 = eax_24
                sub_6ec74d(arg1, eax_23, edx_2, ecx_22)
                i_4 -= eax_23
                ebx_1 -= eax_23
                ecx_16 = var_14_2
                i_2 = i_4
            
            if (ebx_1 != 0 && arg1[8] u> 0)
                int32_t eax_29
                int80_t st0_2
                st0_2, eax_29 = Concurrency::details::ResourceManager::AdjustDynamicAllocation(
                    arg1, arg1[8], ebx_1, ecx_16)
                sub_6ec88f(arg1, eax_29, 
                    Concurrency::details::ResourceManager::PrepareReceiversForCoreTransfer(arg1, 
                        var_14_2))
                arg1[8] -= eax_29
                i_2 = i_4
    
    arg1[9] += 1

Concurrency::details::ResourceManager::ResetGlobalAllocationData(arg1)
