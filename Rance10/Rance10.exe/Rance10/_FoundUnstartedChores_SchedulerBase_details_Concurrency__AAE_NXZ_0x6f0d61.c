// 函数: ?FoundUnstartedChores@SchedulerBase@details@Concurrency@@AAE_NXZ
// 地址: 0x6f0d61
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg1
int32_t i = 0
int32_t ebx
ebx.b = 0
int32_t result_1 = result
int32_t i_1 = 0

if (*(result + 0x2c) s> 0)
    do
        void* esi_1 = *(*(result + 0x24) + (i << 2))
        
        if (esi_1 != 0)
            int32_t j = 0
            
            if (*(esi_1 + 0x50) s> 0)
                do
                    result = sub_6efd4d(esi_1 + 0x10, j)
                    int32_t result_2 = result
                    
                    if (result != 0)
                        if (Concurrency::details::ContextBase::IsBlocked(result).b != 0)
                            ebx.b = 1
                            break
                        
                        if (Concurrency::details::ScheduleGroupSegmentBase::HasUnrealizedChores().b
                                != 0)
                            ebx.b = 1
                            break
                    
                    j += 1
                while (j s< *(esi_1 + 0x50))
                
                i = i_1
            
            if (ebx.b != 0)
                break
            
            int32_t j_1 = 0
            
            if (*(esi_1 + 0xa0) s> 0)
                do
                    void* eax_2 = sub_6efd4d(esi_1 + 0x60, j_1)
                    void* var_c_1 = eax_2
                    
                    if (eax_2 != 0)
                        char eax_3 = Concurrency::details::ContextBase::IsBlocked(eax_2)
                        char eax_4
                        
                        if (eax_3 == 0)
                            eax_4 = Concurrency::details::ScheduleGroupSegmentBase::HasUnrealizedChores()
                        
                        if (eax_3 != 0 || eax_4 != 0)
                            ebx.b = 1
                            break
                    
                    j_1 += 1
                while (j_1 s< *(esi_1 + 0xa0))
                
                i = i_1
        
        result = result_1
        i += 1
        i_1 = i
    while (i s< *(result + 0x2c))

result.b = ebx.b
return result
