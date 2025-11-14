// 函数: sub_58fd20
// 地址: 0x58fd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1

if ((*(*esi + 0x24))().b != 0 && (*(*esi + 0x18))() == 0x20)
    int32_t i_8 = (*(*esi + 0x10))()
    int32_t eax_5 = (*(*esi + 0x14))()
    char* eax_6
    
    if (i_8 == (*(*arg2 + 0x10))() && eax_5 == (*(*arg2 + 0x14))())
        if ((*(*arg2 + 0x28))().b != 0)
            int32_t edi_1 = 0
            
            if (eax_5 s<= 0)
                eax_6.b = 1
                return eax_6
            
            int32_t eax_12
            
            do
                int32_t* eax_10 = (*(*esi + 8))(0, edi_1)
                void* eax_11 = (*(*arg2 + 8))(0, edi_1)
                
                if (i_8 s> 0)
                    int32_t i_4 = i_8
                    void* ecx_10 = eax_10 + 3
                    char* edx_5 = eax_11 + 3
                    int32_t i
                    
                    do
                        eax_12.b = *edx_5
                        edx_5 = &edx_5[4]
                        *ecx_10 = eax_12.b
                        ecx_10 += 4
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                    esi = arg1
                
                edi_1 += 1
            while (edi_1 s< eax_5)
            
            eax_12.b = 1
            return eax_12
        
        if ((*(*arg2 + 0x24))() != 0)
            int32_t ecx_14
            eax_6, ecx_14 = (*(*arg2 + 0x18))()
            
            if (eax_6 != 0x20)
                if ((*(*arg2 + 0x18))() != 0x18)
                    if ((*(*arg2 + 0x18))() == 8)
                        int32_t edi_4 = 0
                        
                        if (eax_5 s> 0)
                            int32_t eax_30
                            
                            do
                                int32_t* eax_28 = (*(*esi + 8))(0, edi_4)
                                char* edx_11 = (*(*arg2 + 8))(0, edi_4)
                                
                                if (i_8 s> 0)
                                    int32_t i_7 = i_8
                                    void* ecx_31 = eax_28 + 3
                                    int32_t i_1
                                    
                                    do
                                        eax_30.b = *edx_11
                                        ecx_31 += 4
                                        *(ecx_31 - 4) = eax_30.b
                                        edx_11 = &edx_11[1]
                                        i_1 = i_7
                                        i_7 -= 1
                                    while (i_1 != 1)
                                    esi = arg1
                                
                                edi_4 += 1
                            while (edi_4 s< eax_5)
                            
                            eax_30.b = 1
                            return eax_30
                else
                    int32_t edi_3 = 0
                    
                    if (eax_5 s> 0)
                        int32_t eax_25
                        
                        do
                            int32_t* eax_23 = (*(*esi + 8))(0, edi_3)
                            char* edx_9 = (*(*arg2 + 8))(0, edi_3)
                            
                            if (i_8 s> 0)
                                int32_t i_6 = i_8
                                void* ecx_25 = eax_23 + 3
                                int32_t i_2
                                
                                do
                                    eax_25.b = *edx_9
                                    ecx_25 += 4
                                    *(ecx_25 - 4) = eax_25.b
                                    edx_9 = &edx_9[3]
                                    i_2 = i_6
                                    i_6 -= 1
                                while (i_2 != 1)
                                esi = arg1
                            
                            edi_3 += 1
                        while (edi_3 s< eax_5)
                        
                        eax_25.b = 1
                        return eax_25
            else
                int32_t edi_2 = 0
                
                if (eax_5 s> 0)
                    int32_t eax_20
                    
                    do
                        int32_t* eax_18 = (*(*esi + 8))(0, edi_2)
                        char* edx_7 = (*(*arg2 + 8))(0, edi_2)
                        
                        if (i_8 s> 0)
                            int32_t i_5 = i_8
                            void* ecx_19 = eax_18 + 3
                            int32_t i_3
                            
                            do
                                eax_20.b = *edx_7
                                ecx_19 += 4
                                *(ecx_19 - 4) = eax_20.b
                                edx_7 = &edx_7[4]
                                i_3 = i_5
                                i_5 -= 1
                            while (i_3 != 1)
                            esi = arg1
                        
                        edi_2 += 1
                    while (edi_2 s< eax_5)
                    
                    eax_20.b = 1
                    return eax_20
            
            eax_6.b = 1
            return eax_6
        
        if ((*(*esi + 0x24))().b != 0 && sub_5901d0(esi, 0xff).b != 0)
            eax_6.b = 1
            return eax_6
    
    eax_6.b = 0
    return eax_6

int32_t eax_2
eax_2.b = 0
return eax_2
