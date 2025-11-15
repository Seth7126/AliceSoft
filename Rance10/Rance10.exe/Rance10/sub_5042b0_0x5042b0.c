// 函数: sub_5042b0
// 地址: 0x5042b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** result = *(arg1 + 0xc4)
int32_t* edx = *(arg1 + 0xc0)
void* i = arg2

if (edx != result)
    while (*edx != i)
        edx = &edx[1]
        
        if (edx == result)
            break
    
    if (edx != result)
        void* ebx_1 = arg3
        int32_t eax_2 = (*(arg1 + 0xc4) - *(arg1 + 0xc0)) s>> 2
        arg2 = i
        
        if (eax_2 s<= ebx_1)
            return sub_504200(arg1, i)
        
        sub_504260(arg1, i)
        void* edx_1 = nullptr
        void** var_10_2 = &arg2
        
        if (ebx_1 s> 0)
            edx_1 = ebx_1
        
        return sub_404420(arg1 + 0xc0, &arg3, *(arg1 + 0xc0) + (edx_1 << 2), &arg2)

return result
