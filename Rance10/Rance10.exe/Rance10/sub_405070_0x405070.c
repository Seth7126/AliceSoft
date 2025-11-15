// 函数: sub_405070
// 地址: 0x405070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2[4]
void* edi = 0xffffffff
void* esi = nullptr
int32_t var_4 = 0

if (ebp s> 0)
    int32_t ecx = arg2[5]
    
    do
        char* eax_1
        
        if (ecx u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        eax_1.b = *(eax_1 + esi)
        int32_t eax_4
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u> 0xf)
                char* eax_2
                
                if (ecx u< 0x10)
                    eax_2 = arg2
                else
                    eax_2 = *arg2
                
                if (*(eax_2 + esi) == 0x2e)
                    edi = esi
                
                int32_t* eax_3
                
                if (ecx u< 0x10)
                    eax_3 = arg2
                else
                    eax_3 = *arg2
                
                eax_4 = 1
                
                if (*(eax_3 + esi) == 0x5c)
                    edi = 0xffffffff
            else
                eax_4 = 2
        else
            eax_4 = 2
        
        esi += eax_4
    while (esi s< ebp)
    
    if (edi != 0xffffffff)
        sub_405480(arg2, arg1, 0, edi)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_403590(arg1, arg2, 0, 0xffffffff)
return arg1
