// 函数: sub_477030
// 地址: 0x477030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = sub_470740(arg1 + 0x38, arg2)

if (eax == 0)
    eax = sub_473460(arg1 + 4, arg2)
    
    if (eax == 0)
        eax = sub_470740(arg1 + 0x1c, arg2)
        
        if (eax == 0)
            return 0xffffffff

return *(eax + 4)
