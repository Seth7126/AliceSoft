// 函数: sub_489250
// 地址: 0x489250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
void* result_1 = result
int32_t* i = *(result + 0x1c)

if (i != *(result + 0x20))
    int32_t* ebx_1 = arg2
    
    do
        void* eax = *i
        int32_t* j = *(eax + 0x14)
        
        while (j != *(eax + 0x18))
            void* eax_2 = *(*j + 4)
            int32_t ebp_1
            
            if (eax_2 != 0)
                ebp_1 = *(eax_2 + 8)
            else
                ebp_1 = 0xffffffff
            
            int32_t eax_3 = ebx_1[1]
            int32_t var_c = ebp_1
            int32_t ecx_1
            
            if (&var_c u< eax_3)
                ecx_1 = *ebx_1
            
            if (&var_c u>= eax_3 || ecx_1 u> &var_c)
                int32_t edx_5 = ebx_1[2]
                
                if (eax_3 == edx_5 && (edx_5 - eax_3) s>> 2 u< 1)
                    int32_t eax_11 = (eax_3 - *ebx_1) s>> 2
                    
                    if (0x3fffffff - eax_11 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    int32_t edx_7 = (edx_5 - *ebx_1) s>> 2
                    uint32_t ecx_15 = edx_7 u>> 1
                    int32_t edx_8
                    
                    if (0x3fffffff - ecx_15 u>= edx_7)
                        edx_8 = edx_7 + ecx_15
                    else
                        edx_8 = 0
                    
                    if (edx_8 u< eax_11 + 1)
                        edx_8 = eax_11 + 1
                    
                    sub_412f90(ebx_1, edx_8)
                
                int32_t* eax_14 = ebx_1[1]
                
                if (eax_14 != 0)
                    *eax_14 = ebp_1
            else
                int32_t edx_1 = ebx_1[2]
                
                if (eax_3 == edx_1 && (edx_1 - eax_3) s>> 2 u< 1)
                    int32_t eax_5 = (eax_3 - *ebx_1) s>> 2
                    
                    if (0x3fffffff - eax_5 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    int32_t edx_3 = (edx_1 - *ebx_1) s>> 2
                    uint32_t ecx_7 = edx_3 u>> 1
                    int32_t edx_4
                    
                    if (0x3fffffff - ecx_7 u>= edx_3)
                        edx_4 = edx_3 + ecx_7
                    else
                        edx_4 = 0
                    
                    if (edx_4 u< eax_5 + 1)
                        edx_4 = eax_5 + 1
                    
                    sub_412f90(ebx_1, edx_4)
                
                int32_t* ecx_9 = ebx_1[1]
                
                if (ecx_9 != 0)
                    *ecx_9 = *(*ebx_1 + ((&var_c - ecx_1) s>> 2 << 2))
            
            j = &j[1]
            ebx_1[1] += 4
        
        result = result_1
        i = &i[1]
    while (i != *(result + 0x20))

return result
