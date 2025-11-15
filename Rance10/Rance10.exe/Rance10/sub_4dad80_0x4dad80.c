// 函数: sub_4dad80
// 地址: 0x4dad80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xc) == 0)
    return 

int32_t* esi_1 = arg2

while (*(arg1 + 0x10) != 0)
    void* i_1 = *(arg1 + 0x50)
    void* i = *(arg1 + 0x48)
    arg2 = i
    
    if (i_1 != 0xffffffff)
        i = i_1
        *(arg1 + 0x50) = 0xffffffff
        arg2 = i
    
    int32_t eax = esi_1[1]
    int32_t* ecx = *esi_1
    
    if (ecx != eax)
        while (*ecx != i)
            ecx = &ecx[1]
            
            if (ecx == eax)
                break
        
        if (ecx != eax)
            break
    
    sub_404370(esi_1, &arg2)
    void*** ebx_1 = arg2
    sub_4dae30(arg1, ebx_1)
    
    if (*(arg1 + 0x50) == 0xffffffff)
        sub_4daec0(arg1, ebx_1, *(arg3 + 0xa8))
        sub_4daf10(arg1, ebx_1, 1, 0, arg3, 1)
        break
    
    if (*(arg1 + 0xc) == 0)
        return 
