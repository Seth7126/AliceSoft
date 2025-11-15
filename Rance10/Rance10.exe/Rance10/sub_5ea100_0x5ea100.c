// 函数: sub_5ea100
// 地址: 0x5ea100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 s>= 0)
    void* edi_1 = data_7fd4cc
    
    if (arg1 s< (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
        int32_t edi_2 = *(edi_1 + 0x54)
        void* esi_2 = (arg1 << 3) + 4 + edi_2
        __Smtx_lock_shared(esi_2)
        void* edi_3 = *(edi_2 + (arg1 << 3))
        __Smtx_unlock_shared(esi_2)
        
        if (edi_3 != 0)
            EnterCriticalSection(*(edi_3 + 0x1b8) + 4)
            void* ecx = *(edi_3 + 0x1c4)
            
            if (ecx == 0)
                LeaveCriticalSection(*(edi_3 + 0x1b8) + 4)
                int32_t eax_7
                eax_7.b = 0
                return eax_7
            
            int32_t ebx
            ebx.b = sub_572c20(ecx, arg3, arg4, arg2)
            LeaveCriticalSection(*(edi_3 + 0x1b8) + 4)
            int32_t eax_9
            eax_9.b = ebx.b
            return eax_9

int32_t eax
eax.b = 0
return eax
