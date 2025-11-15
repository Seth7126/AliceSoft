// 函数: sub_56a150
// 地址: 0x56a150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg1[1]
int32_t ecx

if (arg2 u< edx)
    ecx = *arg1

int32_t* var_14_2
int32_t* ecx_6

if (arg2 u>= edx || ecx u> arg2)
    int32_t ebx_3 = arg1[2]
    
    if (edx == ebx_3 && (ebx_3 - edx) s>> 3 u< 1)
        int32_t ecx_3 = *arg1
        int32_t edx_5 = (edx - ecx_3) s>> 3
        
        if (0x1fffffff - edx_5 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_6 = edx_5 + 1
        int32_t ebx_5 = (ebx_3 - ecx_3) s>> 3
        int32_t ecx_4 = 0
        uint32_t eax_13 = ebx_5 u>> 1
        
        if (0x1fffffff - eax_13 u>= ebx_5)
            ecx_4 = eax_13 + ebx_5
        
        if (ecx_4 u>= edx_6)
            edx_6 = ecx_4
        
        sub_5686a0(arg1, edx_6)
    
    ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        var_14_2 = arg2
    label_56a219:
        *ecx_6 = 0
        ecx_6[1] = 0
        sub_4323a0(ecx_6, var_14_2)
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
        
        sub_5686a0(arg1, edx_3)
    
    ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        var_14_2 = *arg1 + ((arg2 - ecx) s>> 3 << 3)
        goto label_56a219
arg1[1] += 8
