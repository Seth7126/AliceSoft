// 函数: sub_4b14b0
// 地址: 0x4b14b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x104) != 0)
    void* eax_1 = *(arg1 + 0xd0)
    
    if (*(eax_1 + 0xaa) == 0 || *(eax_1 + 0xab) == 0)
        *(*(arg1 + 0xd4) + 0xaa) = 0
        void* ecx = *(arg1 + 0xbc)
        char eax_5
        
        if (*(ecx + 0xaa) != 0 && *(ecx + 0xab) != 0)
            eax_5 = (*(**(ecx + 0x74) + 0x44))(arg3[1], arg3[2], 1)
        
        void* eax_7
        
        if (*(ecx + 0xaa) == 0 || *(ecx + 0xab) == 0 || eax_5 == 0)
            void* ecx_2 = *(arg1 + 0xc0)
            
            if (*(ecx_2 + 0xaa) != 0 && *(ecx_2 + 0xab) != 0
                    && (*(**(ecx_2 + 0x74) + 0x44))(arg3[1], arg3[2], 1) != 0)
                *(*(arg1 + 0xd4) + 0xaa) = 1
                eax_7 = *(arg1 + 0xc0)
                goto label_4b1572
        else
            *(*(arg1 + 0xd4) + 0xaa) = 1
            eax_7 = *(arg1 + 0xbc)
        label_4b1572:
            void* ecx_4 = *(arg1 + 0xd4)
            int32_t eax_12 = *(eax_7 + 0x90)
            *(ecx_4 + 0x94) = *(eax_7 + 0x94)
            *(ecx_4 + 0x90) = eax_12
        *(*(arg1 + 0xd8) + 0xaa) = 0
        void* ecx_5 = *(arg1 + 0xc4)
        char eax_16
        
        if (*(ecx_5 + 0xaa) != 0 && *(ecx_5 + 0xab) != 0)
            eax_16 = (*(**(ecx_5 + 0x74) + 0x44))(arg3[1], arg3[2], 1)
        
        void* eax_18
        
        if (*(ecx_5 + 0xaa) == 0 || *(ecx_5 + 0xab) == 0 || eax_16 == 0)
            void* ecx_7 = *(arg1 + 0xc8)
            
            if (*(ecx_7 + 0xaa) != 0 && *(ecx_7 + 0xab) != 0
                    && (*(**(ecx_7 + 0x74) + 0x44))(arg3[1], arg3[2], 1) != 0)
                *(*(arg1 + 0xd8) + 0xaa) = 1
                eax_18 = *(arg1 + 0xc8)
                goto label_4b1625
        else
            *(*(arg1 + 0xd8) + 0xaa) = 1
            eax_18 = *(arg1 + 0xc4)
        label_4b1625:
            void* ecx_9 = *(arg1 + 0xd8)
            int32_t eax_23 = *(eax_18 + 0x90)
            *(ecx_9 + 0x94) = *(eax_18 + 0x94)
            *(ecx_9 + 0x90) = eax_23

return sub_4cbd50(arg1 + 0xc, arg3, arg2)
