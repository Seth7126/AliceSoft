// 函数: sub_555d90
// 地址: 0x555d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 2)
    int32_t* ecx_1 = *(arg1 + 0x74)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(arg1 + 0x74) = 0
else if (arg3 == 3)
    int32_t* ecx = *(arg1 + 0x78)
    
    if (ecx != 0)
        (*(*ecx + 4))()
        *(arg1 + 0x78) = 0

void** eax_6 = arg2

if (eax_6[4] != 0)
    if (arg3 == 2)
        eax_6 = sub_5588c0(eax_6)
        *(arg1 + 0x74) = eax_6
    else if (arg3 == 3)
        struct common::SuicideRefCounter<class partsengine::ISound>::partsengine::CSound::VTable** 
            eax_5 = sub_5588c0(eax_6)
        *(arg1 + 0x78) = eax_5
        return eax_5

return eax_6
