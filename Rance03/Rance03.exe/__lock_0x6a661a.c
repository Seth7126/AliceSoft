// 函数: __lock
// 地址: 0x6a661a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*((arg1 << 3) + &data_74aee0) == 0 && __mtinitlocknum(arg1) == 0)
    __amsg_exit(0x11)
    noreturn

return EnterCriticalSection(*((arg1 << 3) + &data_74aee0))
