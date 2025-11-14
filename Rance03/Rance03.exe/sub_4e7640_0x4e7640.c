// 函数: sub_4e7640
// 地址: 0x4e7640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t ebx = 0
int32_t result = arg1[1]

if (result s> 0)
    do
        int32_t edx_1 = arg1[2]
        int32_t edi_1 = edx_1 + ebx
        
        if (edi_1 s>= edx_1 && result + edx_1 s> edi_1)
            void* eax_2 = *(arg1[3] + ((edi_1 - edx_1) << 2))
            
            if (eax_2 != 0)
                int32_t* eax_3 = *(eax_2 + 0x74)
                
                if (sub_4e7980(arg1, edi_1) != 0)
                    int32_t eax_5 = arg2[1]
                    var_4 = eax_3
                    int32_t ecx_3
                    
                    if (&var_4 u< eax_5)
                        ecx_3 = *arg2
                    
                    if (&var_4 u>= eax_5 || ecx_3 u> &var_4)
                        if (eax_5 == arg2[2])
                            sub_415950(arg2, 1)
                        
                        void** eax_8 = arg2[1]
                        
                        if (eax_8 != 0)
                            *eax_8 = eax_3
                    else
                        if (eax_5 == arg2[2])
                            sub_415950(arg2, 1)
                        
                        int32_t* ecx_5 = arg2[1]
                        
                        if (ecx_5 != 0)
                            *ecx_5 = *(*arg2 + ((&var_4 - ecx_3) s>> 2 << 2))
                    
                    arg2[1] += 4
        
        result = arg1[1]
        ebx += 1
    while (ebx s< result)

return result
