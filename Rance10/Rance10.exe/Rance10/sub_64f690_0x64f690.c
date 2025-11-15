// 函数: sub_64f690
// 地址: 0x64f690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* result = esi[0x66]
void* result_1 = result

if (esi[0x3f].b != 0)
    result = sub_64e520(result)

int32_t i = 0
arg1 = nullptr
int32_t var_8 = 0

if (esi[0x45] s> 0)
    void* ebp_1 = &esi[0x46]
    
    do
        result = *ebp_1
        
        if (esi[0x57] == 0 && esi[0x59] == 0)
            int32_t edi_1 = *(result + 0x14)
            
            if (*(&arg1 + edi_1) == 0)
                if (esi[edi_1 + 0x1e] == 0)
                    void* eax_2 = (*esi[1])(esi, 0, 0x112)
                    *(eax_2 + 0x111) = 0
                    esi[edi_1 + 0x1e] = eax_2
                
                sub_64f450(result_1, esi[edi_1 + 0x1e], esi, *(result_1 + (edi_1 << 2) + 0x4c))
                *(&arg1 + edi_1) = 1
        
        if (esi[0x58] != 0)
            int32_t edi_2 = *(result + 0x18)
            
            if (*(&var_8 + edi_2) == 0)
                if (esi[edi_2 + 0x22] == 0)
                    void* eax_6 = (*esi[1])(esi, 0, 0x112)
                    *(eax_6 + 0x111) = 0
                    esi[edi_2 + 0x22] = eax_6
                
                result =
                    sub_64f450(result_1, esi[edi_2 + 0x22], esi, *(result_1 + (edi_2 << 2) + 0x5c))
                *(&var_8 + edi_2) = 1
        
        i += 1
        ebp_1 += 4
    while (i s< esi[0x45])

return result
