// 函数: sub_6013d0
// 地址: 0x6013d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x2c)
int32_t edx = 0
int32_t eax

if (edi s> 0)
    int32_t esi_1 = *(arg1 + 0x30)
    
    do
        char* eax_1
        
        if (esi_1 u< 0x10)
            eax_1 = arg1 + 0x1c
        else
            eax_1 = *(arg1 + 0x1c)
        
        eax_1.b = eax_1[edx]
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u> 0xf)
                void* eax_2
                
                if (esi_1 u< 0x10)
                    eax_2 = arg1 + 0x1c
                else
                    eax_2 = *(arg1 + 0x1c)
                
                if (*(eax_2 + edx) == 0x40)
                    eax_2.b = 1
                    return eax_2
                
                eax = 1
            else
                eax = 2
        else
            eax = 2
        
        edx += eax
    while (edx s< edi)

eax.b = 0
return eax
