// 函数: sub_5c37f0
// 地址: 0x5c37f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_32 = *(arg1 + 0x234)
int32_t ebx = *(eax_32 - 8)
int32_t edx = *(eax_32 - 0xc)
int32_t edi = *(eax_32 - 4)
*(arg1 + 0x234) = eax_32 - 0xc

if (edx u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
    void* esi_1 = *(*(arg1 + 0x174) + (edx << 2))
    
    if (esi_1 != 0 && ebx u< *(esi_1 + 0xc) u>> 2)
        if (*(esi_1 + 0xc) != 0)
            *(*(esi_1 + 8) + (ebx << 2)) = edi
            return sub_5ddf10(arg1 + 0x220, edi)
        
        *(ebx << 2) = edi
        return sub_5ddf10(arg1 + 0x220, edi)

uint32_t eax_30

if (edx s< 0)
    eax_30 = 0xffffffff
else
    if (edx s< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
        void* eax_14 = *(*(arg1 + 0x174) + (edx << 2))
        
        if (eax_14 != 0)
            eax_14.b = *(eax_14 + 0x14) == 3
            
            if (eax_14.b != 0)
                if (edx s< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                    void* eax_19 = *(*(arg1 + 0x174) + (edx << 2))
                    
                    if (eax_19 != 0)
                        uint32_t eax_21 = *(eax_19 + 0xc) u>> 2
                        uint32_t var_14_2 = eax_21
                        int32_t var_18 = edi
                        int32_t var_1c = ebx
                        int32_t var_20 = edx
                        int32_t var_24 = 0x6e6670
                        return sub_5c2400(eax_21, edx, arg1, arg1, "ASSIGN")
                
                int32_t var_14_3 = 0xffffffff
                int32_t var_18_1 = edi
                int32_t var_1c_1 = ebx
                int32_t var_20_1 = edx
                int32_t var_24_1 = 0x6e6670
                return sub_5c2400(0xffffffff, edx, arg1, arg1, "ASSIGN")
    
    if (edx s< 0 || edx s>= (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
        eax_30 = 0xffffffff
    else
        void* eax_28 = *(*(arg1 + 0x174) + (edx << 2))
        
        if (eax_28 == 0)
            eax_30 = 0xffffffff
        else
            eax_30 = *(eax_28 + 0xc) u>> 2

uint32_t var_14_4 = eax_30
int32_t var_18_2 = edi
int32_t var_1c_2 = ebx
int32_t var_20_2 = edx
int32_t var_24_2 = 0x6e66c0
return sub_5c2400(eax_30, edx, arg1, arg1, "ASSIGN")
