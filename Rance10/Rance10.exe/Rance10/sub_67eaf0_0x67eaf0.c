// 函数: sub_67eaf0
// 地址: 0x67eaf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0x14)

if (edi == 0)
    return 

void* edx_1 = nullptr
int32_t ebx

if (edi s> 0)
    int32_t var_c_1 = ebx
    int32_t esi_1 = *(arg1 + 0x18)
    
    do
        void* eax_1
        
        if (esi_1 u< 0x10)
            eax_1 = arg1 + 4
        else
            eax_1 = *(arg1 + 4)
        
        eax_1.b = *(eax_1 + edx_1)
        int32_t* eax
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u> 0xf)
                void* eax_2
                
                if (esi_1 u< 0x10)
                    eax_2 = arg1 + 4
                else
                    eax_2 = *(arg1 + 4)
                
                eax = 1
                ebx.b = *(eax_2 + edx_1) == 0x5c
            else
                ebx.b = 0
                eax = 2
        else
            ebx.b = 0
            eax = 2
        
        edx_1 += eax
    while (edx_1 s< edi)

if (edi s<= 0 || ebx.b == 0)
    sub_407430(arg1 + 4, U"\", 1)
