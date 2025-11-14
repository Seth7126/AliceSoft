// 函数: sub_40e050
// 地址: 0x40e050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = *(arg3 + 0x14)
int32_t* var_20 = ebp
int32_t ebx = (*(**(arg3 + 0x10) + 0x18))(arg2)
int32_t var_14 = ebx
void* result = (*(*ebp + 8))(ebx)
int32_t ecx_3 = 0
void* result_1 = result
arg2 = 0

if (result s> 0)
    void** esi_1 = arg1 + 0x24
    int32_t* var_1c_1 = nullptr
    void** var_4_1 = esi_1
    
    while (true)
        char* eax_3
        void* ecx_5
        eax_3, ecx_5 = (*(*ebp + 0x10))(ebx, ecx_3)
        char* edi_1 = eax_3
        void* result_2
        
        if (*edi_1 != 0)
            void* edx_1 = edi_1
            ecx_5 = edx_1 + 1
            
            do
                eax_3.b = *edx_1
                edx_1 += 1
            while (eax_3.b != 0)
            
            result_2 = edx_1 - ecx_5
        else
            result_2 = nullptr
        
        void* result_3 = esi_1[4]
        
        if (esi_1[5] u>= 0x10)
            esi_1 = *esi_1
        
        result = result_2
        
        if (result_3 u< result_2)
            result = result_3
        
        if (result == 0)
        label_40e138:
            
            if (result_3 u>= result_2)
                result.b = result_3 != result_2
                
                if (result == 0)
                    *(arg1 + 4) = (*(*ebp + 0xc))(var_14, arg2)
                    int32_t* eax_7 = *(arg3 + 0x14)
                    int32_t* edi_2 = *(arg3 + 0x10)
                    *(arg1 + 0x70) = 0
                    void* ebx_2 = sub_40eb70(edi_2, var_14)
                    
                    if (ebx_2 s>= 0)
                        void* esi_3 = (*(*edi_2 + 4))(ebx_2)
                        
                        if (esi_3 != 0)
                            void* ebp_1 = (*(*esi_3 + 0x18))()
                            
                            if (ebp_1 != 0 && var_1c_1 s< (*(*esi_3 + 0x14))())
                                int32_t var_c = *(var_1c_1 + ebp_1)
                                
                                if (sub_40e960(arg1, &var_c, ebx_2, arg2, eax_7, edi_2).b != 0)
                                    result.b = 1
                                    return result
                            
                            ebp = var_20
        else
            void* i_1 = result - 4
            
            if (result u>= 4)
                void* i
                
                do
                    if (*esi_1 != *edi_1)
                        goto label_40e0fa
                    
                    esi_1 = &esi_1[1]
                    edi_1 = &edi_1[4]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                result = nullptr
            else
            label_40e0fa:
                ecx_5.b = *esi_1
                char temp2_1 = *edi_1
                
                if (ecx_5.b != temp2_1)
                    result = sbb.d(i_1, i_1, ecx_5.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    result = nullptr
                else
                    ecx_5.b = *(esi_1 + 1)
                    char temp4_1 = edi_1[1]
                    
                    if (ecx_5.b != temp4_1)
                        result = sbb.d(i_1, i_1, ecx_5.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        result = nullptr
                    else
                        ecx_5.b = *(esi_1 + 2)
                        char temp5_1 = edi_1[2]
                        
                        if (ecx_5.b != temp5_1)
                            result = sbb.d(i_1, i_1, ecx_5.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            result = nullptr
                        else
                            i_1.b = *(esi_1 + 3)
                            char temp6_1 = edi_1[3]
                            
                            if (i_1.b == temp6_1)
                                result = nullptr
                            else
                                result = sbb.d(i_1, i_1, i_1.b u< temp6_1) | 1
            
            if (result == 0)
                goto label_40e138
        
        var_1c_1 = &var_1c_1[1]
        ecx_3 = arg2 + 1
        arg2 = ecx_3
        
        if (ecx_3 s>= result_1)
            break
        
        esi_1 = var_4_1
        ebx = var_14

result.b = 0
return result
