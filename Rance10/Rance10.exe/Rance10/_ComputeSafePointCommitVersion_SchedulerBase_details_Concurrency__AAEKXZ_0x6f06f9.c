// 函数: ?ComputeSafePointCommitVersion@SchedulerBase@details@Concurrency@@AAEKXZ
// 地址: 0x6f06f9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_5 = 0
int32_t i = 0
int32_t result = 0
int32_t i_1 = 0

if (*(arg1 + 0x2c) s> 0)
    do
        void* eax_2 = *(*(arg1 + 0x20) + (i << 2))
        
        if (eax_2 != 0)
            int32_t j = 0
            int32_t j_1 = 0
            
            if (*(eax_2 + 0x78) s> 0)
                void* eax_3 = eax_2 + 0x38
                
                do
                    void* eax_4 = sub_6efd4d(eax_3, j)
                    
                    if (eax_4 != 0)
                        int32_t result_1 = *(eax_4 + 0xc0)
                        
                        if (result_1 u< *(arg1 + 0x154))
                            result_1 = 0xffffffff
                        
                        if (var_5 == 0)
                            var_5 = 1
                            result = result_1
                        else if (result u> result_1)
                            result = result_1
                    
                    eax_3 = eax_2 + 0x38
                    j = j_1 + 1
                    j_1 = j
                while (j s< *(eax_2 + 0x78))
                
                i = i_1
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 0x2c))

return result
