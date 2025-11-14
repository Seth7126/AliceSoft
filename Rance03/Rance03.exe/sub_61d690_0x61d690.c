// 函数: sub_61d690
// 地址: 0x61d690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct ISoundData::decodeogg::CSoundDataOgg::VTable** eax_2 =
    sub_475dc0((*(*arg1 + 0xc))(), arg3, arg2, &arg1[0x11])
arg1[7] = eax_2

if (eax_2 != 0)
    int32_t eax_4 = (*(arg1[0x11] + 0xc))()
    
    if (eax_4 != 1)
        eax_2 = (*(arg1[0x11] + 0xc))()
    
    if (eax_4 == 1 || eax_2 == 2)
        int32_t eax_7 = (*(arg1[0x11] + 0x1c))()
        
        if (eax_7 != 8)
            eax_2 = (*(arg1[0x11] + 0x1c))()
        
        if (eax_7 == 8 || eax_2 == 0x10)
            int32_t eax_10 = (*(arg1[0x11] + 0x10))()
            
            if (eax_10 != 0x5622)
                eax_2 = (*(arg1[0x11] + 0x10))()
            
            if ((eax_10 == 0x5622 || eax_2 == 0xac44) && sub_61dc60(arg1).b != 0
                    && sub_61e9f0(arg1).b != 0)
                (*(*arg1 + 0x34))(0, divu.dp.d(0:((*(*arg1[7] + 0x28))()), sub_61dcc0(arg1)))
                int32_t eax_17
                eax_17.b = 1
                return eax_17

eax_2.b = 0
return eax_2
