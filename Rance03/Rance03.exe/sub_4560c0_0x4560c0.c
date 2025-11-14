// 函数: sub_4560c0
// 地址: 0x4560c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *arg1
int32_t edx = *arg2
int32_t* result

if (ecx u>= edx)
    if (ecx u> edx)
        result.b = 0
        return result
    
    int16_t ecx_1 = arg1[1].w
    int16_t edx_1 = arg2[1].w
    
    if (ecx_1 u>= edx_1)
        if (ecx_1 u> edx_1)
            result.b = 0
            return result
        
        int16_t ecx_2 = *(arg1 + 6)
        int16_t edx_2 = *(arg2 + 6)
        
        if (ecx_2 u>= edx_2)
            if (ecx_2 u> edx_2)
                result.b = 0
                return result
            
            char* ecx_3 = &arg1[2]
            
            do
                result.b = *ecx_3
                edx_2.b = *(arg2 - arg1 + ecx_3)
                
                if (result.b u< edx_2.b)
                    result.b = 1
                    return result
                
                if (result.b u> edx_2.b)
                    break
                
                ecx_3 = &ecx_3[1]
            while (0xfffffff8 - arg1 + ecx_3 s< 8)
            
            result.b = 0
            return result

result.b = 1
return result
