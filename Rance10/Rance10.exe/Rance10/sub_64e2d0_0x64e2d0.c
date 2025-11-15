// 函数: sub_64e2d0
// 地址: 0x64e2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3

if (arg4 == 0)
    *(*arg3[8] + 0x14) = 0x29
    int32_t* eax_2 = arg3[8]
    (**eax_2)(eax_2)

int32_t i = arg3[3] + arg4
int32_t edi_4 = (((1 << arg4.b) - 1) & arg2) << (0x18 - i.b) | arg3[2]

while (i s>= 8)
    uint32_t ecx_3 = zx.d((edi_4 s>> 0x10).b)
    **arg3 = ecx_3.b
    *arg3 += 1
    int32_t temp0_1 = arg3[1]
    arg3[1] -= 1
    
    if (temp0_1 == 1)
        void* eax_6 = arg3[8]
        int32_t* ebp_1 = *(eax_6 + 0x18)
        
        if (ebp_1[3](eax_6) == 0)
            return 0
        
        *arg3 = *ebp_1
        arg3[1] = ebp_1[1]
    
    if (ecx_3 == 0xff)
        **arg3 = 0
        *arg3 += 1
        int32_t temp1_1 = arg3[1]
        arg3[1] -= 1
        
        if (temp1_1 == 1)
            void* eax_10 = arg3[8]
            int32_t* ebp_2 = *(eax_10 + 0x18)
            
            if (ebp_2[3](eax_10) == 0)
                return 0
            
            *arg3 = *ebp_2
            arg3[1] = ebp_2[1]
    
    i -= 8
    edi_4 <<= 8

arg3[2] = edi_4
char* result
result.b = 1
arg3[3] = i
return result
