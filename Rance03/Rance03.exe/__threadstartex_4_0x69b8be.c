// 函数: __threadstartex@4
// 地址: 0x69b8be
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t* esi = sub_69f745(___get_flsindex())
int32_t ecx_2

if (esi != 0)
    esi[0x15] = arg1[0x15]
    esi[0x16] = arg1[0x16]
    esi[1] = arg1[1]
    ecx_2 = sub_69faef(arg1)
else
    esi = arg1
    
    if (sub_69f764(___get_flsindex(), esi) == 0)
        ExitThread(GetLastError())
        noreturn
    
    uint32_t eax_5
    eax_5, ecx_2 = GetCurrentThreadId()
    *esi = eax_5

int32_t eax_9 = sub_69f7d7(ecx_2)
esi[0xed] = eax_9

if (eax_9 != 0)
    esi[0xed] = __initMTAoncurrentthread()

__callthreadstartex()
noreturn
