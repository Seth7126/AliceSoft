// 函数: sub_510150
// 地址: 0x510150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1

if (arg3 == 2)
    arg1 = esi[8]
    
    if (arg1 != 0)
        arg1 = (*(*arg1 + 4))()
        esi[8] = 0
else if (arg3 == 3)
    arg1 = esi[9]
    
    if (arg1 != 0)
        arg1 = (*(*arg1 + 4))()
        esi[9] = 0

void** eax_6 = arg2

if (eax_6[4] != 0)
    if (arg3 == 2)
        eax_6 = sub_5140e0(arg1, eax_6)
        esi[8] = eax_6
    else if (arg3 == 3)
        struct partsengine::ISound::partsengine::CSound::VTable** eax_5 = sub_5140e0(arg1, eax_6)
        esi[9] = eax_5
        return eax_5

return eax_6
