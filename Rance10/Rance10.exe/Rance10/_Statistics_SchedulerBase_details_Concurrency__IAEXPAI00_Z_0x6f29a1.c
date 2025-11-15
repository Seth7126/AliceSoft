// 函数: ?Statistics@SchedulerBase@details@Concurrency@@IAEXPAI00@Z
// 地址: 0x6f29a1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
int32_t i = 0
void* var_10 = esi
int32_t i_2 = 0

if (*(esi + 0x2c) s> 0)
    do
        void* ebx_1 = *(*(esi + 0x20) + (i << 2))
        
        if (ebx_1 != 0 && *(ebx_1 + 0x78) s> 0)
            int32_t j = 0
            void* eax_2 = ebx_1 + 0x38
            
            do
                void* eax_3 = sub_6efd4d(eax_2, j)
                
                if (eax_3 != 0)
                    int32_t ecx_1 = *(eax_3 + 0x68)
                    int32_t edx_2 = ecx_1 - *(eax_3 + 0x70)
                    *(eax_3 + 0x70) = ecx_1
                    int32_t eax_4 = *(eax_3 + 0x6c)
                    int32_t ecx_3 = eax_4 - *(eax_3 + 0x74)
                    *(eax_3 + 0x74) = eax_4
                    *arg3 += edx_2
                    *arg2 += ecx_3
                    *arg4 += edx_2 - ecx_3
                
                j += 1
                eax_2 = ebx_1 + 0x38
            while (j s< *(ebx_1 + 0x78))
            
            esi = var_10
            i = i_2
        
        i += 1
        i_2 = i
    while (i s< *(esi + 0x2c))

int32_t eax_8 = *(esi + 0x1bc)
int32_t i_1 = 0
int32_t edx_5 = eax_8 - *(esi + 0x1c4)
*(esi + 0x1c4) = eax_8
int32_t eax_9 = *(esi + 0x1c0)
int32_t ecx_5 = eax_9 - *(esi + 0x1c8)
*(esi + 0x1c8) = eax_9
*arg3 += edx_5
*arg2 += ecx_5
int32_t* result = arg4
*result += edx_5 - ecx_5

if (*(esi + 0x108) s> 0)
    result = esi + 0xc8
    
    do
        uint32_t eax_12 = sub_6efd4d(result, i_1)
        
        if (eax_12 != 0)
            int32_t ecx_7 = *(eax_12 + 8)
            int32_t edx_8 = ecx_7 - *(eax_12 + 0x10)
            int32_t eax_13 = *(eax_12 + 0xc)
            *(eax_12 + 0x10) = ecx_7
            int32_t ecx_9 = eax_13 - *(eax_12 + 0x14)
            *(eax_12 + 0x14) = eax_13
            *arg3 += edx_8
            *arg2 += ecx_9
            *arg4 += edx_8 - ecx_9
            
            if (Concurrency::details::ExternalStatistics::IsActive(eax_12) == 0)
                sub_6f22fc(esi + 0xc8, eax_12, *eax_12, 0)
                operator new(eax_12)
        
        i_1 += 1
        result = esi + 0xc8
    while (i_1 s< *(esi + 0x108))

return result
