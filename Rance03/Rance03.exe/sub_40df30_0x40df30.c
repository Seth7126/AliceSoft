// 函数: sub_40df30
// 地址: 0x40df30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx_1 = *(arg2 + 0x14)
int32_t* var_10 = ebx_1
void* result = (*(*ebx_1 + 0x14))()
void* ebp = nullptr
void* result_1 = result

if (result s> 0)
    void** esi_1 = arg1 + 0x24
    void** var_4_1 = esi_1
    
    while (true)
        char* eax_2
        void* ecx_2
        eax_2, ecx_2 = (*(*ebx_1 + 0x1c))(ebp)
        char* edi_1 = eax_2
        void* result_2
        
        if (*edi_1 != 0)
            void* edx_1 = edi_1
            ecx_2 = edx_1 + 1
            
            do
                eax_2.b = *edx_1
                edx_1 += 1
            while (eax_2.b != 0)
            
            result_2 = edx_1 - ecx_2
        else
            result_2 = nullptr
        
        void* result_3 = esi_1[4]
        
        if (esi_1[5] u>= 0x10)
            esi_1 = *esi_1
        
        result = result_2
        
        if (result_3 u< result_2)
            result = result_3
        
        if (result != 0)
            void* i_1 = result - 4
            
            if (result u>= 4)
                void* i
                
                do
                    if (*esi_1 != *edi_1)
                        goto label_40dfba
                    
                    esi_1 = &esi_1[1]
                    edi_1 = &edi_1[4]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                result = nullptr
            else
            label_40dfba:
                ecx_2.b = *esi_1
                char temp2_1 = *edi_1
                
                if (ecx_2.b != temp2_1)
                    result = sbb.d(i_1, i_1, ecx_2.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    result = nullptr
                else
                    ecx_2.b = *(esi_1 + 1)
                    char temp4_1 = edi_1[1]
                    
                    if (ecx_2.b != temp4_1)
                        result = sbb.d(i_1, i_1, ecx_2.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        result = nullptr
                    else
                        ecx_2.b = *(esi_1 + 2)
                        char temp5_1 = edi_1[2]
                        
                        if (ecx_2.b != temp5_1)
                            result = sbb.d(i_1, i_1, ecx_2.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            result = nullptr
                        else
                            i_1.b = *(esi_1 + 3)
                            char temp6_1 = edi_1[3]
                            
                            if (i_1.b == temp6_1)
                                result = nullptr
                            else
                                result = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
            
            if (result == 0 && result_3 u>= result_2)
                goto label_40dffc
            
            ebx_1 = var_10
        else if (result_3 u< result_2)
            ebx_1 = var_10
        else
        label_40dffc:
            result.b = result_3 != result_2
            
            if (result != 0)
                ebx_1 = var_10
            else
                ebx_1 = var_10
                void* var_24_3 = arg2
                *(arg1 + 4) = (*(*ebx_1 + 0x18))(ebp)
                
                if (sub_40e690(arg1, ebp).b != 0)
                    result.b = 1
                    return result
        
        ebp += 1
        
        if (ebp s>= result_1)
            break
        
        esi_1 = var_4_1

result.b = 0
return result
