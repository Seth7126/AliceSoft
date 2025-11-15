// 函数: sub_634d30
// 地址: 0x634d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg2
int32_t* i_1 = i

while (i != 0)
    int32_t j = 0
    int32_t j_1 = 0
    
    if (i[2] u> 0)
        int32_t ebp_1 = *i
        
        do
            int32_t edx = 0
            int16_t* ecx = arg4
            
            if (ebp_1 != 0)
                int16_t* ebx_1 = i[3] + (j << 1)
                
                do
                    int32_t eax
                    eax.w = *ecx
                    ecx = &ecx[1]
                    
                    if (eax.w != *ebx_1)
                        break
                    
                    edx += 1
                    ebx_1 = &ebx_1[1]
                while (edx u< ebp_1)
                
                j = j_1
                i = i_1
            
            if (ecx == arg5)
                *arg3 = arg5
                return arg3
            
            j += ebp_1
            j_1 = j
        while (j u< i[2])
    
    i = i[4]
    i_1 = i

*arg3 = arg4
return arg3
