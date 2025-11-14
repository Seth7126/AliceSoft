// 函数: sub_61da80
// 地址: 0x61da80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg1 + 0x40))() != 0 && (*(*arg1 + 0x4c))() != 0)
    arg1[0x1c].b = 0
    BOOL hEvent = arg1[0x23]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    hEvent.b = 1
    return hEvent

return 0
