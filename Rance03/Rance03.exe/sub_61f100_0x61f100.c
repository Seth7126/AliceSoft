// 函数: sub_61f100
// 地址: 0x61f100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[0x19] != 0)
    void* edi_1 = &arg1[0x15]
    void* eax_1
    
    if (arg1[0x1a] u< 0x10)
        eax_1 = edi_1
    else
        eax_1 = *edi_1
    
    sub_455870(eax_1)
    *(edi_1 + 0x10) = 0
    
    if (*(edi_1 + 0x14) u>= 0x10)
        edi_1 = *edi_1
    
    *edi_1 = 0

if (arg1[5] != 0 && arg1[6] == 0)
    sub_455870("CDirectSoundBuffer::Play()\n")
    int32_t* eax_2
    eax_2.b = 0
    return eax_2

if ((*(*arg1 + 0x18))() == 0)
    HANDLE hEvent = arg1[0x10]
    
    if (hEvent != 0)
        ResetEvent(hEvent)
    
    HANDLE hEvent_1 = arg1[0x12]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)
    
    if ((*(*arg1 + 0x48))() == 0)
        sub_455870(0x6ecef4)
        int32_t* eax_8
        eax_8.b = 0
        return eax_8

return 1
