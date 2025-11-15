// 函数: sub_454ab0
// 地址: 0x454ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_2 = arg1[1]
void* ebp = *arg1
int32_t eax

if (ebp == edx_2 || arg3 u< arg1[3] || arg3 u> arg1[4])
    eax.b = 0
    return eax

int32_t edx_1 = (edx_2 - ebp) s>> 2
int32_t esi = 0

if (edx_1 s> 0)
    int32_t* ebx_1 = ebp + 4
    
    do
        int32_t edi_1 = *(ebp + (esi << 2))
        
        if (edi_1 != 0xffffffff)
            eax = esi + 1
            
            if (eax s< edx_1)
                int32_t* ecx = ebx_1
                
                do
                    if (*ecx != 0xffffffff)
                        if (eax s>= edx_1 || arg3 u< edi_1 || arg3 u>= *(ebp + (eax << 2)))
                            break
                        
                        *arg2 = esi
                        int32_t* eax_1
                        eax_1.b = 1
                        return eax_1
                    
                    eax += 1
                    ecx = &ecx[1]
                while (eax s< edx_1)
        
        esi += 1
        ebx_1 = &ebx_1[1]
    while (esi s< edx_1)

eax.b = 0
return eax
