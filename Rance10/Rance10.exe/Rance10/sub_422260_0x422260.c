// 函数: sub_422260
// 地址: 0x422260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t ecx

if (arg2 u< edx)
    ecx = *arg1

if (arg2 u>= edx || ecx u> arg2)
    int32_t ebx_3 = arg1[2]
    
    if (edx == ebx_3 && (ebx_3 - edx) s>> 3 u< 1)
        int32_t ecx_4 = *arg1
        int32_t edx_6 = (edx - ecx_4) s>> 3
        
        if (0x1fffffff - edx_6 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_7 = edx_6 + 1
        int32_t ebx_5 = (ebx_3 - ecx_4) s>> 3
        int32_t ecx_5 = 0
        uint32_t eax_14 = ebx_5 u>> 1
        
        if (0x1fffffff - eax_14 u>= ebx_5)
            ecx_5 = eax_14 + ebx_5
        
        if (ecx_5 u>= edx_7)
            edx_7 = ecx_5
        
        sub_422580(arg1, edx_7)
    
    int32_t* ecx_7 = arg1[1]
    
    if (ecx_7 != 0)
        *ecx_7 = *arg2
        ecx_7[1] = arg2[1]
else
    int32_t ebx = arg1[2]
    
    if (edx == ebx && (ebx - edx) s>> 3 u< 1)
        int32_t edx_2 = (edx - ecx) s>> 3
        
        if (0x1fffffff - edx_2 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_3 = edx_2 + 1
        int32_t ebx_2 = (ebx - ecx) s>> 3
        int32_t ecx_1 = 0
        uint32_t eax_5 = ebx_2 u>> 1
        
        if (0x1fffffff - eax_5 u>= ebx_2)
            ecx_1 = eax_5 + ebx_2
        
        if (ecx_1 u>= edx_3)
            edx_3 = ecx_1
        
        sub_422580(arg1, edx_3)
    
    int32_t* edx_4 = arg1[1]
    
    if (edx_4 != 0)
        int32_t* ecx_3 = *arg1 + ((arg2 - ecx) s>> 3 << 3)
        *edx_4 = *ecx_3
        edx_4[1] = ecx_3[1]
        arg1[1] += 8
        return 

arg1[1] += 8
