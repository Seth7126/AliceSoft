// 函数: sub_6aa4c0
// 地址: 0x6aa4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2 = arg2
arg2.b = arg1[2].b
int32_t i_4 = *arg1

if (arg2.b != 6)
    if (arg2.b == 4)
        if (*(arg1 + 9) != 8)
            void* edx_4 = arg1[1] + eax_2
            
            if (i_4 != 0)
                int32_t i
                
                do
                    *(edx_4 - 1) = not.b(*(edx_4 - 1))
                    edx_4 -= 4
                    *(edx_4 + 2) = not.b(*(edx_4 + 2))
                    i = i_4
                    i_4 -= 1
                while (i != 1)
        else
            char* ecx_3 = arg1[1] + eax_2
            char* edx_2 = ecx_3
            
            if (i_4 != 0)
                char eax_1
                int32_t i_1
                
                do
                    char eax = ecx_3[0xffffffff]
                    ecx_3 = &ecx_3[0xfffffffe]
                    edx_2 = &edx_2[0xfffffffe]
                    edx_2[1] = not.b(eax)
                    eax_1 = *ecx_3
                    *edx_2 = eax_1
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                return eax_1
else if (*(arg1 + 9) != 8)
    void* edx_1 = arg1[1] + eax_2
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            *(edx_1 - 1) = not.b(*(edx_1 - 1))
            edx_1 -= 8
            *(edx_1 + 6) = not.b(*(edx_1 + 6))
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
else
    void* ecx_1 = arg1[1] + eax_2
    
    if (i_4 != 0)
        int32_t i_3
        
        do
            *(ecx_1 - 1) = not.b(*(ecx_1 - 1))
            ecx_1 -= 4
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

return eax_2
