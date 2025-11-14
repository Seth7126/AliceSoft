// 函数: sub_40e220
// 地址: 0x40e220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg3[5]
int32_t* edi = arg3[4]
int32_t* var_18 = ebx
int32_t edi_1 = (*(*edi + 0x1c))((*(*edi + 0x3c))(arg2))
int32_t var_14 = edi_1
int32_t* result = (*(*ebx + 0x20))(edi_1)
int32_t ebp = 0
int32_t* result_1 = result

if (result s> 0)
    void* esi_1 = arg1 + 0x24
    void* var_4_1 = esi_1
    
    while (true)
        int32_t* edi_2 = (*(*ebx + 0x28))(edi_1, ebp)
        void* ecx_4
        
        if (*edi_2 != 0)
            int32_t* ecx_5 = edi_2
            void* edx_2 = ecx_5 + 1
            
            do
                result.b = *ecx_5
                ecx_5 += 1
            while (result.b != 0)
            
            ecx_4 = ecx_5 - edx_2
        else
            ecx_4 = nullptr
        
        void* ebx_1 = *(esi_1 + 0x10)
        
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        void* edx_3 = ecx_4
        
        if (ebx_1 u< ecx_4)
            edx_3 = ebx_1
        
        if (edx_3 != 0)
            void* i_1 = edx_3 - 4
            
            if (edx_3 u>= 4)
                void* i
                
                do
                    if (*esi_1 != *edi_2)
                        goto label_40e2ca
                    
                    esi_1 += 4
                    edi_2 = &edi_2[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                result = nullptr
            else
            label_40e2ca:
                result.b = *esi_1
                char temp2_1 = *edi_2
                
                if (result.b != temp2_1)
                    result = sbb.d(result, result, result.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    result = nullptr
                else
                    result.b = *(esi_1 + 1)
                    char temp4_1 = *(edi_2 + 1)
                    
                    if (result.b != temp4_1)
                        result = sbb.d(result, result, result.b u< temp4_1) | 1
                    else if (i_1 == 0xfffffffe)
                        result = nullptr
                    else
                        result.b = *(esi_1 + 2)
                        char temp5_1 = *(edi_2 + 2)
                        
                        if (result.b != temp5_1)
                            result = sbb.d(result, result, result.b u< temp5_1) | 1
                        else if (i_1 == 0xffffffff)
                            result = nullptr
                        else
                            result.b = *(esi_1 + 3)
                            char temp6_1 = *(edi_2 + 3)
                            
                            if (result.b == temp6_1)
                                result = nullptr
                            else
                                result = sbb.d(result, result, result.b u< temp6_1) | 1
            
            if (result == 0 && ebx_1 u>= ecx_4)
                goto label_40e30c
            
            edi_1 = var_14
            ebx = var_18
        else if (ebx_1 u< ecx_4)
            edi_1 = var_14
            ebx = var_18
        else
        label_40e30c:
            result.b = ebx_1 != ecx_4
            
            if (result != 0)
                edi_1 = var_14
                ebx = var_18
            else
                ebx = var_18
                edi_1 = var_14
                *(arg1 + 4) = (*(*ebx + 0x24))(edi_1, ebp)
                int32_t var_2c_6 = 1
                
                if (sub_40e8b0(arg1, (*(*edi + 0x18))(arg2), ebp, arg3).b != 0)
                    result.b = 1
                    return result
        
        ebp += 1
        
        if (ebp s>= result_1)
            break
        
        esi_1 = var_4_1

result.b = 0
return result
