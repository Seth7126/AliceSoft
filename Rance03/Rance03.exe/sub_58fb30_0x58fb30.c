// 函数: sub_58fb30
// 地址: 0x58fb30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg2
int32_t i_4 = (*(*ebp + 0x10))()
int32_t* esi = (*(*ebp + 0x14))()
arg2 = esi

if (i_4 == (*(*arg3 + 0x10))() && esi == (*(*arg3 + 0x14))() && (*(*ebp + 0x24))().b != 0
        && (*(*ebp + 0x18))() == 0x20)
    if ((*(*arg3 + 0x24))() == 0)
        int32_t esi_1 = **(arg1 + 0x24)
        int32_t eax_26 = (*(*ebp + 0x10))(arg2, 0xff, 0xff, 0xff, 0xff)
        *(arg1 + 0x24)
        (*(esi_1 + 0x64))(ebp, 0, 0, eax_26)
    else if ((*(*arg3 + 0x18))() != 0x18)
        if ((*(*arg3 + 0x18))() == 0x20)
            (*(**(arg1 + 0x24) + 0x5c))(ebp, 0, 0, arg3, 0, 0, i_4, esi)
            int32_t eax_18
            eax_18.b = 1
            return eax_18
        
        if ((*(*arg3 + 0x18))() == 8)
            int32_t edi_2 = 0
            
            if (esi s> 0)
                int32_t eax_23
                
                do
                    int32_t* eax_21 = (*(*ebp + 8))(0, edi_2)
                    char* edx_7 = (*(*arg3 + 8))(0, edi_2)
                    
                    if (i_4 s> 0)
                        int32_t i_3 = i_4
                        void* ecx_19 = eax_21 + 2
                        int32_t i
                        
                        do
                            eax_23.b = *edx_7
                            ecx_19 += 4
                            *(ecx_19 - 6) = eax_23.b
                            edx_7 = &edx_7[1]
                            eax_23.b = edx_7[0xffffffff]
                            *(ecx_19 - 5) = eax_23.b
                            eax_23.b = edx_7[0xffffffff]
                            *(ecx_19 - 4) = eax_23.b
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        esi = arg2
                    
                    edi_2 += 1
                while (edi_2 s< esi)
                
                eax_23.b = 1
                return eax_23
    else
        int32_t edi_1 = 0
        
        if (esi s> 0)
            int32_t eax_14
            
            do
                int32_t* eax_12 = (*(*ebp + 8))(0, edi_1)
                void* eax_13 = (*(*arg3 + 8))(0, edi_1)
                
                if (i_4 s> 0)
                    int32_t i_2 = i_4
                    void* ecx_11 = eax_12 + 2
                    void* edx_5 = eax_13 + 2
                    int32_t i_1
                    
                    do
                        eax_14.b = *(edx_5 - 2)
                        ecx_11 += 4
                        *(ecx_11 - 6) = eax_14.b
                        edx_5 += 3
                        eax_14.b = *(edx_5 - 4)
                        *(ecx_11 - 5) = eax_14.b
                        eax_14.b = *(edx_5 - 3)
                        *(ecx_11 - 4) = eax_14.b
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    esi = arg2
                
                edi_1 += 1
            while (edi_1 s< esi)
            
            eax_14.b = 1
            return eax_14
    
    int32_t eax_10
    eax_10.b = 1
    return eax_10

int32_t eax_2
eax_2.b = 0
return eax_2
