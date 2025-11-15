// 函数: sub_5ff680
// 地址: 0x5ff680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = (*(*(arg1 + 0x20) + 0x10))()
int32_t ebx = 0
int32_t result

if (ebp s> 0)
    int32_t* edi_1 = nullptr
    
    do
        if (*(arg1 + 0x14) != 0)
            result = *(arg1 + 0x10)
        else
            result = 0
        
        if (*(edi_1 + result) == arg3)
            int32_t eax_1
            
            if (*(arg1 + 0x14) != 0)
                eax_1 = *(arg1 + 0x10)
            else
                eax_1 = 0
            
            int32_t eax_2
            
            if (*(arg1 + 0x14) != 0)
                eax_2 = *(arg1 + 0x10)
            else
                eax_2 = 0
            
            if (sub_5ff090(arg1, arg2, *(edi_1 + eax_2 + 4), *(edi_1 + eax_1 + 8)).b == 0)
                result.b = 0
                return result
        
        ebx += 1
        edi_1 = &edi_1[3]
    while (ebx s< ebp)

result.b = 1
return result
