// 函数: sub_580230
// 地址: 0x580230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg4
int32_t* edx = arg1[1]
int32_t* result_1 = *arg1
int32_t* ebx = arg3
arg3 = edx
int32_t* edi = arg2
arg2 = result_1
*edi = 0x7f7fffff
*ebx = 0xff7fffff
*result = 0x7f7fffff
*arg5 = 0xff7fffff

if (result_1 != edx)
    void* esi_1 = &result_1[9]
    
    do
        result = result_1
        
        if (result_1 != esi_1)
            do
                int32_t xmm1_1 = *result
                
                if (not(*edi f<= xmm1_1))
                    *edi = xmm1_1
                
                int32_t xmm0_2 = *result
                
                if (not(xmm0_2 f<= *ebx))
                    *ebx = xmm0_2
                
                int32_t xmm1_2 = result[2]
                
                if (not(*arg4 f<= xmm1_2))
                    *arg4 = xmm1_2
                
                int32_t xmm0_4 = result[2]
                
                if (not(xmm0_4 f<= *arg5))
                    *arg5 = xmm0_4
                
                result = &result[3]
            while (result != esi_1)
            
            result_1 = arg2
            edx = arg3
        
        result_1 = &result_1[0xd]
        esi_1 += 0x34
        arg2 = result_1
    while (result_1 != edx)

return result
