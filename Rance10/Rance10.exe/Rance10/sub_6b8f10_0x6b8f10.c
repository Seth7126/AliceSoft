// 函数: sub_6b8f10
// 地址: 0x6b8f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_4
int32_t i_3 = i_4
int32_t* ebp = arg2

if (*ebp s<= 1)
    sub_6b2cf0(arg3, 0, 1)
else
    sub_6b2cf0(arg3, 1, 1)
    sub_6b2cf0(arg3, *ebp - 1, 4)

void* ebx

if (ebp[0x121] s<= 0)
    sub_6b2cf0(arg3, 0, 1)
    ebx = arg1
else
    sub_6b2cf0(arg3, 1, 1)
    sub_6b2cf0(arg3, ebp[0x121] - 1, 8)
    ebx = arg1
    i_3 = 0
    
    if (ebp[0x121] s> 0)
        void* edi_1 = &ebp[0x222]
        int32_t i
        
        do
            int32_t eax_5 = *(ebx + 4)
            int32_t ecx = 0
            
            if (eax_5 != 0)
                uint32_t j = eax_5 - 1
                
                if (eax_5 != 1)
                    do
                        ecx += 1
                        j u>>= 1
                    while (j != 0)
            
            sub_6b2cf0(arg3, *(edi_1 - 0x400), ecx)
            int32_t eax_6 = *(ebx + 4)
            int32_t ecx_1 = 0
            
            if (eax_6 != 0)
                uint32_t j_1 = eax_6 - 1
                
                if (eax_6 != 1)
                    do
                        ecx_1 += 1
                        j_1 u>>= 1
                    while (j_1 != 0)
            
            sub_6b2cf0(arg3, *edi_1, ecx_1)
            i = i_3 + 1
            edi_1 += 4
            i_3 = i
        while (i s< ebp[0x121])

int32_t result = sub_6b2cf0(arg3, 0, 2)

if (*ebp s> 1)
    int32_t i_1 = 0
    
    if (*(ebx + 4) s> 0)
        void* ebx_1 = &ebp[1]
        
        do
            result = sub_6b2cf0(arg3, *ebx_1, 4)
            i_1 += 1
            ebx_1 += 4
        while (i_1 s< *(arg1 + 4))
        
        ebp = arg2

int32_t i_2 = 0

if (*ebp s> 0)
    void* edi_2 = &ebp[0x111]
    
    do
        sub_6b2cf0(arg3, 0, 8)
        sub_6b2cf0(arg3, *(edi_2 - 0x40), 8)
        result = sub_6b2cf0(arg3, *edi_2, 8)
        i_2 += 1
        edi_2 += 4
    while (i_2 s< *ebp)

return result
