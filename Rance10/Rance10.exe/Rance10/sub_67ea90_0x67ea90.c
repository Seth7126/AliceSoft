// 函数: sub_67ea90
// 地址: 0x67ea90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 0x14)
int32_t result_1 = 0
int32_t result = 0xffffffff

if (ebx != 0)
    int32_t edi_1 = *(arg1 + 0x18)
    
    do
        void* eax_1
        
        if (edi_1 u< 0x10)
            eax_1 = arg1 + 4
        else
            eax_1 = *(arg1 + 4)
        
        eax_1.b = *(eax_1 + result_1)
        int32_t eax_3
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u> 0xf)
                void* eax_2
                
                if (edi_1 u< 0x10)
                    eax_2 = arg1 + 4
                else
                    eax_2 = *(arg1 + 4)
                
                eax_3 = 1
                
                if (*(eax_2 + result_1) == 0x5c)
                    result = result_1
            else
                eax_3 = 2
        else
            eax_3 = 2
        
        result_1 += eax_3
    while (result_1 u< ebx)

return result
