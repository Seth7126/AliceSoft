// 函数: sub_61f890
// 地址: 0x61f890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x18) == 0 || *(arg1 + 0x48) == 0)
        eax.b = 0
        return eax
    
    int32_t* ecx = *(arg1 + 0x1c)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
        *(arg1 + 0x1c) = 0
    
    int32_t* eax_2 = *(arg1 + 0x18)
    
    if ((**eax_2)(eax_2, 0x6d9eb8, arg1 + 0x1c) s< 0)
        sub_455870("IID_IDirectSoundNotify")
        eax.b = 0
        return eax
    
    int32_t var_c_1 = *(arg1 + 0x48)
    int32_t* eax_5 = *(arg1 + 0x1c)
    int32_t var_10 = 0xffffffff
    
    if ((*(*eax_5 + 0xc))(eax_5, 1, &var_10) s< 0)
        sub_455870("IDirectSoundNotify::SetNotificationPositions()")
        int32_t* eax_6
        eax_6.b = 0
        return eax_6

eax.b = 1
return eax
