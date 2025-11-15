// 函数: sub_6ec88f
// 地址: 0x6ec88f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t j = arg2
void* edx = arg1
int32_t esi = arg3
void* var_c = edx
char i

do
    int32_t edi_1 = 0
    i = 0
    int32_t var_14_1 = 0
    
    if (esi == 0)
        break
    
    while (j != 0)
        void* edi_2 = *(*(edx + 0x5c) + (edi_1 << 2))
        
        if (*(edi_2 + 4) u> 0)
            int32_t ecx = *(edi_2 + 0x2c)
            
            if (*(edi_2 + 0x28) u> ecx)
                i = 1
                int32_t eax_3 = *(*(*(edi_2 + 0x10) + 0x14) + (ecx << 2))
                void* eax_5 = eax_3 * 0x34 + *(*(edi_2 + 0x10) + 0x10)
                
                if (*(eax_3 * 0x28 + *(edx + 0x48) + 0x1c) u<= 0)
                    *(edi_2 + 0x2c) += 1
                else
                    Concurrency::details::ResourceManager::DynamicAssignCores(edx, *(edi_2 + 0x10), 
                        eax_3, 1, 1)
                    
                    if (*(eax_5 + 0x1c) == *(eax_5 + 4))
                        *(edi_2 + 0x2c) += 1
                    
                    *(edi_2 + 4) -= 1
                    j -= 1
                    edx = var_c
        
        edi_1 = var_14_1 + 1
        var_14_1 = edi_1
        
        if (edi_1 u>= esi)
            break
    
    arg2 = j
while (i != 0)

if (j == 0)
    return 

int32_t edi_4 = 0
int32_t var_18_2 = 0

if (esi != 0)
    do
        int32_t ecx_8 = edi_4 + 1
        int32_t var_10_2 = edi_4
        int32_t var_1c_1 = ecx_8
        
        if (ecx_8 u< esi)
            int32_t ebx = *(edx + 0x5c)
            int32_t edx_1 = ecx_8
            int32_t edi_5 = edi_4 << 2
            int32_t eax_9
            
            do
                if (*(*(ebx + (edx_1 << 2)) + 4) u<= *(*(edi_5 + ebx) + 4))
                    eax_9 = var_10_2
                else
                    eax_9 = edx_1
                    var_10_2 = eax_9
                    edi_5 = edx_1 << 2
                
                edx_1 += 1
            while (edx_1 u< esi)
            
            edi_4 = var_18_2
            j = arg2
            edx = var_c
            
            if (edi_4 != eax_9)
                int32_t ecx_6 = *(edx + 0x5c)
                int32_t edx_2 = *(ecx_6 + (edi_4 << 2))
                *(ecx_6 + (edi_4 << 2)) = *(ecx_6 + (eax_9 << 2))
                *(*(var_c + 0x5c) + (var_10_2 << 2)) = edx_2
                edx = var_c
        
        if (*(*(*(edx + 0x5c) + (edi_4 << 2)) + 4) == 0)
            esi = edi_4
            break
        
        edi_4 = ecx_8
        var_18_2 = edi_4
    while (edi_4 u< esi)

int32_t eax = esi
int32_t var_18_3 = eax

do
    int32_t edi_7 = 0
    
    if (eax != 0)
        do
            if (j == 0)
                return 
            
            void* eax_16 = *(*(edx + 0x5c) + (edi_7 << 2))
            
            if (*(eax_16 + 4) u> 0)
                int32_t eax_17 = Concurrency::details::ResourceManager::FindBestFitIdleAllocation(
                    edx, j, eax_16, esi)
                edx = var_c
                j -= eax_17
                
                if (*(eax_16 + 4) == 0)
                    esi -= 1
            
            eax = var_18_3
            edi_7 += 1
        while (edi_7 u< eax)
while (j != 0)
