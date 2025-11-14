// 函数: sub_44d7f0
// 地址: 0x44d7f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = data_75d4cc
void** eax_1 = arg2

if (eax_1[5] u>= 0x10)
    eax_1 = *eax_1

int32_t* eax_2 = sub_449cc0(data_75d4c8, eax_1)

if (eax_2 != 0)
    int32_t eax_4 = (*(*eax_2 + 0x10))()
    int32_t eax_5 = (*(*eax_2 + 0x14))()
    void* esi_1 = *(arg3 + 4)
    void** edx_2 = *(arg3 + 8)
    void* ebp_1 = *(arg3 + 0xc)
    void* ebx_1 = *(arg3 + 0x10)
    arg3 = esi_1
    arg2 = edx_2
    
    if (esi_1 s< 0)
        ebp_1 += esi_1
        esi_1 = nullptr
        arg3 = nullptr
    
    if (esi_1 + ebp_1 s> eax_4)
        ebp_1 = eax_4 - esi_1
    
    if (edx_2 s< 0)
        ebx_1 += edx_2
        edx_2 = nullptr
        arg2 = nullptr
    
    if (ebx_1 + edx_2 s> eax_5)
        ebx_1 = eax_5 - edx_2
    
    int32_t eax_43
    
    if (ebp_1 s<= 0 || ebx_1 s<= 0)
        eax_43 = *eax_2
    else
        char eax_10 = (*(*eax_2 + 0x24))()
        char eax_13
        
        if (eax_10 != 0)
            eax_13 = (*(*eax_2 + 0x28))()
        
        int32_t* eax_19
        
        if (eax_10 == 0 || eax_13 == 0)
            char eax_22 = (*(*eax_2 + 0x24))()
            char eax_25
            
            if (eax_22 != 0)
                eax_25 = (*(*eax_2 + 0x28))()
            
            if (eax_22 != 0 && eax_25 == 0)
                int32_t esi_3 = **(eax + 0x14)
                int32_t eax_29 = (*(*eax_2 + 0x18))()
                *(eax + 0x14)
                eax_19 = (*(esi_3 + 0xc))(ebp_1, ebx_1, eax_29)
                goto label_44d932
            
            if ((*(*eax_2 + 0x24))() != 0)
                eax_43 = *eax_2
            else
                if ((*(*eax_2 + 0x28))() != 0)
                    eax_19 = (*(**(eax + 0x14) + 0x10))(ebp_1, ebx_1)
                    goto label_44d932
                
                eax_43 = *eax_2
        else
            int32_t esi_2 = **(eax + 0x14)
            int32_t eax_17 = (*(*eax_2 + 0x18))()
            *(eax + 0x14)
            eax_19 = (*(esi_2 + 8))(ebp_1, ebx_1, eax_17)
        label_44d932:
            
            if (eax_19 == 0)
                eax_43 = *eax_2
            else
                (*(**(eax + 0x10) + 0x5c))(eax_19, 0, 0, eax_2, arg3, arg2, ebp_1, ebx_1)
                (*(*eax_2 + 4))()
                bool cond:0_1 = sub_44e790(arg1, eax_19) == 0
                eax_43 = *eax_19
                
                if (not(cond:0_1))
                    (*(eax_43 + 4))()
                    int32_t eax_44
                    eax_44.b = 1
                    return eax_44
    
    (*(eax_43 + 4))()

eax_2.b = 0
return eax_2
