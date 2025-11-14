// 函数: sub_5a2e60
// 地址: 0x5a2e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg3 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg3 << 2))
        
        if (ecx != 0 && arg2 s>= 0 && arg2 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            void* ebx_1 = *(*(ecx + 0x1c) + (arg2 << 2))
            
            if (ebx_1 != 0)
                EnterCriticalSection(*(ebx_1 + 0x40) + 4)
                int32_t xmm0 = (*(ebx_1 + 0x30)).d
                int32_t var_4 = *(ebx_1 + 0x38)
                LeaveCriticalSection(*(ebx_1 + 0x40) + 4)
                *arg4 = xmm0
                EnterCriticalSection(*(ebx_1 + 0x40) + 4)
                int64_t xmm0_2 = *(ebx_1 + 0x30)
                int32_t var_4_1 = *(ebx_1 + 0x38)
                LeaveCriticalSection(*(ebx_1 + 0x40) + 4)
                *arg5 = xmm0_2:4.d
                EnterCriticalSection(*(ebx_1 + 0x40) + 4)
                int32_t eax_18 = *(ebx_1 + 0x38)
                int64_t var_c_2 = *(ebx_1 + 0x30)
                LeaveCriticalSection(*(ebx_1 + 0x40) + 4)
                *arg6 = eax_18
                int32_t* eax_21
                eax_21.b = 1
                return eax_21

arg1.b = 0
return arg1
