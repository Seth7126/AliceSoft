// 函数: sub_4a9fd0
// 地址: 0x4a9fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg1[2]

if (arg1[3] s>= i)
    return 

int32_t* eax = arg1[1]
int32_t ebx_1

do
    ebx_1 = arg1[3]
    int32_t edi_1 = *(*eax + (ebx_1 << 2))
    int32_t var_14_1 = edi_1
    void* eax_2 = sub_4f15e0(*arg1)
    
    if (eax_2 != 0)
        int32_t edx_1 = *(eax_2 + 8)
        
        if (edi_1 s< edx_1 || *(eax_2 + 4) + edx_1 s<= edi_1)
            eax = nullptr
        else
            eax = *(*(eax_2 + 0xc) + ((edi_1 - edx_1) << 2))
        
        arg1[4] = eax
        
        if (eax != 0)
            break
    else
        arg1[4] = eax_2
    
    arg1[3] = ebx_1 + 1
    eax = arg1[1]
while (ebx_1 + 1 s< i)
