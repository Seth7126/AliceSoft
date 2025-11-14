// 函数: sub_506410
// 地址: 0x506410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax_2 = (*(*arg2 + 0x24))()
char eax_5

if (eax_2 != 0)
    eax_5 = (*(*arg2 + 0x28))()

if (eax_2 == 0 || eax_5 == 0)
    char eax_14 = (*(*arg2 + 0x24))()
    char eax_17
    
    if (eax_14 != 0)
        eax_17 = (*(*arg2 + 0x28))()
    
    if (eax_14 == 0 || eax_17 != 0)
        if ((*(*arg2 + 0x24))() == 0 && (*(*arg2 + 0x28))() != 0)
            int32_t eax_31 = (*(*arg2 + 0x14))()
            int32_t eax_32 = (*(*arg2 + 0x10))()
            int32_t* ecx_16 = *(arg1 + 0x10)
            
            if (ecx_16 != 0)
                return (*(*ecx_16 + 0x10))(eax_32, eax_31)
    else
        int32_t eax_19 = (*(*arg2 + 0x18))()
        int32_t eax_20 = (*(*arg2 + 0x14))()
        int32_t eax_21 = (*(*arg2 + 0x10))()
        int32_t* ecx_11 = *(arg1 + 0x10)
        
        if (ecx_11 != 0)
            return (*(*ecx_11 + 0xc))(eax_21, eax_20, eax_19)
else
    int32_t eax_7 = (*(*arg2 + 0x18))()
    int32_t eax_8 = (*(*arg2 + 0x14))()
    int32_t eax_9 = (*(*arg2 + 0x10))()
    int32_t* ecx_5 = *(arg1 + 0x10)
    
    if (ecx_5 != 0)
        return (*(*ecx_5 + 8))(eax_9, eax_8, eax_7)

return 0
