// 函数: sub_58a180
// 地址: 0x58a180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *arg1

for (int32_t edi = arg1[1]; i != edi; i = &i[1])
    void* ecx = *i
    int32_t* ecx_1
    
    if (ecx != 0 && *(ecx + 8) != 0)
        switch (*(ecx + 4) - 1)
            case 0, 9
                ecx_1 = *(ecx + 0xc)
            label_58a1c6:
                
                if (ecx_1 != 0 && (*(*ecx_1 + 0x14))().b != 0)
                    goto label_58a1ee
            case 1, 0xa
                ecx_1 = *(ecx + 0x1c)
                goto label_58a1c6
            case 7
                int32_t* ecx_2 = *(ecx + 0x4c)
                
                if (ecx_2 != 0 && (*(*ecx_2 + 0x14))().b != 0)
                label_58a1ee:
                    void* edx_1 = *i
                    int32_t eax_7 = *(edx_1 + 4) - 1
                    void* eax_10
                    
                    if (eax_7 u> 0xa)
                        eax_10 = edx_1 + 0x68
                    else
                        switch (eax_7)
                            case 0, 9
                                int32_t* ecx_3 = *(edx_1 + 0xc)
                                
                                if (ecx_3 == 0)
                                    eax_10 = edx_1 + 0x68
                                else
                                    eax_10 = (*(*ecx_3 + 0x18))()
                            case 1, 0xa
                                int32_t* ecx_4 = *(edx_1 + 0x1c)
                                
                                if (ecx_4 == 0)
                                    eax_10 = edx_1 + 0x68
                                else
                                    eax_10 = (*(*ecx_4 + 0x18))()
                            case 2, 3, 4, 5, 6, 8
                                eax_10 = edx_1 + 0x68
                            case 7
                                int32_t* ecx_5 = *(edx_1 + 0x4c)
                                
                                if (ecx_5 == 0)
                                    eax_10 = edx_1 + 0x68
                                else
                                    eax_10 = (*(*ecx_5 + 0x18))()
                    
                    sub_5dbf60(arg2 + 4, eax_10)
