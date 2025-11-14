// 函数: sub_423a60
// 地址: 0x423a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x114)

if (eax != *(arg1 + 0x118))
    int32_t ebx_1 = *(*(arg1 + 0x118) - 0x24)
    int32_t eax_4 = (*(**(*(arg1 + 0xe0) + 8) + 0x14))(ebx_1)
    
    if (eax_4 == 1)
        void* esi_3 = *(arg1 + 0xe0)
        void* eax_20 =
            sub_42fe50(esi_3, ebx_1, (*(**(esi_3 + 0xc) + 8))((*(**(esi_3 + 8) + 0x18))(ebx_1)))
        void* esi_4 = *(arg1 + 0xe0)
        *(arg1 + 0xf8) = eax_20
        int32_t eax_24 =
            sub_42ff90(esi_4, ebx_1, (*(**(esi_4 + 0xc) + 8))((*(**(esi_4 + 8) + 0x18))(ebx_1)))
        void* esi_5 = *(arg1 + 0xe0)
        *(arg1 + 0xfc) = eax_24
        eax = sub_4300b0(esi_5, ebx_1, (*(**(esi_5 + 0xc) + 8))((*(**(esi_5 + 8) + 0x18))(ebx_1)))
        *(arg1 + 0x100) = eax
    else
        if (eax_4 == 3)
            int32_t eax_16 = sub_42de40(*(arg1 + 0xe0), ebx_1)
            *(arg1 + 0x110) = eax_16
            return eax_16
        
        eax = eax_4 - 4
        
        if (eax_4 == 4)
            void* esi_1 = *(arg1 + 0xe0)
            int32_t eax_10 = sub_430350(esi_1, ebx_1, 
                (*(**(esi_1 + 0xc) + 0x20))((*(**(esi_1 + 8) + 0x1c))(ebx_1)))
            int32_t* ecx_4 = *(arg1 + 0xe0)
            int32_t var_10_5 = ebx_1
            *(arg1 + 0x104) = eax_10
            int32_t eax_11 = sub_42dcd0(ecx_4)
            void* esi_2 = *(arg1 + 0xe0)
            *(arg1 + 0x108) = eax_11
            int32_t eax_15 = sub_4305b0(esi_2, ebx_1, 
                (*(**(esi_2 + 0xc) + 0x20))((*(**(esi_2 + 8) + 0x1c))(ebx_1)))
            *(arg1 + 0x10c) = eax_15
            return eax_15

return eax
