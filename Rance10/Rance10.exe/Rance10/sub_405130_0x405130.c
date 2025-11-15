// 函数: sub_405130
// 地址: 0x405130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2[4]
int32_t edi = 0xffffffff
char* var_8 = arg1
int32_t esi = 0
int32_t var_4 = 0

if (ebp s> 0)
    int32_t ecx = arg2[5]
    
    do
        char* eax_1
        
        if (ecx u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        eax_1.b = eax_1[esi]
        int32_t eax_3
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u> 0xf)
                int32_t* eax_2
                
                if (ecx u< 0x10)
                    eax_2 = arg2
                else
                    eax_2 = *arg2
                
                eax_3 = 1
                
                if (*(eax_2 + esi) == 0x5c)
                    edi = esi
            else
                eax_3 = 2
        else
            eax_3 = 2
        
        esi += eax_3
    while (esi s< ebp)
    
    if (edi != 0xffffffff)
        sub_405480(arg2, arg1, edi + 1, ebp)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, arg2, 0, 0xffffffff)
return arg1
