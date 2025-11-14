// 函数: sub_5cf3b0
// 地址: 0x5cf3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
*(arg1 + 0x234) -= 4
int32_t ecx = **(arg1 + 0x234)
int32_t eax_3 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (ecx u< eax_3)
    eax_3 = *(*(arg1 + 0x174) + (ecx << 2))
    
    if (eax_3 != 0)
        int32_t eax_5 = sub_5d5dc0(arg1 + 0x16c)
        struct sys43vm::CPage::VTable*** esi_1 = *(arg1 + 0x174) + (eax_5 << 2)
        struct sys43vm::CPage::VTable** eax_7
        void* ecx_3
        int32_t edx_1
        eax_7, ecx_3, edx_1 = sub_5d5ae0(arg1 + 0x188)
        *esi_1 = eax_7
        
        if (eax_5 s< 0)
            int32_t var_18 = 0x6ea524
            return sub_5c2400(eax_7, edx_1, ecx_3, arg1, "DG_COPY")
        
        int32_t eax_11 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
        
        if (eax_5 u< eax_11)
            eax_11 = *(arg1 + 0x174)
            ecx_3 = *(eax_11 + (eax_5 << 2))
            
            if (ecx_3 != 0)
                int32_t* eax_12
                int32_t ecx_5
                int32_t edx_2
                eax_12, ecx_5, edx_2 = sub_5d53d0(ecx_3, eax_3)
                
                if (eax_12.b != 0)
                    return sub_5ddf10(arg1 + 0x220, eax_5)
                
                char const* const var_18_2 = "copyDelegatePage"
                return sub_5c2400(eax_12, edx_2, ecx_5, arg1, "DG_COPY")
        
        int32_t var_18_4 = eax_5
        int32_t var_1c = 0x6ea558
        return sub_5c2400(eax_11, edx_1, ecx_3, arg1, "DG_COPY")

int32_t var_18_5 = ecx
int32_t var_1c_1 = 0x6ea4f8
int32_t edx
return sub_5c2400(eax_3, edx, ecx, arg1, "DG_COPY")
