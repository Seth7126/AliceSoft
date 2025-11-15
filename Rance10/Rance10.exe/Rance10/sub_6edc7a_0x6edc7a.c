// 函数: sub_6edc7a
// 地址: 0x6edc7a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = data_7fc2d8

if (eax == 0)
    Concurrency::details::ResourceManager::RetrieveSystemVersionInformation()
    eax = data_7fc2d8

int32_t ecx = data_7fc2c0

if (ecx == 0)
    Concurrency::details::ResourceManager::CaptureProcessAffinity()
    eax = data_7fc2d8
    ecx = data_7fc2c0

SYSTEM_LOGICAL_PROCESSOR_INFORMATION* i

if (eax s< 4)
    if (eax == 3)
        Concurrency::details::ResourceManager::GetTopologyInformation(0xffff)
        int32_t* esi_3 = data_7fc2e0
        i = nullptr
        int32_t ecx_2 = 0
        SYSTEM_LOGICAL_PROCESSOR_INFORMATION* i_4 = nullptr
        int32_t ebx_3 = 0
        int32_t var_10_2 = 0
        int32_t edi_2 = 0
        
        if (data_7fc2dc u> 0)
            do
                if (esi_3[1] == 3)
                    sub_6ebbd0(esi_3)
                    int32_t j = *esi_3
                    
                    if (j != 0)
                        ebx_3 += 1
                        int32_t edx_3 = 0
                        
                        do
                            edx_3 += 1
                            j &= j - 1
                        while (j != 0)
                        
                        var_10_2 += zx.d(edx_3.w)
                    
                    i = i_4
                
                if (esi_3[1] == 1)
                    sub_6ebbd0(esi_3)
                    i = i_4
                    
                    if (*esi_3 != 0)
                        edi_2 += 1
                
                i = &i[1]
                esi_3 = &esi_3[6]
                i_4 = i
            while (i u< data_7fc2dc)
            
            ecx_2 = var_10_2
        
        data_7fc2d0 = ebx_3
        i.b = ebx_3 u> edi_2
        data_7fc2cc = i.b
        
        if (i.b == 0)
            data_7fc2d0 = edi_2
        
        data_7fc2c8 = ecx_2
        data_7fc2d4 = edi_2
        goto label_6ede2f
    
    data_7fc2cc = 0
    data_7fc2d0 = 1
    int32_t i_1
    
    if (ecx != 0)
        Concurrency::details::ResourceManager::CaptureProcessAffinity()
        int32_t eax_5 = sub_6ed4c9(data_7fc2c0, 0)
        i_1 = data_7fc2b8 & *eax_5
    else
        i_1 = data_7fc2b8
    
    int32_t edx_4 = 0
    
    for (; i_1 != 0; i_1 &= i_1 - 1)
        edx_4 += 1
    
    i = zx.d(edx_4.w)
    data_7fc2c8 = i
    data_7fc2d4 = 1
else
    Concurrency::details::ResourceManager::GetTopologyInformation(0xffff)
    int32_t* edi_1 = data_7fc2e0
    int32_t esi_1 = 0
    int32_t i_2 = 0
    int32_t var_c_1 = 0
    int32_t edx_1 = 0
    int32_t i_3 = 0
    int32_t ebx_1 = 0
    int32_t var_10_1 = 0
    int32_t var_14_1 = 0
    
    if (data_7fc2dc u> 0)
        do
            if (*edi_1 == 3)
                int32_t j_2 = 0
                void* ebx_2 = &edi_1[8]
                int32_t j_1
                
                do
                    Concurrency::details::ResourceManager::ApplyAffinityRestrictions(ebx_2)
                    int32_t k = *ebx_2
                    
                    if (k != 0)
                        esi_1 += 1
                        int32_t edx_2 = 0
                        
                        do
                            edx_2 += 1
                            k &= k - 1
                        while (k != 0)
                        
                        var_10_1 += zx.d(edx_2.w)
                    
                    ebx_2 += 0xc
                    j_1 = j_2 + 1
                    j_2 = j_1
                while (j_1 s< zx.d(*(edi_1 + 0x1e)))
                ebx_1 = var_14_1
                i_2 = i_3
                var_c_1 = esi_1
            
            if (*edi_1 == 1)
                Concurrency::details::ResourceManager::ApplyAffinityRestrictions(&edi_1[8])
                esi_1 = var_c_1
                i_2 = i_3
                
                if (edi_1[8] != 0)
                    ebx_1 += 1
                    var_14_1 = ebx_1
            
            i_2 += edi_1[1]
            edi_1 += edi_1[1]
            i_3 = i_2
        while (i_2 u< data_7fc2dc)
        
        edx_1 = var_10_1
    
    data_7fc2d0 = esi_1
    i.b = esi_1 u> ebx_1
    data_7fc2cc = i.b
    
    if (i.b == 0)
        data_7fc2d0 = ebx_1
    
    data_7fc2c8 = edx_1
    data_7fc2d4 = ebx_1
label_6ede2f:
    
    if (arg1 == 0)
        i = Concurrency::details::ResourceManager::CleanupTopologyInformation()

void* ecx_6 = data_7fc2c4

if (ecx_6 != 0)
    i = Concurrency::details::ResourceManager::AffinityRestriction::`scalar deleting destructor'(
        ecx_6, 1)

data_7fc2c4 = 0
return i
