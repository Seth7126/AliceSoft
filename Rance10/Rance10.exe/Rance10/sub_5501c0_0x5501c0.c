// 函数: sub_5501c0
// 地址: 0x5501c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t* eax = sub_54e9a0(arg1)

if (eax != 0)
    void* eax_3
    
    if ((*(*eax + 0x28))().b == 0)
        eax_3.b = 1
        return eax_3
    
    uint32_t arg_4
    void* arg_8
    sub_54ef50(arg1, &arg_4, &arg_8)
    int32_t arg_c
    void* arg_10
    sub_54ef50(arg1, &arg_c, &arg_10)
    
    if (sub_54eff0(arg1, &arg_4, &arg_8, &arg_c, &arg_10).b != 0)
        int32_t esi_1 = arg_4
        int32_t arg_14
        int32_t* ecx_5 = &arg_14
        int32_t ebx_1 = arg_c
        arg_4 = 0xff
        void* ebp_1 = arg_8
        arg_c = ebx_1 - esi_1
        void* edi_1 = arg_10
        arg_8 = nullptr
        bool cond:0_1 = arg_14 s>= 0xff
        arg_10 = edi_1 - ebp_1
        
        if (cond:0_1)
            ecx_5 = &arg_4
        
        uint32_t edx_1 = 0
        
        if (*ecx_5 s> 0)
            edx_1 = zx.d(*ecx_5)
        
        void* eax_9 = arg_10
        arg_4 = edx_1
        
        if (eax_9 == 0)
            if (esi_1 s> ebx_1)
                int32_t eax_10 = esi_1
                esi_1 = ebx_1
                ebx_1 = eax_10
            
            eax_3 = (*(*eax + 8))(esi_1, ebp_1)
            
            if (esi_1 s<= ebx_1)
                uint8_t edx_2 = arg_4.b
                uint8_t* eax_12 = eax_3 + 3
                int32_t i_3 = ebx_1 - esi_1 + 1
                int32_t i
                
                do
                    *eax_12 = edx_2
                    eax_12 = &eax_12[4]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                eax_12.b = 1
                return eax_12
        else if (arg_c != 0)
            int32_t eax_16
            int32_t edx_5
            edx_5:eax_16 = sx.q(eax_9)
            int32_t eax_18
            int32_t edx_6
            edx_6:eax_18 = sx.q(arg_c)
            
            if ((eax_18 ^ edx_6) - edx_6 s<= (eax_16 ^ edx_5) - edx_5)
                if (ebp_1 s> edi_1)
                    void* ecx_22 = ebp_1
                    esi_1 = ebx_1
                    ebp_1 = edi_1
                    edi_1 = ecx_22
                
                void* esi_3 = esi_1 << 8
                int32_t edx_12 = *eax
                arg_10 = divs.dp.d(sx.q(arg_c << 8), arg_10)
                int32_t eax_31 = (*(edx_12 + 8))(0, 0)
                int32_t edx_13 = *eax
                arg_c = eax_31
                void* ebx_5 = (*(edx_13 + 0x1c))()
                
                if (ebp_1 s<= edi_1)
                    uint8_t edx_14 = arg_4.b
                    void* ecx_26 = ebx_5 * ebp_1
                    void* i_5 = edi_1 - ebp_1 + 1
                    void* i_1
                    
                    do
                        void* eax_32 = esi_3
                        esi_3 += arg_10
                        eax_3 = ecx_26 + (eax_32 s>> 8 << 2)
                        ecx_26 += ebx_5
                        *(eax_3 + arg_c + 3) = edx_14
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
            else
                if (esi_1 s> ebx_1)
                    int32_t ecx_14 = esi_1
                    ebp_1 = edi_1
                    esi_1 = ebx_1
                    ebx_1 = ecx_14
                
                int32_t ebp_2 = ebp_1 << 8
                int32_t edx_8 = *eax
                arg_c = divs.dp.d(sx.q(arg_10 << 8), arg_c)
                void* eax_25 = (*(edx_8 + 8))(0, 0)
                int32_t edx_9 = *eax
                arg_10 = eax_25
                arg_8 = (*(edx_9 + 0x1c))()
                
                if (esi_1 s<= ebx_1)
                    uint8_t edx_10 = arg_4.b
                    int32_t eax_26 = arg_c
                    void* edi_5 = arg_10
                    
                    do
                        int32_t ecx_17 = ebp_2
                        ebp_2 += eax_26
                        *((ecx_17 s>> 8) * arg_8 + edi_5 + (esi_1 << 2) + 3) = edx_10
                        esi_1 += 1
                    while (esi_1 s<= ebx_1)
                    
                    eax_26.b = 1
                    return eax_26
        else
            if (ebp_1 s> edi_1)
                void* eax_13 = ebp_1
                ebp_1 = edi_1
                edi_1 = eax_13
            
            void* esi_2 = (*(*eax + 8))(esi_1, ebp_1)
            eax_3 = (*(*eax + 0x1c))()
            
            if (ebp_1 s<= edi_1)
                uint8_t edx_4 = arg_4.b
                void* i_4 = edi_1 - ebp_1 + 1
                void* i_2
                
                do
                    *(esi_2 + 3) = edx_4
                    esi_2 += eax_3
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                eax_3.b = 1
                return eax_3
        
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
