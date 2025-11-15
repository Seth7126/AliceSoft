// 函数: sub_6ec74d
// 地址: 0x6ec74d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg2
void* edx = arg1
int32_t* result_2 = arg3
void* var_c = edx
void arg_8
int32_t arg_c
int32_t* result

do
    result.b = 0
    int32_t edi_1 = 0
    char var_5_1 = 0
    
    if (result_2 == 0)
        break
    
    do
        void* ecx = (*(edx + 0x5c))[edi_1]
        
        if (*(ecx + 4) u> 0 && *(ecx + 0x28) u> *(ecx + 0x2c))
            var_5_1 = 1
            result = Concurrency::details::ResourceManager::FindCoreForPartiallyFilledNode(edx, 
                &arg_8, &arg_c, ecx, arg4)
            edx = var_c
            
            if (result.b != 0)
                i -= 1
        
        edi_1 += 1
    while (edi_1 u< result_2)
    
    result.b = var_5_1
    arg2 = i
while (result.b != 0)

if (i != 0)
    int32_t* result_3 = nullptr
    int32_t* result_4 = nullptr
    
    if (result_2 != 0)
        do
            int32_t* result_6 = result_3 + 1
            int32_t* result_5 = result_3
            int32_t* result_7 = result_6
            
            if (result_6 u< result_2)
                int32_t ebx = *(edx + 0x5c)
                int32_t* result_9 = result_6
                int32_t edi_2 = result_3 << 2
                int32_t* result_8
                
                do
                    if (*(*(ebx + (result_9 << 2)) + 4) u<= *(*(edi_2 + ebx) + 4))
                        result_8 = result_5
                    else
                        result_8 = result_9
                        result_5 = result_8
                        edi_2 = result_9 << 2
                    
                    result_9 += 1
                while (result_9 u< result_2)
                
                result_3 = result_4
                i = arg2
                edx = var_c
                
                if (result_3 != result_8)
                    int32_t ecx_3 = *(edx + 0x5c)
                    int32_t edx_1 = *(ecx_3 + (result_3 << 2))
                    *(ecx_3 + (result_3 << 2)) = *(ecx_3 + (result_8 << 2))
                    *(*(var_c + 0x5c) + (result_5 << 2)) = edx_1
                    edx = var_c
            
            if (*(*(*(edx + 0x5c) + (result_3 << 2)) + 4) == 0)
                result_2 = result_3
                break
            
            result_3 = result_6
            result_4 = result_3
        while (result_3 u< result_2)
    
    result = result_2
    int32_t* result_1 = result
    
    do
        int32_t edi_4 = 0
        
        if (result != 0)
            do
                void* eax_8 = *(*(edx + 0x5c) + (edi_4 << 2))
                
                if (*(eax_8 + 4) u> 0)
                    int32_t eax_9 =
                        Concurrency::details::ResourceManager::FindBestFitExclusiveAllocation(edx, 
                        &arg_8, &arg_c, eax_8, result_2, arg4)
                    edx = var_c
                    i -= eax_9
                    
                    if (*(eax_8 + 4) == 0)
                        result_2 -= 1
                
                result = result_1
                edi_4 += 1
            while (edi_4 u< result)
    while (i != 0)

return result
