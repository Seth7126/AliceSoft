// 函数: sub_5fc0e0
// 地址: 0x5fc0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = *arg1

for (int32_t edi = arg1[1]; i != edi; i += 0x38)
    *(i + 0x20) = 0
    *(i + 0x30) = 0
    *(i + 0x34) = 0
    int32_t ebp_1 = *(i + 0x28)
    
    for (int32_t* j = *(i + 0x24); j != ebp_1; j = &j[4])
        (**j)(0)
    
    *(i + 0x28) = *(i + 0x24)

int32_t result = arg1[4]
int32_t* edi_1 = arg1[3]
int32_t result_2 = result

if (edi_1 != result)
    do
        result = edi_1[1]
        void* i_1 = *edi_1
        int32_t result_1 = result
        
        for (; i_1 != result; i_1 += 0x38)
            *(i_1 + 0x20) = 0
            *(i_1 + 0x30) = 0
            *(i_1 + 0x34) = 0
            int32_t ebp_2 = *(i_1 + 0x28)
            int32_t* ebx_1 = *(i_1 + 0x24)
            
            if (ebx_1 != ebp_2)
                do
                    (**ebx_1)(0)
                    ebx_1 = &ebx_1[4]
                while (ebx_1 != ebp_2)
                
                result = result_1
            
            *(i_1 + 0x28) = *(i_1 + 0x24)
        
        edi_1 = &edi_1[3]
    while (edi_1 != result_2)

return result
