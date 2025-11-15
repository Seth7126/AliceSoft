// 函数: sub_6b87c0
// 地址: 0x6b87c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* edi = *(arg1 + 0x1c)

if (edi == 0)
    return 0xffffff7f

void* eax_3 = sub_6b2ec0(arg2, 8) + 1
*(edi + 0x18) = eax_3

if (eax_3 s> 0)
    int32_t i = 0
    
    if (eax_3 s> 0)
        void* ebp_1 = edi + 0x720
        
        do
            void** eax_4 = sub_6b3ef0(arg2)
            *ebp_1 = eax_4
            
            if (eax_4 == 0)
                goto label_6b8a61
            
            i += 1
            ebp_1 += 4
        while (i s< *(edi + 0x18))
    
    void* ebp_2 = sub_6b2ec0(arg2, 6) + 1
    
    if (ebp_2 s> 0)
        int32_t ebx_1 = 0
        
        if (ebp_2 s> 0)
            do
                if (sub_6b2ec0(arg2, 0x10) != 0)
                    goto label_6b8a61
                
                ebx_1 += 1
            while (ebx_1 s< ebp_2)
        
        void* eax_8 = sub_6b2ec0(arg2, 6) + 1
        *(edi + 0x10) = eax_8
        
        if (eax_8 s> 0)
            int32_t i_1 = 0
            
            if (eax_8 s> 0)
                void* ebx_2 = edi + 0x420
                
                do
                    void* eax_9 = sub_6b2ec0(arg2, 0x10)
                    *(ebx_2 - 0x100) = eax_9
                    
                    if (eax_9 s< 0)
                        goto label_6b8a61
                    
                    if (eax_9 s>= 2)
                        goto label_6b8a61
                    
                    int32_t eax_12 = (*(*((eax_9 << 2) + &data_77b06c) + 4))(arg1, arg2)
                    *ebx_2 = eax_12
                    
                    if (eax_12 == 0)
                        goto label_6b8a61
                    
                    i_1 += 1
                    ebx_2 += 4
                while (i_1 s< *(edi + 0x10))
            
            void* eax_14 = sub_6b2ec0(arg2, 6) + 1
            *(edi + 0x14) = eax_14
            
            if (eax_14 s> 0)
                int32_t i_2 = 0
                
                if (eax_14 s> 0)
                    void* ebx_3 = edi + 0x620
                    
                    do
                        void* eax_15 = sub_6b2ec0(arg2, 0x10)
                        *(ebx_3 - 0x100) = eax_15
                        
                        if (eax_15 s< 0)
                            goto label_6b8a61
                        
                        if (eax_15 s>= 3)
                            goto label_6b8a61
                        
                        int32_t eax_18 = (*(*((eax_15 << 2) + &data_77b060) + 4))(arg1, arg2)
                        *ebx_3 = eax_18
                        
                        if (eax_18 == 0)
                            goto label_6b8a61
                        
                        i_2 += 1
                        ebx_3 += 4
                    while (i_2 s< *(edi + 0x14))
                
                void* eax_20 = sub_6b2ec0(arg2, 6) + 1
                *(edi + 0xc) = eax_20
                
                if (eax_20 s> 0)
                    int32_t i_3 = 0
                    
                    if (eax_20 s> 0)
                        void* ebx_4 = edi + 0x220
                        
                        do
                            void* eax_21 = sub_6b2ec0(arg2, 0x10)
                            *(ebx_4 - 0x100) = eax_21
                            
                            if (eax_21 s< 0)
                                goto label_6b8a61
                            
                            if (eax_21 s>= 1)
                                goto label_6b8a61
                            
                            int32_t eax_24 = (*((&data_77b074)[eax_21] + 4))(arg1, arg2)
                            *ebx_4 = eax_24
                            
                            if (eax_24 == 0)
                                goto label_6b8a61
                            
                            i_3 += 1
                            ebx_4 += 4
                        while (i_3 s< *(edi + 0xc))
                    
                    void* eax_26 = sub_6b2ec0(arg2, 6) + 1
                    *(edi + 8) = eax_26
                    
                    if (eax_26 s> 0)
                        int32_t i_4 = 0
                        
                        if (eax_26 s> 0)
                            void* ebx_5 = edi + 0x20
                            
                            do
                                int32_t var_18_4 = 0x10
                                int32_t var_1c_4 = 1
                                *ebx_5 = _calloc()
                                **ebx_5 = sub_6b2ec0(arg2, 1)
                                *(*ebx_5 + 4) = sub_6b2ec0(arg2, 0x10)
                                *(*ebx_5 + 8) = sub_6b2ec0(arg2, 0x10)
                                *(*ebx_5 + 0xc) = sub_6b2ec0(arg2, 8)
                                void* eax_32 = *ebx_5
                                
                                if (*(eax_32 + 4) s>= 1)
                                    goto label_6b8a61
                                
                                if (*(eax_32 + 8) s>= 1)
                                    goto label_6b8a61
                                
                                int32_t eax_33 = *(eax_32 + 0xc)
                                
                                if (eax_33 s>= *(edi + 0xc))
                                    goto label_6b8a61
                                
                                if (eax_33 s< 0)
                                    goto label_6b8a61
                                
                                i_4 += 1
                                ebx_5 += 4
                            while (i_4 s< *(edi + 8))
                        
                        if (sub_6b2ec0(arg2, 1) == 1)
                            return 0

label_6b8a61:
sub_6b8320(arg1)
return 0xffffff7b
