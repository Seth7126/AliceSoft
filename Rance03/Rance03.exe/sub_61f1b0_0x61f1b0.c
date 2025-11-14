// 函数: sub_61f1b0
// 地址: 0x61f1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_c = arg1

if ((*(*arg1 + 0x4c))() != 0)
    HANDLE hEvent = arg1[0x10]
    
    if (hEvent != 0)
        SetEvent(hEvent)
    
    enum WAIT_EVENT eax_3 = WaitForSingleObject(arg1[0xe], 0x1388)
    
    if (eax_3 == WAIT_TIMEOUT)
        sub_455870("CDirectSoundBuffer::Stop()\n")
    else if (eax_3 == WAIT_ABANDONED)
        sub_455870("CDirectSoundBuffer::Stop()\n")
    
    HANDLE hEvent_1 = arg1[0x10]
    
    if (hEvent_1 != 0)
        ResetEvent(hEvent_1)

BOOL hHandle = arg1[0xe]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0xe])
    arg1[0xe] = 0

hHandle.b = 1
return hHandle
