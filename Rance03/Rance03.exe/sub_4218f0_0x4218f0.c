// 函数: sub_4218f0
// 地址: 0x4218f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* edi = arg1

if (((edi[0xa] - edi[9]) & 0xfffffffc) s> 0)
    int32_t i = 0
    
    do
        *(edi[9] + (i << 2))
        arg1 = sub_4218f0(arg2)
        void* ebp_1 = *(edi[9] + (i << 2))
        
        if (ebp_1 != 0)
            sub_41cff0(ebp_1)
            arg1 = j__free(ebp_1)
        
        i += 1
    while (i s< (edi[0xa] - edi[9]) s>> 2)

int32_t i_1 = 0
int32_t i_2 = 0

if (((edi[0xd] - edi[0xc]) & 0xfffffffc) s> 0)
    do
        int32_t* edx_1 = *(edi[0xc] + (i_1 << 2))
        int32_t* ebx_1 = &edx_1[1]
        
        if (edx_1[1] != 0)
            int32_t eax_9 = arg2[1]
            
            if (ebx_1 u< eax_9)
                arg1 = *arg2
            
            if (ebx_1 u>= eax_9 || arg1 u> ebx_1)
                if (eax_9 == arg2[2])
                    int32_t* var_18_4 = arg1
                    sub_412f20(arg2)
                
                int32_t* ecx_6 = arg2[1]
                
                if (ecx_6 != 0)
                    *ecx_6 = *ebx_1
            else
                if (eax_9 == arg2[2])
                    int32_t* var_18_3 = arg1
                    sub_412f20(arg2)
                
                int32_t* ecx_4 = arg2[1]
                
                if (ecx_4 != 0)
                    *ecx_4 = *(*arg2 + ((ebx_1 - arg1) s>> 2 << 2))
                
                i_1 = i_2
            
            arg2[1] += 4
            SendMessageA(*edx_1, 0x1101, 0, *ebx_1)
            *ebx_1 = 0
        
        arg1 = j__free(*(edi[0xc] + (i_1 << 2)))
        i_1 += 1
        i_2 = i_1
    while (i_1 s< (edi[0xd] - edi[0xc]) s>> 2)

if (edi[1] != 0)
    int32_t eax_17 = arg2[1]
    
    if (&edi[1] u< eax_17)
        arg1 = *arg2
    
    int32_t* ecx_9
    
    if (&edi[1] u>= eax_17 || arg1 u> &edi[1])
        if (eax_17 == arg2[2])
            int32_t* var_18_8 = arg1
            sub_412f20(arg2)
        
        ecx_9 = arg2[1]
        
        if (ecx_9 != 0)
            *ecx_9 = edi[1]
    else
        if (eax_17 == arg2[2])
            int32_t* var_18_7 = arg1
            sub_412f20(arg2)
        
        ecx_9 = arg2[1]
        
        if (ecx_9 != 0)
            *ecx_9 = *(*arg2 + ((&edi[1] - arg1) s>> 2 << 2))
    arg2[1] += 4
    SendMessageA(*edi, 0x1101, 0, edi[1])
    edi[1] = 0

edi[0xa] = edi[9]
int32_t result = edi[0xc]
edi[0xd] = result
return result
