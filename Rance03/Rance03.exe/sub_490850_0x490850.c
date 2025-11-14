// 函数: sub_490850
// 地址: 0x490850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_2 = (*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2
int32_t ebx_3 = ebx_2 - 1

if (ebx_2 - 1 s< 0)
    return 

int32_t temp2_1

do
    int32_t* i = *(*(arg1 + 0x1c) + (ebx_3 << 2))
    void* edi_1 = i[7]
    
    if (edi_1 != 0 && i[0xa].b != 0)
        for (i = *(edi_1 + 0x14); i != *(edi_1 + 0x18); i = &i[1])
            void* ecx_1 = *(*i + 4)
            
            if (ecx_1 != 0)
                *(ecx_1 + 0x14) = *arg2
        
        *arg2 += 1
    else if (i[8] == 0 || *(i + 0x29) == 0)
        void* ecx_3 = i[9]
        
        if (ecx_3 != 0 && *(i + 0x2a) != 0)
            sub_48a920(ecx_3, arg2)
    else
        sub_490850(arg2)
    
    temp2_1 = ebx_3
    ebx_3 -= 1
while (temp2_1 - 1 s>= 0)
