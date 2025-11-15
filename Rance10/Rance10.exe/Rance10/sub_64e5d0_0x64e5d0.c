// 函数: sub_64e5d0
// 地址: 0x64e5d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (sub_64e2d0(eax, 0x7f, arg1, 7) == 0)
    return 0

char* eax_2 = *arg1
arg1[2] = 0
arg1[3] = 0
*eax_2 = 0xff
*arg1 += 1
int32_t temp0 = arg1[1]
arg1[1] -= 1

if (temp0 != 1)
    goto label_64e62b

void* eax_3 = arg1[8]
int32_t* edi_1 = *(eax_3 + 0x18)

if (edi_1[3](eax_3) != 0)
    *arg1 = *edi_1
    arg1[1] = edi_1[1]
label_64e62b:
    **arg1 = arg2 - 0x30
    *arg1 += 1
    int32_t temp1_1 = arg1[1]
    arg1[1] -= 1
    
    if (temp1_1 != 1)
        goto label_64e655
    
    void* eax_9 = arg1[8]
    int32_t* edi_2 = *(eax_9 + 0x18)
    
    if (edi_2[3](eax_9) != 0)
        *arg1 = *edi_2
        arg1[1] = edi_2[1]
    label_64e655:
        int32_t i = 0
        
        if (*(arg1[8] + 0x114) s> 0)
            void* edx = &arg1[4]
            
            do
                *edx = 0
                edx += 4
                i += 1
            while (i s< *(arg1[8] + 0x114))
        
        void* result
        result.b = 1
        return result

return 0
