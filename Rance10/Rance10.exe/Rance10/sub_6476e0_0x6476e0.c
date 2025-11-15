// 函数: sub_6476e0
// 地址: 0x6476e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
int32_t* ecx = *(arg1 + 0x30)
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    result_1 = result
    
    if (result != 0)
        void* esi_1 = *(arg1 + 0x8c)
        int32_t edi_1 = *(arg1 + 0x90)
        
        if (esi_1 != edi_1)
            void* i = esi_1 + 0x70
            
            do
                if (i - 0x60 != i)
                    int32_t* edx_1 = i - 0x54
                    
                    do
                        sub_6492a0(&edx_1[3], edx_1, &result_1, &edx_1[3])
                        edx_1 = &edx_1[8]
                    while (&edx_1[-3] != i)
                
                esi_1 += 0x78
                i += 0x78
            while (esi_1 != edi_1)
        
        int32_t* ecx_2 = *(arg1 + 0x30)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
