// 函数: sub_6b2880
// 地址: 0x6b2880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i
i.b = *(arg1 + 8)

if (i.b == 0)
    int32_t ecx = *(arg1 + 4)
    i = 0
    
    if (ecx != 0)
        if (ecx u>= 0x20)
            int128_t xmm1_1 = data_79ab30
            
            do
                i += 0x20
                *arg2 &= not.o(xmm1_1)
                arg2[1] &= not.o(xmm1_1)
                arg2 = &arg2[2]
            while (i u< (ecx & 0xffffffe0))
        
        if (i u< ecx)
            int32_t i_4 = ecx - i
            int32_t i_1
            
            do
                *arg2 = not.b(*arg2)
                arg2 += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
else if (i.b == 4)
    if (*(arg1 + 9) == 8)
        int32_t ecx_1 = *(arg1 + 4)
        
        if (ecx_1 != 0)
            int32_t i_5 = ((ecx_1 - 1) u>> 1) + 1
            int32_t i_2
            
            do
                *arg2 = not.b(*arg2)
                arg2 += 2
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else if (i.b == 4 && *(arg1 + 9) == 0x10)
        int32_t ecx_4 = *(arg1 + 4)
        
        if (ecx_4 != 0)
            void* edx = arg2 + 1
            int32_t i_6 = ((ecx_4 - 1) u>> 2) + 1
            int32_t i_3
            
            do
                *(edx - 1) = not.b(*(edx - 1))
                edx += 4
                *(edx - 4) = not.b(*(edx - 4))
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)

return i
