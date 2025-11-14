// 函数: sub_58ff60
// 地址: 0x58ff60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t esi
int32_t var_8 = esi
int32_t* esi_1 = arg1

if ((*(*esi_1 + 0x24))().b != 0 && (*(*esi_1 + 0x18))() == 0x20)
    int32_t ebx
    int32_t var_c = ebx
    int32_t ebp
    int32_t var_10 = ebp
    int32_t edi
    int32_t var_14 = edi
    int32_t i_8 = (*(*esi_1 + 0x10))()
    int32_t eax_5 = (*(*esi_1 + 0x14))()
    char* eax_6
    
    if (i_8 == (*(*arg3 + 0x10))() && eax_5 == (*(*arg3 + 0x14))())
        char eax_9 = (*(*arg3 + 0x24))()
        int32_t eax_11
        
        if (eax_9 != 0)
            eax_11 = (*(*arg3 + 0x18))()
        
        if (eax_9 != 0 && eax_11 == 0x20)
            if ((*(*arg3 + 0x18))() == 0x20)
                int32_t ebx_2 = 0
                
                if (eax_5 s> 0)
                    int32_t eax_16
                    
                    do
                        int32_t* eax_14 = (*(*esi_1 + 8))(0, ebx_2)
                        void* edx_4 = (*(*arg3 + 8))(0, ebx_2)
                        
                        if (i_8 s> 0)
                            int32_t i_4 = i_8
                            void* ecx_14 = eax_14 + 3
                            int32_t i
                            
                            do
                                eax_16.b = 0xff
                                edx_4 += 4
                                eax_16.b = 0xff - *(edx_4 - 4)
                                ecx_14 += 4
                                *(ecx_14 - 4) = eax_16.b
                                i = i_4
                                i_4 -= 1
                            while (i != 1)
                            esi_1 = arg2
                        
                        ebx_2 += 1
                    while (ebx_2 s< eax_5)
                    
                    eax_16.b = 1
                    return eax_16
            
            eax_6.b = 1
            return eax_6
        
        if ((*(*arg3 + 0x28))().b != 0)
            int32_t ebx_4 = 0
            
            if (eax_5 s<= 0)
                eax_6.b = 1
                return eax_6
            
            int32_t eax_22
            
            do
                int32_t* eax_20 = (*(*esi_1 + 8))(0, ebx_4)
                void* eax_21 = (*(*arg3 + 8))(0, ebx_4)
                
                if (i_8 s> 0)
                    int32_t i_5 = i_8
                    void* ecx_20 = eax_20 + 3
                    void* edx_7 = eax_21 + 3
                    int32_t i_1
                    
                    do
                        eax_22.b = 0xff
                        edx_7 += 4
                        eax_22.b = 0xff - *(edx_7 - 4)
                        ecx_20 += 4
                        *(ecx_20 - 4) = eax_22.b
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                    esi_1 = arg2
                
                ebx_4 += 1
            while (ebx_4 s< eax_5)
            
            eax_22.b = 1
            return eax_22
        
        if ((*(*arg3 + 0x24))() != 0)
            if ((*(*arg3 + 0x18))() != 0x18)
                if ((*(*arg3 + 0x18))() == 8)
                    int32_t ebx_8 = 0
                    
                    if (eax_5 s> 0)
                        int32_t eax_35
                        
                        do
                            int32_t* eax_33 = (*(*esi_1 + 8))(0, ebx_8)
                            char* edx_11 = (*(*arg3 + 8))(0, ebx_8)
                            
                            if (i_8 s> 0)
                                int32_t i_7 = i_8
                                void* ecx_33 = eax_33 + 3
                                int32_t i_2
                                
                                do
                                    eax_35.b = 0xff
                                    ecx_33 += 4
                                    eax_35.b = 0xff - *edx_11
                                    edx_11 = &edx_11[1]
                                    *(ecx_33 - 4) = eax_35.b
                                    i_2 = i_7
                                    i_7 -= 1
                                while (i_2 != 1)
                                esi_1 = arg2
                            
                            ebx_8 += 1
                        while (ebx_8 s< eax_5)
                        
                        eax_35.b = 1
                        return eax_35
            else
                int32_t ebx_6 = 0
                
                if (eax_5 s> 0)
                    int32_t eax_30
                    
                    do
                        int32_t* eax_28 = (*(*esi_1 + 8))(0, ebx_6)
                        char* edx_9 = (*(*arg3 + 8))(0, ebx_6)
                        
                        if (i_8 s> 0)
                            int32_t i_6 = i_8
                            void* ecx_27 = eax_28 + 3
                            int32_t i_3
                            
                            do
                                eax_30.b = 0xff
                                ecx_27 += 4
                                eax_30.b = 0xff - *edx_9
                                edx_9 = &edx_9[3]
                                *(ecx_27 - 4) = eax_30.b
                                i_3 = i_6
                                i_6 -= 1
                            while (i_3 != 1)
                            esi_1 = arg2
                        
                        ebx_6 += 1
                    while (ebx_6 s< eax_5)
                    
                    eax_30.b = 1
                    return eax_30
            
            eax_6.b = 1
            return eax_6
        
        if ((*(*esi_1 + 0x24))().b != 0 && sub_5901d0(esi_1, 0).b != 0)
            eax_6.b = 1
            return eax_6
    
    eax_6.b = 0
    return eax_6

int32_t eax_2
eax_2.b = 0
return eax_2
