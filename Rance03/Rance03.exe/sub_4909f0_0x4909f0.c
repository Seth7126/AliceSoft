// 函数: sub_4909f0
// 地址: 0x4909f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_1 = arg1

if (*(arg1 + 0x10) == 0)
    return 

while (*(arg1 + 0x14) != 0)
    int32_t i_2 = *(arg1 + 0x4c)
    int32_t i = *(arg1 + 0x44)
    i_1 = i
    
    if (i_2 != 0xffffffff)
        i = i_2
        *(arg1 + 0x4c) = 0xffffffff
        i_1 = i
    
    int32_t edx_1 = arg5[1]
    int32_t* eax = *arg5
    
    if (eax != edx_1)
        while (*eax != i)
            eax = &eax[1]
            
            if (eax == edx_1)
                break
        
        if (eax != edx_1)
            break
    
    sub_4158d0(arg5, &i_1)
    int32_t i_3 = i_1
    sub_490ac0(arg1, i_3)
    
    if (*(arg1 + 0x4c) == 0xffffffff)
        sub_490b30(arg1, i_3.b, arg2)
        int32_t edi_4 = (*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2
        int32_t edi_5 = edi_4 - 1
        
        if (edi_4 - 1 s>= 0)
            int32_t temp2_1
            
            do
                sub_48df90(*(*(arg1 + 0x1c) + (edi_5 << 2)), i_3, arg2, arg3, 1, 0, arg4, arg6)
                temp2_1 = edi_5
                edi_5 -= 1
            while (temp2_1 - 1 s>= 0)
        
        break
    
    if (*(arg1 + 0x10) == 0)
        return 
