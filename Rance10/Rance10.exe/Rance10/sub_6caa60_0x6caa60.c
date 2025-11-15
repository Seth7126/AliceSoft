// 函数: sub_6caa60
// 地址: 0x6caa60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm1 = *arg1
int32_t xmm0 = *arg2
int32_t* result

if (xmm0 f<= xmm1)
    if (xmm1 f> xmm0)
        result.b = 0
        return result
    
    int32_t xmm1_1 = arg1[1]
    int32_t xmm0_1 = arg2[1]
    
    if (not(xmm0_1 f> xmm1_1))
        if (xmm1_1 f> xmm0_1)
            result.b = 0
            return result
        
        int32_t xmm1_2 = arg1[2]
        int32_t xmm0_2 = arg2[2]
        
        if (not(xmm0_2 f> xmm1_2) && (xmm1_2 f> xmm0_2 || not(arg2[3] f> arg1[3])))
            result.b = 0
            return result

result.b = 1
return result
