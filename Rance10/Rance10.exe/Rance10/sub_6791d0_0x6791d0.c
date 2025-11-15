// 函数: sub_6791d0
// 地址: 0x6791d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_1 = ecx
void* eax = arg1[1]
uint32_t i_4 = divu.dp.d(0:0x3b9ac9f0, arg3)

if (i_4 s<= 0)
    *(*arg1 + 0x14) = 0x48
    (**arg1)(arg1)

uint32_t i_2 = arg4

if (i_4 s< arg4)
    i_2 = i_4

*(eax + 0x50) = i_2
void* result = sub_678fc0(arg1, arg2, arg4 << 2)
uint32_t eax_5 = arg4
int32_t esi_1 = 0

if (eax_5 != 0)
    do
        uint32_t i_3 = eax_5 - esi_1
        
        if (i_2 u< i_3)
            i_3 = i_2
        
        i_2 = i_3
        void* eax_8 = sub_679100(arg1, arg2, i_2 * arg3)
        uint32_t i_1 = i_2
        
        if (i_1 != 0)
            uint32_t i
            
            do
                *(result + (esi_1 << 2)) = eax_8
                esi_1 += 1
                eax_8 += arg3
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        eax_5 = arg4
    while (esi_1 u< eax_5)

return result
