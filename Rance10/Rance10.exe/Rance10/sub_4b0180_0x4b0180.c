// 函数: sub_4b0180
// 地址: 0x4b0180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg1
int32_t* var_4 = ebp
int32_t* i = *ebp
int32_t* i_1 = i

if (i == ebp[1])
    return 

void* ebx_1 = &i[3]

do
    int32_t ecx_1 = sub_4af7a0(i, arg2, arg3)
    
    if (*i != *(ebx_1 - 8))
        i = &i[3]
        ebx_1 += 0xc
        i_1 = i
    else
        int32_t eax_1 = ebp[1]
        void* edi_1 = ebx_1
        int32_t var_8_1 = eax_1
        
        if (ebx_1 != eax_1)
            do
                ecx_1 = sub_4274a0(edi_1 + i - ebx_1, edi_1)
                edi_1 += 0xc
            while (edi_1 != eax_1)
            
            i = i_1
            ebp = var_4
        
        void* edx_1 = ebp[1]
        void** var_20_3 = arg3
        int32_t var_24_2 = ecx_1
        sub_4ac600(edx_1 - 0xc, edx_1)
        ebp[1] -= 0xc
while (i != ebp[1])
