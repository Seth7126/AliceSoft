// 函数: sub_54fec0
// 地址: 0x54fec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = sub_54e9a0(arg1)

if (eax != 0)
    uint32_t arg_4
    uint32_t arg_8
    sub_54ef50(arg1, &arg_4, &arg_8)
    void* arg_c
    uint32_t arg_10
    sub_54ef50(arg1, &arg_c, &arg_10)
    
    if (sub_54eff0(arg1, &arg_4, &arg_8, &arg_c, &arg_10).b != 0)
        void* esi_1 = arg_4
        uint8_t* arg_1c
        int32_t* ecx_3 = &arg_1c
        void* ebx = arg_c
        arg_4 = 0xff
        arg_c = ebx - esi_1
        uint32_t ebp = arg_8
        uint32_t edi = arg_10
        uint32_t eax_4 = edi - ebp
        arg_10 = 0
        
        if (arg_1c s>= 0xff)
            ecx_3 = &arg_4
        
        arg_8 = 0
        uint32_t edx = 0
        int32_t arg_18
        int32_t* ecx_4 = &arg_18
        
        if (*ecx_3 s> 0)
            edx = zx.d(*ecx_3)
        
        arg_10 = 0xff
        bool cond:2 = arg_18 s>= 0xff
        arg_4 = edx
        
        if (cond:2)
            ecx_4 = &arg_10
        
        arg_1c = nullptr
        uint32_t edx_1 = 0
        uint8_t* arg_14
        int32_t* ecx_5 = &arg_14
        
        if (*ecx_4 s> 0)
            edx_1 = zx.d(*ecx_4)
        
        arg_8 = 0xff
        bool cond:4 = arg_14 s>= 0xff
        arg_10 = edx_1
        
        if (cond:4)
            ecx_5 = &arg_8
        
        uint32_t edx_2 = 0
        
        if (*ecx_5 s> 0)
            edx_2 = zx.d(*ecx_5)
        
        arg_8 = edx_2
        uint8_t* eax_11
        
        if (eax_4 == 0)
            if (esi_1 s> ebx)
                void* eax_9 = esi_1
                esi_1 = ebx
                ebx = eax_9
            
            eax_11 = (*(*eax + 8))(esi_1, ebp)
            
            if (esi_1 s<= ebx)
                uint8_t ecx_7 = arg_10.b
                void* eax_12 = &eax_11[2]
                int32_t i_3 = ebx - esi_1 + 1
                int32_t i
                
                do
                    eax_12 += 4
                    *(eax_12 - 6) = arg_8.b
                    uint8_t edx_4 = arg_4.b
                    *(eax_12 - 5) = ecx_7
                    *(eax_12 - 4) = edx_4
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                eax_12.b = 1
                return eax_12
        else if (arg_c != 0)
            int32_t eax_17
            int32_t edx_7
            edx_7:eax_17 = sx.q(eax_4)
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = sx.q(arg_c)
            
            if ((eax_19 ^ edx_8) - edx_8 s<= (eax_17 ^ edx_7) - edx_7)
                if (ebp s> edi)
                    uint32_t ecx_21 = ebp
                    esi_1 = ebx
                    ebp = edi
                    edi = ecx_21
                
                int32_t esi_3 = esi_1 << 8
                int32_t edx_15 = *eax
                arg_18 = divs.dp.d(sx.q(arg_c << 8), eax_4)
                uint8_t* eax_32 = (*(edx_15 + 8))(0, 0)
                int32_t edx_16 = *eax
                arg_1c = eax_32
                eax_11 = (*(edx_16 + 0x1c))()
                arg_14 = eax_11
                
                if (ebp s<= edi)
                    uint8_t edx_17 = arg_4.b
                    uint8_t ebx_5 = arg_8.b
                    int32_t i_5 = edi - ebp + 1
                    arg_c = eax_11 * ebp
                    uint8_t ecx_26 = arg_10.b
                    void* ebp_2 = arg_c
                    int32_t i_1
                    
                    do
                        int32_t eax_33 = esi_3
                        esi_3 += arg_18
                        void* eax_36 = (eax_33 s>> 8 << 2) + ebp_2
                        ebp_2 += arg_14
                        eax_11 = eax_36 + arg_1c
                        *eax_11 = ebx_5
                        eax_11[1] = ecx_26
                        eax_11[2] = edx_17
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
            else
                if (esi_1 s> ebx)
                    void* ecx_14 = esi_1
                    ebp = edi
                    esi_1 = ebx
                    ebx = ecx_14
                
                void* ebp_1 = ebp << 8
                int32_t edx_10 = *eax
                arg_c = divs.dp.d(sx.q(eax_4 << 8), arg_c)
                int32_t eax_26 = (*(edx_10 + 8))(0, 0)
                int32_t edx_11 = *eax
                arg_18 = eax_26
                arg_1c = (*(edx_11 + 0x1c))()
                
                if (esi_1 s<= ebx)
                    uint8_t eax_27 = arg_10.b
                    void* edi_3 = arg_c
                    
                    do
                        int32_t ecx_18 = ebp_1 s>> 8
                        ebp_1 += edi_3
                        int32_t ecx_20 = ecx_18 * arg_1c + arg_18
                        *(ecx_20 + (esi_1 << 2)) = arg_8.b
                        uint8_t edx_13 = arg_4.b
                        *(ecx_20 + (esi_1 << 2) + 1) = eax_27
                        *(ecx_20 + (esi_1 << 2) + 2) = edx_13
                        esi_1 += 1
                    while (esi_1 s<= ebx)
                    
                    return 1
        else
            if (ebp s> edi)
                uint32_t eax_13 = ebp
                ebp = edi
                edi = eax_13
            
            void* esi_2 = (*(*eax + 8))(esi_1, ebp)
            eax_11 = (*(*eax + 0x1c))()
            
            if (ebp s<= edi)
                uint8_t edx_6 = arg_4.b
                uint8_t ecx_10 = arg_10.b
                int32_t i_4 = edi - ebp + 1
                uint8_t eax_16 = arg_8.b
                int32_t i_2
                
                do
                    *esi_2 = eax_16
                    *(esi_2 + 1) = ecx_10
                    *(esi_2 + 2) = edx_6
                    esi_2 += eax_11
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                return 1
        
        eax_11.b = 1
        return eax_11

eax.b = 0
return eax
