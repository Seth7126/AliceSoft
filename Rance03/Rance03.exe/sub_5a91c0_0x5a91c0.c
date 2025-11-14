// 函数: sub_5a91c0
// 地址: 0x5a91c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg1 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* esi_2 = *(*(esi_1 + 0x50) + (arg1 << 2))
        
        if (esi_2 != 0)
            EnterCriticalSection(*(esi_2 + 0x1e8) + 4)
            void* ecx = *(esi_2 + 0x1f4)
            
            if (ecx == 0)
                LeaveCriticalSection(*(esi_2 + 0x1e8) + 4)
                int32_t eax_7
                eax_7.b = 1
                *arg2 = 0
                return eax_7
            
            int32_t xmm0 = sub_530d30(ecx, arg3, arg4)
            LeaveCriticalSection(*(esi_2 + 0x1e8) + 4)
            int32_t eax_10
            eax_10.b = 1
            *arg2 = xmm0
            return eax_10

int32_t eax
eax.b = 0
return eax
