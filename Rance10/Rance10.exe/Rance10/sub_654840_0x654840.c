// 函数: sub_654840
// 地址: 0x654840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
int32_t* esi = arg1
void* ebx = esi[0x6c]

while (*(ebx + 0x10) s< 0x8000)
    int32_t temp0_1 = *(ebx + 0x14)
    *(ebx + 0x14) -= 1
    
    if (temp0_1 - 1 s< 0)
        if (esi[0x65] != 0)
            arg1 = 0
        else
            int32_t* edi_1 = esi[6]
            
            if (edi_1[1] == 0)
                char eax_2
                eax_2, arg1 = edi_1[3](esi)
                
                if (eax_2 == 0)
                    *(*esi + 0x14) = 0x19
                    (**esi)(esi)
            
            char* eax_6 = *edi_1
            edi_1[1] -= 1
            arg1.b = *eax_6
            arg1 = zx.d(arg1.b)
            *edi_1 = &eax_6[1]
            
            if (arg1 == 0xff)
                uint32_t i
                
                do
                    int32_t* edi_2 = esi[6]
                    
                    if (edi_2[1] == 0)
                        char eax_9
                        eax_9, arg1 = edi_2[3](esi)
                        
                        if (eax_9 == 0)
                            *(*esi + 0x14) = 0x19
                            (**esi)(esi)
                    
                    char* eax_13 = *edi_2
                    edi_2[1] -= 1
                    arg1.b = *eax_13
                    *edi_2 = &eax_13[1]
                    i = zx.d(arg1.b)
                while (i == 0xff)
                
                if (arg1.b != 0)
                    esi[0x65] = i
                    arg1 = 0
                else
                    arg1 = 0xff
        
        int32_t eax_17 = *(ebx + 0xc) << 8 | arg1
        int32_t temp1_1 = *(ebx + 0x14)
        *(ebx + 0x14) += 8
        *(ebx + 0xc) = eax_17
        
        if (temp1_1 + 8 s< 0)
            int32_t temp2_1 = *(ebx + 0x14)
            *(ebx + 0x14) += 1
            
            if (temp2_1 == 0xffffffff)
                *(ebx + 0x10) = 0x8000
    
    *(ebx + 0x10) <<= 1

uint32_t edx = zx.d(*arg2)
char ecx = (*(ebx + 0x14)).b
int32_t eax_20 = *(((edx & 0x7f) << 2) + &data_76db18)
var_4:2.b = eax_20.b
int32_t eax_21 = eax_20 s>> 8
var_4:3.b = eax_21.b
int32_t eax_22 = eax_21 s>> 8
int32_t esi_2 = *(ebx + 0x10) - eax_22
*(ebx + 0x10) = esi_2
int32_t esi_3 = esi_2 << ecx
int32_t ecx_1 = *(ebx + 0xc)

if (ecx_1 s< esi_3)
    int32_t ecx_4 = *(ebx + 0x10)
    
    if (ecx_4 s>= 0x8000)
        return edx s>> 7
    
    if (ecx_4 s>= eax_22)
        ecx_4.b = edx.b
        ecx_4.b &= 0x80
        ecx_4.b ^= var_4:3.b
        *arg2 = ecx_4.b
        return edx s>> 7
    
    eax_22.b = edx.b
else
    bool cond:0_1 = *(ebx + 0x10) s>= eax_22
    *(ebx + 0x10) = eax_22
    eax_22.b = edx.b
    *(ebx + 0xc) = ecx_1 - esi_3
    
    if (not(cond:0_1))
        eax_22.b &= 0x80
        eax_22.b ^= var_4:3.b
        *arg2 = eax_22.b
        return edx s>> 7

eax_22.b &= 0x80
eax_22.b ^= var_4:2.b
*arg2 = eax_22.b
return (edx ^ 0x80) s>> 7
