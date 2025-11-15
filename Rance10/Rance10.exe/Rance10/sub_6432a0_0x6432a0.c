// 函数: sub_6432a0
// 地址: 0x6432a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg2
void* i = result

if (arg1 != result)
    void* edi_1 = &arg1[1]
    
    if (edi_1 != result)
        result = edi_1 - 4
        
        do
            void* esi_1 = *(result + 4)
            void* result_1 = result + 4
            void* result_2 = result_1
            int32_t edx = *(*(esi_1 + 0x60) + 8)
            
            if (edx s<= *(*(*arg1 + 0x60) + 8))
                void* edi_2 = *result
                
                if (edx s> *(*(edi_2 + 0x60) + 8))
                    do
                        *result_2 = edi_2
                        result_2 = result
                        edi_2 = *(result - 4)
                        result -= 4
                    while (*(*(esi_1 + 0x60) + 8) s> *(*(edi_2 + 0x60) + 8))
                
                *result_2 = esi_1
                edi_1 = &arg1[1]
            else
                sub_6feca0(edi_1, arg1, result + 4 - arg1)
                *arg1 = esi_1
            
            result = result_1
        while (result + 4 != i)

return result
