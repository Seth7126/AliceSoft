// 函数: sub_475dc0
// 地址: 0x475dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 == 0)
    return 0

int32_t eax_1

if (arg2 u>= 0xc)
    eax_1 = sub_475d70(arg3)
else
    eax_1 = 0xffffffff

struct ISoundData::decodeogg::CSoundDataOgg::VTable** esi_1

if (eax_1 == 0)
    struct ISoundData::kiwi::CSoundDataWav::VTable** eax_5 = sub_69adc6(0x58)
    
    if (eax_5 == 0)
        esi_1 = nullptr
    else
        esi_1 = sub_477330(eax_5)
    
label_475e24:
    bool cond:1_1 = (*esi_1)->vFunc_3(arg3, arg2) == 0
    struct ISoundData::decodeogg::CSoundDataOgg::VTable* eax_10 = *esi_1
    
    if (not(cond:1_1))
        if (eax_10->vFunc_8(arg4) != 0)
            return esi_1
        
        eax_10 = *esi_1
    
    eax_10->vFunc_1()
else if (eax_1 == 1)
    struct ISoundData::decodeogg::CSoundDataOgg::VTable** eax_4 = sub_637e30()
    esi_1 = eax_4
    
    if (esi_1 == 0)
        return eax_4
    
    goto label_475e24
return 0
