// 函数: sub_58c280
// 地址: 0x58c280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t ecx

if (arg2 u< edx)
    ecx = *arg1

if (arg2 u>= edx || ecx u> arg2)
    int32_t ebx_3 = arg1[2]
    
    if (edx == ebx_3 && (ebx_3 - edx) s>> 2 u< 1)
        int32_t ecx_4 = *arg1
        int32_t edx_6 = (edx - ecx_4) s>> 2
        
        if (0x3fffffff - edx_6 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_7 = edx_6 + 1
        int32_t ebx_5 = (ebx_3 - ecx_4) s>> 2
        int32_t ecx_5 = 0
        uint32_t eax_13 = ebx_5 u>> 1
        
        if (0x3fffffff - eax_13 u>= ebx_5)
            ecx_5 = eax_13 + ebx_5
        
        if (ecx_5 u>= edx_7)
            edx_7 = ecx_5
        
        sub_58c390(arg1, edx_7)
    
    void** ecx_7 = arg1[1]
    
    if (ecx_7 != 0)
        void* eax = *arg2
        *arg2 = nullptr
        *ecx_7 = eax
else
    int32_t ebx = arg1[2]
    
    if (edx == ebx && (ebx - edx) s>> 2 u< 1)
        int32_t edx_2 = (edx - ecx) s>> 2
        
        if (0x3fffffff - edx_2 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_3 = edx_2 + 1
        int32_t ebx_2 = (ebx - ecx) s>> 2
        int32_t ecx_1 = 0
        uint32_t eax_5 = ebx_2 u>> 1
        
        if (0x3fffffff - eax_5 u>= ebx_2)
            ecx_1 = eax_5 + ebx_2
        
        if (ecx_1 u>= edx_3)
            edx_3 = ecx_1
        
        sub_58c390(arg1, edx_3)
    
    int32_t* edx_4 = arg1[1]
    
    if (edx_4 != 0)
        int32_t* ecx_3 = *arg1 + ((arg2 - ecx) s>> 2 << 2)
        int32_t eax_8 = *ecx_3
        *ecx_3 = 0
        *edx_4 = eax_8
        arg1[1] += 4
        return 

arg1[1] += 4
