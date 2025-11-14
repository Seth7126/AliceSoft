// 函数: sub_4cff70
// 地址: 0x4cff70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
sub_468ec0(arg2, *(arg1 + 8))
int32_t* result = *(arg1 + 4)
int32_t* i = *result

if (i != result)
    var_4:3.b = 0
    
    do
        int32_t eax = i[9]
        void* ecx_1 = &i[4]
        int32_t ebx_2 = *(ecx_1 + 0x10)
        void* edx_1
        
        if (eax u< 0x10)
            edx_1 = ecx_1
        else
            edx_1 = *ecx_1
        
        if (eax u>= 0x10)
            ecx_1 = *ecx_1
        
        void* var_18_1 = arg2
        sub_468ff0(arg2 + 4, *(arg2 + 8), ecx_1, edx_1 + ebx_2)
        char* ecx_3 = *(arg2 + 8)
        
        if (&var_4:3 u< ecx_3)
            result = *(arg2 + 4)
        
        if (&var_4:3 u>= ecx_3 || result u> &var_4:3)
            if (ecx_3 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            result = *(arg2 + 8)
            
            if (result != 0)
                *result = 0
        else
            if (ecx_3 == *(arg2 + 0xc))
                sub_403590(arg2 + 4, 1)
            
            ecx_3 = *(arg2 + 8)
            
            if (ecx_3 != 0)
                result.b = *(&var_4:3 - result + *(arg2 + 4))
                *ecx_3 = result.b
        
        *(arg2 + 8) += 1
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                result = i[1]
                
                if (*(result + 0xd) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0xd) == 0)
                    i = result
                    result = *i
    while (i != *(arg1 + 4))

result.b = 1
return result
