// 函数: ?GetCurrentNodeAndCore@ResourceManager@details@Concurrency@@QAEIPAI@Z
// 地址: 0x6ed57d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (Concurrency::details::ResourceManager::Version() s< 4)
    if (Concurrency::details::ResourceManager::Version() != 2
            && Concurrency::details::ResourceManager::Version() != 3)
        if (data_7fc2d8 != 1)
            void var_1c
            Concurrency::improper_scheduler_reference::improper_scheduler_reference(&var_1c)
            sub_70021b(&var_1c, 0x7dd35c)
            noreturn
        
        if (arg2 != 0)
            *arg2 = 0
        
        return 0
    
    int32_t eax_7 = ___crtGetCurrentProcessorNumber()
    int32_t eax_8 = 1 << eax_7.b
    int32_t edx_2 = 0
    int32_t* ecx_4 = *(arg1 + 0x48)
    int32_t var_c_2 = eax_8
    
    while (true)
        if ((*ecx_4 & eax_8) != 0)
            int32_t i = 0
            
            if (ecx_4[1] u> 0)
                char* edi_4 = ecx_4[8] + 8
                
                do
                    if (zx.d(*edi_4) == eax_7)
                        if (arg2 != 0)
                            *arg2 = i
                        
                        return edx_2
                    
                    i += 1
                    edi_4 = &edi_4[0x24]
                while (i u< ecx_4[1])
                
                eax_8 = var_c_2
        
        edx_2 += 1
        ecx_4 = &ecx_4[0xa]
else
    int16_t var_8
    Concurrency::details::UMS::CreateUmsThreadContext(&var_8)
    uint32_t edx_1 = zx.d(var_8)
    char var_6
    uint32_t ecx = zx.d(var_6)
    int32_t eax_1 = 1 << ecx.b
    int32_t esi_1 = 0
    int32_t* ecx_1 = *(arg1 + 0x48)
    int32_t var_10_1 = eax_1
    
    while (true)
        if (ecx_1[3] == edx_1 && (*ecx_1 & eax_1) != 0)
            int32_t i_1 = 0
            
            if (ecx_1[1] u> 0)
                char* edi_2 = ecx_1[8] + 8
                
                do
                    if (zx.d(*edi_2) == ecx)
                        if (arg2 != 0)
                            *arg2 = i_1
                        
                        return esi_1
                    
                    i_1 += 1
                    edi_2 = &edi_2[0x24]
                while (i_1 u< ecx_1[1])
                
                eax_1 = var_10_1
            
            edx_1 = zx.d(var_8)
        
        esi_1 += 1
        ecx_1 = &ecx_1[0xa]
