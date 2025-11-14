// 函数: sub_519280
// 地址: 0x519280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = arg1
void* result = nullptr
void* var_4 = eax
void* result_1 = nullptr
int32_t ecx = *(eax + 0x40)
int32_t* edx = *(eax + 0xa8)
int32_t ecx_1 = *(eax + 0xac)
void* var_14 = nullptr

if (edx != ecx_1)
    do
        void* ecx_4 = *edx
        int32_t esi_1 = 0
        void* edi_1 = nullptr
        int32_t ebp_1 = *(ecx_4 + 0xb4)
        int32_t* eax_1 = *(ecx_4 + 0xb0)
        uint32_t ebx_3 = (ebp_1 - eax_1 + 3) u>> 2
        
        if (eax_1 u> ebp_1)
            ebx_3 = 0
        
        if (ebx_3 != 0)
            do
                void* ecx_3 = *(*eax_1 + 4)
                
                if (ecx_3 != 0)
                    ecx_3 = *(ecx_3 + 0x18)
                
                esi_1 += 1
                edi_1 += ecx_3
                eax_1 = &eax_1[1]
            while (esi_1 != ebx_3)
            
            ecx_4 = *edx
        
        void* eax_2 = ecx_4 + 4
        int32_t ebx_4 = *(eax_2 + 0x10)
        void* ebp_6 = (((ebp_1 - *(ecx_4 + 0xb0)) s>> 2) - 1) * ecx + edi_1
        
        if (*(eax_2 + 0x14) u>= 0x10)
            eax_2 = *eax_2
        
        int32_t esi_2 = 1
        
        if (ebx_4 u< 1)
            esi_2 = ebx_4
        
        void* ecx_5
        
        if (esi_2 != 0)
            void* const edi_2 = &data_6e2cf8
            int32_t i_1 = esi_2 - 4
            
            if (esi_2 u>= 4)
                int32_t i
                
                do
                    if (*eax_2 != *edi_2)
                        goto label_519346
                    
                    eax_2 += 4
                    edi_2 += 4
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_4
            
            if (i_1 == 0xfffffffc)
                eax_4 = 0
            else
            label_519346:
                ecx_4.b = *eax_2
                char temp1_1 = *edi_2
                
                if (ecx_4.b != temp1_1)
                    eax_4 = sbb.d(eax_2, eax_2, ecx_4.b u< temp1_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_4 = 0
                else
                    ecx_4.b = *(eax_2 + 1)
                    char temp3_1 = *(edi_2 + 1)
                    
                    if (ecx_4.b != temp3_1)
                        eax_4 = sbb.d(eax_2, eax_2, ecx_4.b u< temp3_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_4 = 0
                    else
                        ecx_4.b = *(eax_2 + 2)
                        char temp4_1 = *(edi_2 + 2)
                        
                        if (ecx_4.b != temp4_1)
                            eax_4 = sbb.d(eax_2, eax_2, ecx_4.b u< temp4_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_4 = 0
                        else
                            eax_2.b = *(eax_2 + 3)
                            char temp5_1 = *(edi_2 + 3)
                            
                            if (eax_2.b == temp5_1)
                                eax_4 = 0
                            else
                                eax_4 = sbb.d(eax_2, eax_2, eax_2.b u< temp5_1) | 1
            
            if (eax_4 == 0 && ebx_4 u>= 1)
                goto label_51938a
            
            ecx_5 = var_14 + ebp_6
        else if (ebx_4 u< 1)
            ecx_5 = var_14 + ebp_6
        else
        label_51938a:
            int32_t eax_5
            eax_5.b = ebx_4 != 1
            
            if (eax_5 != 0)
                ecx_5 = var_14 + ebp_6
            else
                ecx_5 = nullptr
        
        bool cond:1_1 = result_1 s>= ecx_5
        void* var_10
        void** eax_6 = &var_10
        var_10 = ecx_5
        
        if (cond:1_1)
            eax_6 = &result_1
        
        var_14 = ecx_5
        edx = &edx[1]
        result = *eax_6
        result_1 = result
    while (edx != ecx_1)
    
    eax = var_4

void* ecx_7 = *(eax + 0xc0)

if (ecx_7 s<= 0 || *(eax + 0xc4) s<= 0)
    return result

var_4 = ecx_7
void** eax_7 = &var_4

if (ecx_7 s>= result)
    eax_7 = &result_1

return *eax_7
