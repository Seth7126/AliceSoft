// 函数: sub_636160
// 地址: 0x636160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg4
int16_t* var_8 = arg3

for (; i != 0; i = i[4])
    int32_t eax = i[2]
    int32_t ebx_1 = 0
    
    if (eax != 0)
        int32_t edi_1 = *i
        
        do
            int32_t edx = 0
            int16_t* esi_1 = arg3
            
            if (edi_1 != 0)
                int16_t* eax_2 = i[3] + (ebx_1 << 1)
                
                do
                    arg3.w = *esi_1
                    esi_1 = &esi_1[1]
                    
                    if (arg3.w != *eax_2)
                        break
                    
                    edx += 1
                    eax_2 = &eax_2[1]
                while (edx u< edi_1)
                
                eax = i[2]
                arg3 = var_8
            
            if (esi_1 == arg2)
                return arg2
            
            ebx_1 += edi_1
        while (ebx_1 u< eax)

return arg3
