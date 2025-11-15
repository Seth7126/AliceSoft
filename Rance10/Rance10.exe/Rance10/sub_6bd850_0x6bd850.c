// 函数: sub_6bd850
// 地址: 0x6bd850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1
int32_t i_2 = 0
sub_6b2cf0(arg2, *result_1, 0x18)
sub_6b2cf0(arg2, result_1[1], 0x18)
sub_6b2cf0(arg2, result_1[2] - 1, 0x18)
sub_6b2cf0(arg2, result_1[3] - 1, 6)
int32_t result = sub_6b2cf0(arg2, result_1[5], 8)
int32_t i = 0

if (result_1[3] s> 0)
    void* esi = &result_1[6]
    
    do
        uint32_t j_2 = *esi
        int32_t ecx_1 = 0
        uint32_t j = j_2
        
        if (j == 0)
            sub_6b2cf0(arg2, j_2, 4)
        else
            do
                ecx_1 += 1
                j u>>= 1
            while (j != 0)
            
            if (ecx_1 s<= 3)
                sub_6b2cf0(arg2, j_2, 4)
            else
                sub_6b2cf0(arg2, j_2, 3)
                sub_6b2cf0(arg2, 1, 1)
                sub_6b2cf0(arg2, *esi s>> 3, 5)
        
        uint32_t j_1 = *esi
        int32_t edx_1 = 0
        
        for (; j_1 != 0; j_1 u>>= 1)
            edx_1 += j_1 & 1
        
        result = arg1
        i += 1
        i_2 += edx_1
        esi += 4
    while (i s< *(result + 0xc))
    
    result_1 = result

if (i_2 s> 0)
    void* esi_1 = &result_1[0x46]
    int32_t i_1
    
    do
        result = sub_6b2cf0(arg2, *esi_1, 8)
        esi_1 += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
