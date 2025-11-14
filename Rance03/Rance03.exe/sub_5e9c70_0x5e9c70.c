// 函数: sub_5e9c70
// 地址: 0x5e9c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 8)

if (ecx != 0 && *(arg1 + 4) == 0 && (*(*ecx + 0x68))() != 0)
    (*(**(arg1 + 8) + 0xb0))()
    
    if ((*(**(arg1 + 8) + 0x6c))() != 0)
        char eax_8 = (*(**(arg1 + 8) + 0x70))()
        void* eax_9 = **(arg1 + 8)
        
        if (eax_8 != 0)
            if ((*(eax_9 + 0x74))() != 0)
                return (*(**(arg1 + 8) + 0x78))() != 0
        else
            (*(eax_9 + 0x74))()
            (*(**(arg1 + 8) + 0x78))()

return 0
